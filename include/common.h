#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

#pragma once

extern int MAXSTAT;
extern int MINSTAT;

enum pitch {
    fourseam_fastball,
    twoseam_fastball,
    cutter,
    curve,
    slider,
    fork,
    changeup,
    circle_changeup,
    screwball,
    splitter,
    palmball,
    knuckle_ball,
    oneseam_fastball,   // is this even real?
    slurve,             // is this even real?
};

struct pitchtype {
    enum pitch pitch;       // type of pitch
    int overall_movement;   // how much the pitch moves overall: 변화
    int end_movement;       // how filthy the pitch gets towards the end: 구위
};
typedef struct pitchtype pitchtype;

enum RLtype {
    both,
    right,
    left,
};
typedef enum RLtype RLtype;

enum team {
    // AL EAST
    BAL, BOS, NYY, TB, TOR,
    // AL CENTRAL
    CHW, CLE, DET, KC, MIN,
    // AL WEST
    HOU, LAA, OAK, SEA, TEX,
    // NL EAST
    ATL, MIA, NYM, PHI, WSH,
    // NL CENTRAL
    CHC, CIN, MIL, PIT, STL,
    // NL WEST
    ARI, COL, LAD, SD, SF,
};

enum position {
    DESIGNATED_HITTER,
    PITCHER,
    CATCHER,
    FIRST_BASE,
    SECOND_BASE,
    THIRD_BASE,
    SHORTSTOP,
    LEFT_FIELD,
    CENTER_FIELD,
    RIGHT_FIELD,
};
typedef enum position position;

std::string get_team_name(enum team name);
std::string get_position(position pos);
