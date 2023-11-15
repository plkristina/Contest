class Cat {
    private:
        int res = rand() % 2;
    public:
        bool is_alive() {
            return res;
        }
};

class Box {
    public:
        Cat open() {
            Cat a;
            return a;
        }
};
