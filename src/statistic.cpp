#include <iostream>
#include <cstdlib>
#include <vecgor>

#include "common.hpp"
#include "statistic.hpp"

BatStatistic::BatStatistic(int current_year, enum team current_team, position current_position) {
    assert(current_position != PITCHER);

    year = current_year;
    team = new std::vector<enum team>();

    games_played = 0;
    plate_appearances = 0;
    at_bats = 0;

    hits = 0;
    double_hits = 0;
    triple_hits = 0;
    home_runs = 0;
    runs_scored = 0;
    runs_batted_in = 0;

    stolen_bases = 0;
    caught_stealing = 0;

    strikeouts = 0;
    base_on_balls = 0;
    hit_by_pitch = 0;
    double_plays = 0;

    sacrifice_bunts = 0;
    sacrifice_flies = 0;

    main_position = current_position;
    team->push_back(current_team);
}

BatStatistic::~BatStatistic() {
    delete team;
}

float BatStatistic::GetBA() {
    return ((float)hits) / ((float)at_bats);
}

float BatStatistic::GetOBP() {
    float numerator = hits + base_on_balls + hit_by_pitch;
    float denominator = at_bats + base_on_balls + hit_by_pitch + sacrifice_flies;
    return numerator / denominator;
}

float BatStatistic::GetSLG() {
    float numerator = (float)GetTB();
    float denominator = at_bats;
    return numerator / denominator;
}

float GetOPS() {
    return GetOBP() + GetSLG();
}

int GetTB() {
    int single = hits - GetXBH();
    return (1 * single) + (2 * double_hits) + (3 * triple_hits) + (4 * home_runs);
}

int GetXBH() {
    return double_hits + triple_hits + home_run;
}
