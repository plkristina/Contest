class vector {
public:
    int X;
    int Y;   
};

class Point {
public:
    int x;
    int y;

    Point(int new_x, int new_y) {
        x = new_x;
        y = new_y;
    }
    void move(vector dir) {
        x += dir.X;
        y += dir.Y;
    }
};

class Vector : public vector {
public:
    Vector(Point first, Point second){
        X = second.x - first.x;
        Y = second.y - first.y;
    }
};
