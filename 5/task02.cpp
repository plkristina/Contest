class Water {
    public:
        int temp;
        Water(int temperature) {
            temp = temperature;
        }
};

class Teapot {
    public:
        int temperature;
        Teapot(Water water) {
            temperature = water.temp;
        }
        bool is_boiling() {
            return temperature >= 100;
        }
        void heat_up(int hp) {
            temperature = temperature + hp;
        }

};
