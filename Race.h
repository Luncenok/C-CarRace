//
// Created by Mateusz Idziejczak on 16/11/2023.
//

#ifndef RACE_H
#define RACE_H

#include <iostream>
#include <vector>

#include "Vehicle.h"

class Race {
public:
    Race();
    ~Race();

    int Run(int n);

    friend std::ostream &operator<<(std::ostream &os, const Race &p);

    Race &operator+=(Vehicle *vehicle);

    Race &operator-=(Vehicle *vehicle);

private:
    std::vector<Vehicle *> *vehicles;

    int prepare();

    int start(int n);
};

#endif // RACE_H
