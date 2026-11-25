#include "score_stats.h"

double sumOf(const std::vector<double>& scores) {
    double sum = 0;
    for (double s : scores) {
        sum += s;
    }
    return sum;
}

double maxOf(const std::vector<double>& scores) {
    double mx = scores[0];
    for (double s : scores) {
        if (s > mx) mx = s;
    }
    return mx;
}

double minOf(const std::vector<double>& scores) {
    double mn = scores[0];
    for (double s : scores) {
        if (s < mn) mn = s;
    }
    return mn;
}

double meanOf(const std::vector<double>& scores) {
    return sumOf(scores) / scores.size();
}
