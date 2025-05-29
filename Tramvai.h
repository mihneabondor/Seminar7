//
// Created by Mihnea on 5/29/25.
//

#ifndef TRAMVAI_H
#define TRAMVAI_H
#include "MijlocDeTransport.h"

using namespace std;
class Tramvai : public MijlocDeTransport {
    int id, capacitate;
    string tip;
    public:
    Tramvai();
    Tramvai(int id, int capacitate, string tip = "Tramvai");

    int getId() override;
    int getCapacitate() override;
    string getTip() override;
    string toString() override;

};



#endif //TRAMVAI_H
