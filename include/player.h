#include <iostream>
#include <cstdlib>
#include <vector>

#include "common.hpp"
#include "contract.hpp"
#include "statistic.hpp"

#pragma once

class Player {
public:
    Player();
    ~Player();

    std::string GetFullName();
private:
    // personal information
    std::string first_name;
    std::string last_name;
    int age;
    int player_id;
    
    bool is_batter;
    bool is_pitcher;
    RLtype batting_hand;
    RLtype pitching_hand;

    // batting stats
    int rcontact;           // how well the player can contact a pitch against a right pitcher
    int lcontact;           // how well the player can contact a pitch against a left pitcher
    int power;              // batting power
    int eye;                // batting eye
    int bunt;               // how well the player can succeed bunts
    // fielding stats
    int defence;            // how well the player can field overall - includes sliding, catching, and not having errors
    int throw_power;        // how strong the player can throw while fielding - preferred by OF, C, and 3B (SS)
    int throw_accuracy;     // how accurate the player can throw while fielding
    // pitching stats
    int velocity;           // velocity of pitch - should have a correlation with the throw_power from fielding stats
    int command;            // how well the player can pitch to a certain location - has to do with BB and AVG -> WHIP
    std::vector<pitchtype>  // vector of types of pitches the player can throw, and their movement stats - fastball only if batter
    // common stats
    int running;            // how fast the player can run, both on bases and while fielding
    int maximum_stamina;    // maximum stamina of player
    int stamina;            // current stamina of player
    // other info
    int health;             // general health condition of player - low health means more injuries
    Contract contract;      
    std::vector<BatStatistic *> batting_history;
    std::vector<PitchStatistic *> pitching_history;
};
