#include <iostream>
#include <vector>
#include <iomanip>

#include "score_stats.h"

int main() {
    int n;
    std::cin >> n;

    if (n <= 0) {
        std::cerr << "Error: n must be positive\n";
        return 1;
    }

    std::vector<double> v;
    for (int i = 0; i < n; i++) {
        double x;
        std::cin >> x;
        v.push_back(x);
    }

    std::cout << "N = " << n << "\n"
              << "Max = " << maxOf(v) << "\n"
              << "Min = " << minOf(v) << "\n"
              << "Mean = " << std::fixed << std::setprecision(2)
              << meanOf(v) << "\n";
    return 0;
}
