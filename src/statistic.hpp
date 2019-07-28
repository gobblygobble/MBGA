#include <iostream>
#include <cstdlib>
#include <vector>

#include "common.hpp"

#pragma once

class BatStatistic {
public:
    BatStatistic(int current_year, enum team current_team, position current_position);
    ~BatStatistic();

    float GetBA();
    float GETOBP();
    float GetSLG();
    float GetOPS();
    int GetTB();
    int GetXBH();

    void PrintStats();
private:
    int year;
    std::vector<enum team> *team;

    int games_played;
    int plate_appearances;
    int at_bats;

    int hits;
    int double_hits;
    int triple_hits;
    int home_runs;
    int runs_scored;
    int runs_batted_in;

    int stolen_bases;
    int caught_stealing;
    
    int strikeouts;
    int base_on_balls;
    int hit_by_pitch;
    int double_plays;

    int sacrifice_bunts;
    int sacrifice_flies;

    position main_position;
};
