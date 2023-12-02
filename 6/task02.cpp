class Employee
{
public:
    std::string name;
    std::string position;
    int money;

    Employee(std::string n, std::string pos, int m) {
        name = n;
        position = pos;
        money = m;
        bonus(bonuses[position]);
    }

    void bonus(double percent) { 
        if (position == "manager" and percent < 0.1) {
            percent = 0.1;
        }
        salary(money * percent);
    }

    void salary(int perc){
        money = money + perc;
    }
};

class Manager : public Employee
{
public:
    Manager(std::string name, int money = 16242)
    :Employee(name, "manager", money){
    }
};


std::ostream& operator<<(std::ostream& out, Employee& employee){
    out << employee.name << " (" << employee.position << "): " << employee.money;
    return out;
}
