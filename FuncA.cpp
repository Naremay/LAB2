#include "FuncA.h"
#include <cmath>

double FuncA::calculate(double x, int n = 3) {
    double sum = 0.0;
    for (int k = 0; k < 3; ++k) {
        double term = std::pow(x, 2 * k) / tgamma(2 * k + 1);
        sum += term;
    }
    return sum;
}

