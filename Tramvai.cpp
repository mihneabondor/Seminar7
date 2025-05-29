//
// Created by Mihnea on 5/29/25.
//

#include "Tramvai.h"

Tramvai::Tramvai() {
}

Tramvai::Tramvai(int id, int capacitate, string tip) {
    this->id = id;
    this->capacitate = capacitate;
    this->tip = tip;
}

int Tramvai::getId() {
    return id;
}

int Tramvai::getCapacitate() {
    return capacitate;
}

string Tramvai::getTip() {
    return tip;
}

string Tramvai::toString() {
    return to_string(id) + " " + to_string(capacitate) + " " + tip;
}