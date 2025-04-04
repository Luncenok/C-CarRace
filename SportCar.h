//
// Created by Mateusz Idziejczak on 16/11/2023.
//

#ifndef SPORTCAR_H
#define SPORTCAR_H

#include "Car.h"

class SportCar : public Car {
public:
    SportCar(std::string name, int mileage, int speed, int nitro, bool isRed);

    int driveAndGetMileage() override;

    void addGasForFun();

protected:
    bool isRed;
};

#endif // SPORTCAR_H

