//
// Created by Mateusz Idziejczak on 16/11/2023.
//

#include "Race.h"
#include <algorithm>

Race::Race() {
    vehicles = new std::vector<Vehicle *>();
}

Race::~Race() {
    for (auto v : *vehicles) {
        delete v;
    }
    vehicles->clear();
    delete vehicles;
}

int Race::Run(int n) {
    if (!prepare()) return 1;
    if (!start(n)) return 1;
    return 0;
}

std::ostream &operator<<(std::ostream &os, const Race &p) {
    os << "Race:" << std::endl;
    std::sort(p.vehicles->begin(), p.vehicles->end(), [](const Vehicle *a, const Vehicle *b) {
        return *a > *b;
    });
    for (auto v : *p.vehicles) {
        os << v->toString() << std::endl;
    }
    return os;
}

Race &Race::operator+=(Vehicle *vehicle) {
    vehicles->emplace_back(vehicle);
    return *this;
}

Race &Race::operator-=(Vehicle *vehicle) {
    vehicles->erase(std::remove(vehicles->begin(), vehicles->end(), vehicle), vehicles->end());
    delete vehicle;
    return *this;
}

int Race::prepare() {
    return !vehicles->empty();
}

int Race::start(int n) {
    for (int i = 0; i < n; ++i) {
        for (Vehicle *v : *vehicles) {
            v->driveAndGetMileage();
        }
    }
    std::cout << *this;
    if (vehicles->at(0) <= new Vehicle("test", 0, 0)) return 0;
    return 1;
}
