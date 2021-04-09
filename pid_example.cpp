#include "pid.h"
#include <stdio.h>
#include <iostream>

int main() {

    PID pid = PID(0.01, 100, -100, 1, 0.001, 0.5);

    double val = 50;
    for (int i = 0; i < 200; i++) {
        double inc = pid.calculate(0, val);
        std::cout << "val:" << val << "\n inc: " << inc << "\n \n";
        val += inc;
    }

    return 0;
}