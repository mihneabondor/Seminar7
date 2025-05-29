//
// Created by Mihnea on 5/29/25.
//

#ifndef UI_H
#define UI_H
#include "Service.h"


class UI {
    Service service;
    vector<string> options;

    void printOptions();
    int readOption();

    void add();
    void printCount();
    void printData();
    void printVehiculCapacitateMaxima();
    TransportRepository<MijlocDeTransport> searchVehiculeCapacitate();
    void printVehiculeCapacitateMaiMare();

    public:
    UI();

    void runConsole();
};



#endif //UI_H
