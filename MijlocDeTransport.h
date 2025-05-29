//
// Created by Mihnea on 5/29/25.
//

#ifndef MIJLOCDETRANSPORT_H
#define MIJLOCDETRANSPORT_H
#include <string>

using namespace std;
class MijlocDeTransport {

public:
    virtual ~MijlocDeTransport() = default;

    MijlocDeTransport();

    virtual int getId() = 0;
    virtual int getCapacitate() = 0;
    virtual string getTip() = 0;
    virtual string toString() = 0;
};

inline MijlocDeTransport::MijlocDeTransport() {
}


#endif //MIJLOCDETRANSPORT_H
