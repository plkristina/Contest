#include <vector>
#include <complex>

Complex make_complex(std::string num) {
    std::string str;
    int q = 0; 
    std::vector <double> info;
    for (int i = 0; i < num.length(); ++i) {
        if ('0' <= num[i] and num[i] <= '9' or num[i] == '.') {
            str += num[i];
        } else if (num[i] == '-' and str != "") {
            info.push_back(stod(str));
            str = "-";
        } else if (num[i] == '-' and str == "") {
            str = "-";
        } else if (str != "" and str != "-"){
            info.push_back(stod(str));
            str = "";
        }
    }
    if (info.size() < 2) {
        if (str.length() == 0) {
            info.push_back(1);
        } else if (str == "-") {
            info.push_back(-1);
        } else {
            info.push_back(stod(str));
        }
    }
    Complex a;
    a.re = info[0];
    a.im = info[1];
    return a;
}

std::complex <double> sum(Complex c1, Complex c2) {
    std::complex <double> a(c1.re, c1.im);
    std::complex <double> b(c2.re, c2.im);
    return a + b;
}

std::complex <double> sub(Complex c1, Complex c2) {
    std::complex <double> a(c1.re, c1.im);
    std::complex <double> b(c2.re, c2.im);
    return a - b;
}

std::complex <double> mul(Complex c1, Complex c2) {
    std::complex <double> a(c1.re, c1.im);
    std::complex <double> b(c2.re, c2.im);
    return a * b;
}

std::complex <double> div(Complex c1, Complex c2) {
    std::complex <double> a(c1.re, c1.im);
    std::complex <double> b(c2.re, c2.im);
    return a / b;
}

void print(std::complex <double> a) {
    if (a.real() == 0) {
        std::cout << "0";
    } else {
        std::cout << a.real();
    }
    if (a.imag() > 0) {
        std::cout << "+" << a.imag() << "j" << std::endl;
    } else if (a.imag() == 0) {
        std::cout << "+0" << "j" << std::endl;
    } else {
        std::cout << a.imag() << "j" << std::endl;
    }
}
