//
// Created by Mihnea on 5/29/25.
//

#include "Service.h"
#include "Autobuz.h"
#include "Tramvai.h"

Service::Service() {
}

void Service::add(int id, int capacitate, string tip) {
    if (tip == "Autobuz") {
        MijlocDeTransport* bus = new Autobuz(id, capacitate);
        repo.add(bus);
    } else if (tip == "Tramvai") {
        MijlocDeTransport* tramvai = new Tramvai(id, capacitate);
        repo.add(tramvai);
    }
}

TransportRepository<MijlocDeTransport> Service::search(int capacity) {
    TransportRepository<MijlocDeTransport> rez;
    for (int i = 0; i < repo.getData().size(); i++) {
        if (repo.getData()[i]->getCapacitate() > capacity) {
            rez.add(repo.getData()[i]);
        }
    }
    return rez;
}

int Service::getCount() {
    return repo.getData().size();
}

string Service::dataToString() {
    string sol = "";
    for (int i = 0; i < repo.getData().size(); i++) {
        sol += repo.getData()[i]->toString() + "\n";
    }
    return sol;
}

MijlocDeTransport* Service::getVehiculCapacitateMaxima() {
    int maxim = 0;
    MijlocDeTransport* maxima = NULL;
    for (int i = 0; i < repo.getData().size(); i++) {
        if (repo.getData()[i]->getCapacitate() > maxim) {
            maxima = repo.getData()[i];
            maxim = maxima->getCapacitate();
        }
    }
    return maxima;
}
