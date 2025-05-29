//
// Created by Mihnea on 5/29/25.
//

#include "Autobuz.h"

Autobuz::Autobuz() {
}

Autobuz::Autobuz(int id, int capacitate, string tip) {
    this->id = id;
    this->capacitate = capacitate;
    this->tip = tip;
}

int Autobuz::getId() {
    return id;
}

int Autobuz::getCapacitate() {
    return capacitate;
}

string Autobuz::getTip() {
    return "Autobuz";
}

string Autobuz::toString() {
    return to_string(id) + " " + to_string(capacitate) + " " + tip;
}
