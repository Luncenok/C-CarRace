#include <iostream>
#include <thread>
#include <utility>
#include <vector>
#include <algorithm>

class Sheep {
public:
    Sheep(std::string  name, int months,int days) : name(std::move(name)), months(months), days(days) {};
    std::string name;
    int months;
    int days;
    friend std::ostream &operator<<(std::ostream &os, std::vector<Sheep>& sheep);
};

void sortSheep(std::vector<Sheep>& sheep) {
    auto compare = [](const Sheep& lhs, const Sheep& rhs) -> bool
    {
        return lhs.days > rhs.days;
    };
    std::sort(sheep.begin(), sheep.end(), compare);
}

std::string getOldestSheep(const std::vector<Sheep>& sheep) {
    Sheep oldest = Sheep("oldest", 0, 0);
    for (const Sheep& s: sheep) {
        if (s.months > oldest.months) oldest = s;
    }
    return oldest.name;
}

void youngSheep(const std::vector<Sheep>& sheep) {
    std::vector<Sheep> young;
    for (const Sheep& s: sheep) {
        if (s.months < 6) young.emplace_back(s);
    }
    std::cout << young<< std::endl;
};

std::ostream &operator<<(std::ostream &os, std::vector<Sheep>& sheep) {
    for (Sheep s:sheep)
        os << s.name << " months: " << s.months << " days since last shearing: " << s.days << std::endl;
    return os;
}

int main()
{
    std::vector<Sheep> sheep;
    sheep.emplace_back("Daisy", 5, 10);
    sheep.emplace_back("Damon", 10, 5);
    sheep.emplace_back("Dave", 4, 17);
    sheep.emplace_back("David", 12, 13);
    sheep.emplace_back("Donald", 14, 11);
    std::cout << "Sheep before sorting: " << std::endl;
    std::cout << sheep << std::endl;
    sortSheep(sheep);
    std::cout << "Sheep after sorting: " << std::endl;
    std::cout << sheep << std::endl;
    std::cout << "The oldest sheep: " <<
              getOldestSheep(sheep) << std::endl;
    std::cout << "Sheep less than 6 months old: " << std::endl;
    youngSheep(sheep);
    return 0;
}