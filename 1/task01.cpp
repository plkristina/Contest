#include <iostream>
#include <cmath>

int main(){
    float q = (1 - (1.0 / 9) + (1.0 / 45) - (1.0 / (7 * 27)) + (1.0 / (9 * 81)) - (1.0 / (11 * 243)));
    std::cout << q * sqrt(12);
    return 0;
}
