#include "pid.h"
#include <stdio.h>
#include <iostream>

int main() {

    PID pid = PID(0.01, 100, -100, 1, 0.001, 0.5); // dat gia tri (delta t, max, min, Kp, Kd, Ki)

    double val = 50; // Gia tri ban dau
    for (int i = 0; i < 200; i++) {
        double inc = pid.calculate(0, val); // Tinh toan de dua ra output, dau vao la (gia tri can set, gia tri hien tai)
        std::cout << "val:" << val << "\n inc: " << inc << "\n \n";
        val += inc; // Cap nhat output
    }

    return 0;
}
