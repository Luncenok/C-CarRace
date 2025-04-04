#include <bits/stdc++.h>

#include "SportCar.h"
#include "NormalCar.h"
#include "OffRoader.h"
#include "CityBike.h"
#include "Race.h"

using namespace std;


int main() {
    Race race;
    Vehicle *samochutJanusza = new SportCar("janusz", 0, 15, 25, true);
    Vehicle *samochutRyszarda = new NormalCar("ryszard", 0, 10, 15, 3);
    race += samochutJanusza;
    race += samochutRyszarda;
    race += new SportCar("krzysiek", 0, 10, 30, false);
    race += new NormalCar("witek", 0, 20, 30, 5);
    race += new OffRoader("grażyna", 0, 15, 20, false);
    race += new CityBike("bożenka", 0, 5, 30, true, samochutJanusza);
    race += new OffRoader("kazik", 0, 10, 25, true);
    race += new CityBike("bożenka", 0, 20, 15, false, samochutRyszarda); // pomylila przerzutki
    cout << race;
    return race.Run(100);
}