//#define DEBUG_MODE_FULL
#include "script_component.hpp"

private _unit = _this select 0;
private _dangerCausedBy = _this select 1;
private _dangerCause = _this select 2;
if(_unit != leader _unit) exitWith {
    [];
};
private _unitsThatNeedCover = [];
if((_unit targetKnowledge _dangerCausedBy select 5) < 6) then {
    
    _unitsThatNeedCover = [_unit, _dangerCausedBy] call FUNC(pt_getUnitsThatNeedCover);
    TRACE_1("AI knew of danger: need new cover ", _unitsThatNeedCover);
}else {
    _unitsThatNeedCover = units _unit;
    TRACE_1("AI did not know of danger: need  cover ", _unitsThatNeedCover);
};


private _deniedCover = [];
{
    //just use _x as a default so we know that it is blank
    private _coverObj = _x getVariable [QGVAR(savedCover), _x];
    if(_coverObj != _x) then {
        _deniedCover pushBack _coverObj;
    };
} forEach units _unit;

private _activeCover = [];
{
    scopeName "loop";
    if(count _activeCover >= count _unitsThatNeedCover) then {
        breakOut "loop";
    };
    
    private _bbr = boundingBoxReal _x;
    private _p1 = _bbr select 0;
    private _p2 = _bbr select 1;
    private _maxHeight = abs ((_p2 select 2) - (_p1 select 2));
    
    if(_maxHeight > 1.2) then {
        _building = _x;
        if(_x isKindOf "HouseBase") then {
            {
                if(random 1 > 0.2 && (count _activeCover < count _unitsThatNeedCover)) then {
                    _activeCover pushBack [ATLToASL _x, _building];
                };
            } forEach ([_x] call BIS_fnc_buildingPositions);
        }else {
            private ["_coverPos"];
            
            if((_unit targetKnowledge _dangerCausedBy select 5) < 6) then {
                _coverPos = [_unit, _dangerCausedBy, _x] call FUNC(pt_getCoverPos);
            } else {
                _coverPos = [_unit, _x] call FUNC(pt_getCoverPosUnknownEnemy);
            };
            
            if(count _coverPos > 0) then {
                _activeCover pushBack [_coverPos, _x];
            };
        };
    };
} forEach (nearestObjects [_unit, [], GVAR(MAX_DIST_TO_COVER)]);

TRACE_2("found ", _activeCover, _unitsThatNeedCover);
{
    _forEachUnit = _unitsThatNeedCover select _forEachIndex;
    _forEachUnit setVariable [QGVAR(savedCover),_x select 1,false];
    [_forEachUnit, _x select 0, _dangerCausedBy] spawn FUNC(pt_moveToPoint);
} forEach _activeCover;

