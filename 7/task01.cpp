#include <vector>

std::vector<std::string> actions;
std::vector<Time> act_time;

class OSUpdater : public IRunnable{
public:
    void run() override {
        actions.push_back("OSUpdater");
    }
};

class Alarm : public IRunnable {
public:
    void run() override {
        actions.push_back("Alarm");
    }
};

class ActivityChecker : public IRunnable {
public:
    void run() override {
        actions.push_back("ActivityChecker");
    }
};

class Clock : public IClock, public IRunnable{
public:
    void add(IRunnable* client, Time time) override {
        client->run();
        act_time.push_back(time);
    }

    bool next() override {
        return actions.size() != 0;
    }

    void run() override {
        while (next()) {
            if (act_time[0].hours / 10 == 0) {
                std::cout << "0";
            }
            std::cout << act_time[0].hours << ":";

            if (act_time[0].minutes / 10 == 0) {
                std::cout << "0";
            }
            std::cout << act_time[0].minutes << ":";

            if (act_time[0].seconds / 10 == 0) {
                std::cout << "0";
            }
            std::cout << act_time[0].seconds << " " << actions[0] << std::endl;

            act_time.erase(act_time.begin());
            actions.erase(actions.begin());
        }
    }
};
