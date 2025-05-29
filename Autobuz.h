//
// Created by Mihnea on 5/29/25.
//

#ifndef AUTOBUZ_H
#define AUTOBUZ_H
#include "MijlocDeTransport.h"

using namespace std;
class Autobuz : public MijlocDeTransport {
    int id, capacitate;
    string tip;
    public:
    Autobuz();
    Autobuz(int id, int capacitate, string tip = "Autobuz");
    int getId() override;
    int getCapacitate() override;
    string getTip() override;
    string toString() override;
};



#endif //AUTOBUZ_H
