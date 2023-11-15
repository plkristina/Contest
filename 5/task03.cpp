#include <vector>
#include <math.h>

class Complex {
    public:
        double re;
        double im;

        Complex () {}

        Complex (std::string num) {
            std::string str;
            std:: vector <double> info;
            for (int i = 0; i < num.length(); ++i) {
                if ('0' <= num[i] and num[i] <= '9' or num[i] == '.') {
                    str += num[i];
                } else if (num[i] == '-' and str != "") {
                    info.push_back(std::stod(str));
                    str = "-";
                } else if (num[i] == '-' and str == "") {
                    str = "-";
                } else if (str != "" and str != "-"){
                    info.push_back(std::stod(str));
                    str = "";
                }
            }
            if (info.size() < 2) {
                if (str.length() == 0) {
                    info.push_back(1);
                } else if (str == "-") {
                    info.push_back(-1);
                } else {
                    info.push_back(std::stod(str));
                }
            }
            re = info[0];
            im =info[1];
        }
};

Complex operator +(Complex first, Complex second) {
    Complex res;
    res.re = first.re + second.re;
    res.im = first.im + second.im;
    return res;
}

Complex operator -(Complex first, Complex second) {
    Complex res;
    res.re = first.re - second.re;
    res.im = first.im - second.im;
    return res;
}

Complex operator *(Complex first, Complex second) {
    Complex res;
    res.re = first.re * second.re - first.im * second.im;
    res.im = first.im * second.re + first.re * second.im;
    return res;
}

Complex operator /(Complex first, Complex second) {
    Complex res;
    res.re = (first.re * second.re + first.im * second.im) / (pow(second.re, 2) + pow(second.im, 2));
    res.im = (first.im * second.re - first.re * second.im) / (pow(second.re, 2) + pow(second.im, 2));
    return res;
}

std::ostream& operator<<(std::ostream& out, const Complex& num){
    out << (num.re == 0.0 ? 0.0 : num.re)
        << (num.im < 0 ? "":"+")
        << (num.im == 0.0 ? 0.0 : num.im) << 'j';
    return out;
}
