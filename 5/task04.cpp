#include <math.h>

class Point {
    private:
        double X;
        double Y;
        double R;
        double A;
    public:

        Point(double x, double y) {
            X = x;
            Y = y;
        }
        
        double get_x() {
            return X;
        }

        double get_y() {
            return Y;
        }

        double get_r() {
            return R;
        }

        double get_a() {
            return A;
        }

        void set_x(double new_x) {
            X = new_x;
            R = sqrt(X*X + Y*Y);
            A = atan2(Y, X);
        }

        void set_y(double new_y) {
            Y = new_y;
            R = sqrt(X*X + Y*Y);
            A = atan2(Y, X);
        }

        void set_r(double new_r) {
            R = new_r;
            X = R * cos(A);
            Y = R * sin(A);
        }

        void set_a(double new_a) {
            A = new_a;
            X = R * cos(A);
            Y = R * sin(A);
        }
};
