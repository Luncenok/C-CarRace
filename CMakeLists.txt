cmake_minimum_required(VERSION 3.26)
project(OP)

set(CMAKE_CXX_STANDARD 17)

add_executable(OP main.cpp
        Vehicle.cpp
        Vehicle.h
        Car.cpp
        Car.h
        SportCar.cpp
        SportCar.h
        NormalCar.cpp
        NormalCar.h
        Bike.cpp
        Bike.h
        CityBike.cpp
        CityBike.h
        OffRoader.cpp
        OffRoader.h
        Race.cpp
        Race.h)
