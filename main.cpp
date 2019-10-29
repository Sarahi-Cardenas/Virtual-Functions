//
//  main.cpp
//  Polymorphism
//
//  Created by Sarahi Cardenas Trejo on 10/29/19.
//  Copyright © 2019 Sarahi Cardenas Trejo. All rights reserved.
//

#include <iostream>
using namespace std;

class Voldemort{
protected:
    int attack;
public:
    void setAttackFunction(int a){
    attack = a;
    }
};

class Pettigrew: public Voldemort{
public:
    void darkMagic(){
        cout << "Pff pff gnah Crucio! -" << attack << endl;
    }
};

class LuciusMalfoy: public Voldemort{
public:
    void darkMagic(){
        cout << "Petrificus Totalus!...filthy MudBlood... -" << attack << endl;
    }
};

class Bellatrix: public Voldemort{
public:
    void darkMagic(){
        cout << "HAHA! Avada Kedavra! -" << attack << endl;
    }
};

int main() {
    
    Pettigrew p;
    LuciusMalfoy l;
    Bellatrix b;
    Voldemort *voldemort1 = &p;
    Voldemort *voldemort2 = &l;
    Voldemort *voldemort3 = &b;
    voldemort1->setAttackFunction(750);
    voldemort2->setAttackFunction(400);
    voldemort3->setAttackFunction(1000);
    p.darkMagic();
    l.darkMagic();
    b.darkMagic();
    
    return 0;
}
