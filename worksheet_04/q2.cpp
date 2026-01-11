#include <iostream>
using namespace std;


class Weapon {
public:

    virtual void attack() const = 0;


    virtual ~Weapon() {}
};


class Sword : public Weapon {

public:
    void attack() const override {
        cout << "Swing! The sword cuts the air." << endl;
    }
};


class Bow : public Weapon {
public:

    void attack() const override {
        cout << "Fwoosh! The arrow is loosed." << endl;
    }
};


void performAttack(const Weapon& weapon) {
    weapon.attack();
}

int main() {

    Sword longsword;
    Bow yewBow;


    performAttack(longsword);
    performAttack(yewBow);

    return 0;
}
