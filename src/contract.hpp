#include <iostream>
#include <cstdlib>
#include <vector>

#include "common.hpp"

#pragma once

class Contract {
public:
    Contract(int _first_year, int _length, int _total_salary, int option);
    ~Contract();
private:
    int first_year;
    int last_year;
    int length;
    int total_salary;
    int option;
}
