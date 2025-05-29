//
// Created by Mihnea on 5/29/25.
//

#include "Tests.h"
#include <cassert>

#include "Autobuz.h"
#include "MijlocDeTransport.h"
#include "Service.h"
#include "Tramvai.h"
#include "TransportRepository.h"

void Tests::testeMijlocTransport() {
    MijlocDeTransport* v1 = new Autobuz(1, 1);
    MijlocDeTransport* v2 = new Autobuz(2, 2);
    MijlocDeTransport* v3 = new Tramvai(3, 3);
    assert(v1->getId() == 1 && v2->getId() == 2 && v3->getId() == 3);
    assert(v1->getCapacitate() == 1 && v2->getCapacitate() == 2 && v3->getCapacitate() == 3);
    assert(v1->getTip() == "Autobuz" && v2->getTip() == "Autobuz" && v3->getTip() == "Tramvai");
}

void Tests::testeRepo() {
    TransportRepository<MijlocDeTransport> repo;

    MijlocDeTransport* v1 = new Autobuz(1, 1);
    MijlocDeTransport* v2 = new Autobuz(2, 2);
    MijlocDeTransport* v3 = new Tramvai(3, 3);

    repo.add(v1);
    repo.add(v2);
    repo.add(v3);

    assert(repo.getData().size() == 3);
    assert(repo.getData()[0] == v1 && repo.getData()[1] == v2 && repo.getData()[2] == v3);
}

void Tests::testeService() {
    Service service;

    service.add(1, 1, "Autobuz");
    service.add(2, 2, "Autobuz");
    service.add(3, 3, "Tramvai");

    assert(service.getCount() == 3);
    assert(service.getVehiculCapacitateMaxima()->getCapacitate() == 3);
}

Tests::Tests() {
}

void Tests::runTests() {
    testeMijlocTransport();
    testeRepo();
    testeService();
}
