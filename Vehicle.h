//
// Created by Mateusz Idziejczak on 16/11/2023.
//
#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
public:
    Vehicle(std::string name, int mileage, int speed);

    virtual int driveAndGetMileage();

    std::string toString() const;

    void setSpeed(int a);

    bool operator<(const Vehicle &other) const;

    bool operator>(const Vehicle &other) const;

protected:
    std::string name;
    int mileage;
    int speed;
};

#endif // VEHICLE_H
