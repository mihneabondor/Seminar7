//
// Created by Mihnea on 5/29/25.
//

#include "UI.h"

#include <iostream>

void UI::printOptions() {
    for (int i = 0; i < options.size(); i++) {
        cout << i+1 << ". " << options[i] << '\n';
    }
}

int UI::readOption() {
    int option;
    cin >> option;
    return option;
}

void UI::add() {
    cout << "id ";
    int id = readOption();
    cout << "capacitate ";
    int capacitate = readOption();
    service.add(id, capacitate, "");
}

void UI::printCount() {
    cout << service.getCount() << '\n';
}

void UI::printData() {
    cout << service.dataToString();
}

void UI::printVehiculCapacitateMaxima() {
    cout << service.getVehiculCapacitateMaxima()->toString() << endl;
}

TransportRepository<MijlocDeTransport> UI::searchVehiculeCapacitate() {
    cout << "capacitate ";
    int capacitate = readOption();
    TransportRepository<MijlocDeTransport> sol = service.search(capacitate);
    return sol;
}

void UI::printVehiculeCapacitateMaiMare() {
    TransportRepository<MijlocDeTransport> sol = searchVehiculeCapacitate();
    for (int i = 0; i < sol.getData().size(); i++) {
        cout << sol.getData()[i]->toString() << '\n';
    }
}

UI::UI() {
    options.push_back("Adaugare");
    options.push_back("Afisare capacitate mai mare");
    options.push_back("Afisare count");
    options.push_back("Afisare capacitate maxima");
    options.push_back("Afisare tot");
}

void UI::runConsole() {
    while (true) {
        printOptions();
        int option = readOption();
        switch (option) {
            case 1:
                add();
                break;
            case 2:
                printVehiculeCapacitateMaiMare();
                break;
            case 3:
                printCount();
                break;
            case 4:
                printVehiculCapacitateMaxima();
                break;
            case 5:
                printData();
                break;
            default:
                cout << "Optiune invalidă";
                break;
        }
        cout << "\n\n";
    }
}
