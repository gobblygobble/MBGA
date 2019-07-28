#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

#include "common.hpp"

int MAXSTAT = 150;
int MINSTAT = 50;

std::string get_team_name(enum team name) {
    switch(name) {
        case BAL:
            return "Baltimore Orioles";
        case BOS:
            return "Boston Red Sox";
        case NYY:
            return "New York Yankees";
        case TB:
            return "Tampa Bay Rays";
        case TOR:
            return "Toronto Blue Jays";
        case CHW:
            return "Chicago White Sox";
        case CLE:
            return "Cleveland Indians";
        case DET:
            return "Detroit Tigers";
        case KC:
            return "Kansas City Royals";
        case MIN:
            return "Minnesota Twins";
        case HOU:
            return "Houston Astros";
        case LAA:
            return "Los Angeles Angels";
        case OAK:
            return "Oakland Athletics";
        case SEA:
            return "Seattle Mariners";
        case TEX:
            return "texas Rangers";
        case ATL:
            return "Atlanta Braves";
        case MIA:
            return "Miami Marlins";
        case NYM:
            return "New York Mets";
        case PHI:
            return "Philadelphia Phillies";
        case WSH:
            return "Washington Nationals";
        case CHC:
            return "Chicago Cubs";
        case CIN:
            return "Cincinatti Reds";
        case MIL:
            return "Milwaukee Brewers";
        case PIT:
            return "Pittsburg Pirates";
        case STL:
            return "St. Louis Cardinals";
        case ARI:
            return "Arizona Diamondbacks";
        case COL:
            return "Colorado Rockies";
        case LAD:
            return "Los Angeles Dodgers";
        case SD:
            return "San Diego Padres";
        case SF:
            return "San Francisco Giants";
        default:
            assert(0);
    }
    return "No";
}

std::string get_position(position pos) {
    switch (pos) {
        case DESIGNATED_HITTER:
            return "DH";
        case PITCHER:
            return "P";
        case CATCHER:
            return "C";
        case FIRST_BASE:
            return "1B";
        case SECOND_BASE:
            return "2B";
        case THIRD_BASE:
            return "3B";
        case SHORTSTOP:
            return "SS";
        case LEFT_FIELD:
            return "LF";
        case CENTER_FIELD:
            return "CF";
        case RIGHT_FIELD:
            return "RF";
        default:
            assert(0);
    }
    return "No";
}
