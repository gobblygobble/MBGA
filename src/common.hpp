#include <iostream>
#include <cstdlib>
#include <vector>

#pragma once

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
    int overall_movement;   // how much the pitch moves overall
    int end_movement;       // how filthy the pitch gets towards the end
};
typedef struct pitchtype pitchtype;

enum RLtype {
    right,
    left,
    both,
};
typedef enum RLtype RLtype;
