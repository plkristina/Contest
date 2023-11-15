#include <cmath>

int func(std::string a) {
    int s;
    for(int i=0; i < a.length(); i++) {
        if (std::string(a)[i] == '1') {
            s += pow(2, a.length() - 1 - i);
        }
    }
    return s;
}

bool compare(std::string a, std::string b) {
    if (count(a.begin(), a.end(), '1') != count(b.begin(), b.end(), '1')) {
        return count(a.begin(), a.end(), '1') > count(b.begin(), b.end(), '1');
    } else {
        return func(a) < func(b);
    }
}
