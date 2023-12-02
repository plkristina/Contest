class Shape 
{
public:
    virtual double getPerimeter(){
        return  1.0;
    }
};

class Rectangle : public Shape
{
public:
    int length = 0;
    int width = 0;

    Rectangle(int a, int b){
        if (a != length and b != width) {
            length = a;
            width = b;
        }
    }

    double getPerimeter() {
        return 2 * (length + width);
    }
};

class Circle : public Shape
{
public:
    int radius;
    Circle(int c) {
        radius = c;
    }

    double getPerimeter() {
        return 2 * 3.141592653589793 * radius;
    }
};

class Triangle : public Shape
{
public:
    int side1 = 0;
    int side2 = 0;
    int side3 = 0;

    Triangle(int a, int b, int c) {
        if(((b + c) > a) and ((a + c) > b) and ((a + b) > c)) {
            side1 = a;
            side2 = b;
            side3 = c;
        }
    }

    double getPerimeter() {
        return side1 + side2 + side3;
    }
};
