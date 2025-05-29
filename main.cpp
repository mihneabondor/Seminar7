#include <iostream>

#include "Tests.h"
#include "UI.h"

int main() {
    Tests tests;
    tests.runTests();
    UI ui;
    ui.runConsole();
    return 0;
}
