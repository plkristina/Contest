std::tuple<int, int> reduce(int d1, int d2) {
    int min;
    if (abs(d1) < d2) min = abs(d1);
    else min = d2;
    for (int i = min; i >= 2; --i) {
        if ((abs(d1) % i == 0) and (d2 % i == 0)) {
            d1 /= i;
            d2 /= i;
        };
    }
    return std::tuple(d1, d2);
}

std::tuple<int, int, int> find_lcm(int d1, int d2) {
    int max, min;
    if (d1 > d2) {
        max = d1;
        min = d2;
        if (max % min == 0) return std::tuple(max, max / max, max / min);
        else {
            for (int i = 2; i <= min; ++i) {
                if ((max * i) % min == 0) return std::tuple(max * i, (max * i) / max, (max * i) / min);
            }
        }
    } else {
        max = d2; 
        min = d1; 
        if (max % min == 0) return std::tuple(max, max / min, max / max);
        else {
            for (int i = 2; i <= min; ++i) {
                if ((max * i) % min == 0) return std::tuple(max * i, (max * i) / min, (max * i) / max);
            }
        }
    }
}
