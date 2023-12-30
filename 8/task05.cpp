class IntSharedPointer {
    int* cnt;
public:
    int* pointer;
    IntSharedPointer& operator=(IntSharedPointer& obj) {
        cnt--;
        if (cnt == 0) {
            delete pointer;
        }
        pointer = obj.pointer;
        cnt = obj.cnt;
        cnt++;
        return *this;
    }
    IntSharedPointer(int* point) {
        pointer = point;
        cnt = new int(1);
    }
    IntSharedPointer(IntSharedPointer& obj) {
        pointer = obj.pointer;
        cnt = obj.cnt;
        cnt++;
    }
    ~IntSharedPointer() {
        cnt--;
        if (cnt == 0) {
            delete pointer;
        }
    }
};

int& operator*(IntSharedPointer& obj) {
    return *obj.pointer;
}
