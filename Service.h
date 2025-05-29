//
// Created by Mihnea on 5/29/25.
//

#ifndef SERVICE_H
#define SERVICE_H
#include "MijlocDeTransport.h"
#include "TransportRepository.h"


class Service {
    TransportRepository<MijlocDeTransport> repo;
    public:
    Service();

    void add(int id, int capacitate, string tip);
    TransportRepository<MijlocDeTransport> search(int capacity);

    int getCount();
    string dataToString();

    MijlocDeTransport* getVehiculCapacitateMaxima();
};


#endif //SERVICE_H
