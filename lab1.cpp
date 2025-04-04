#include <iostream>
#include <thread>

class Pokemon {
public:
    Pokemon(const std::string& name,
            int attack,
            int health,
            int frozen) : mName(name), attack(attack), health(health), frozen(frozen) {}

    void takeTurn(Pokemon& p) {
        std::cout<<p.mName<<" is doing nothing!"
    }

    int getAttack() const {
        return attack;
    }
    int getFrozen() const {
        return frozen;
    }
    int getHealth() const {
        return health;
    }

    void setAttack(int a) {
        attack = a;
    }
    void setHealth(int a) {
        health = a;
    }
    void setFrozen(int a) {
        frozen = a;
    }

    Pokemon &operator+=(int p) //inline definition
    {
        health += p;
        return *this;
    }

    Pokemon &operator-=(int p) //inline definition
    {
        health -= p;
        return *this;
    }

    Pokemon &operator--() //inline definition
    {
        --health;
        return *this;
    }

    Pokemon &operator++() //inline definition
    {
        --health;
        return *this;
    }

    friend std::ostream &operator<<(std::ostream &os, const Pokemon *p);

private:
    std::string mName;
    int attack;
    int health;
    int frozen;
};

std::ostream &operator<<(std::ostream &os, const Pokemon *p) {
    os << p->mName << " attack: " << p->attack << " health: " << p->health;
    return os;
}

class Pikachu : public Pokemon {
public:
    Pikachu() : Pokemon("Pikachu", 2, 10, 0) {};
};
class Bulbasaur : public Pokemon {
public:
    Bulbasaur() : Pokemon("Bulbasaur", 1, 20, 0) {};
};

int main() {
    Pokemon* p = new Pikachu();
    Pokemon* b = new Bulbasaur();
    std::cout<<p<<std::endl<<b<<std::endl;
    Pokemon* player1;
    Pokemon* player2;
    char choice1, choice2;
    std::cout<<"Player 1 chooses pokemon: ";
    std::cin>>choice1;
    std::cout<<"Player 2 chooses pokemon: ";
    std::cin>>choice2;
    if (choice1 == 'p') player1 = p;
    else if (choice1 == 'b') player1 = b;
    else return 0;
    if (choice2 == 'p') player2 = p;
    else if (choice2 == 'b') player2 = b;
    else return 0;
    *player1 += 20;
    ++*player2;
    std::cout<<"Player 1 pokemon: "<<player1<<"\nPlayer 2 pokemon: "<<player2;
    return 0;
}
