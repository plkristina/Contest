#include "json.hpp"
using json = nlohmann::json;

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream file("data.json");
    json object;
    int cnt = 0, id;
    cin >> id;
    file >> object;
    for (int i = 0; i < object.size(); ++i) {
        for (int j = 0; j < object[i]["tasks"].size(); ++j) {
            if (object[i]["tasks"][j]["user_id"] == id and object[i]["tasks"][j]["completed"] == true) {
                ++cnt;
            }
        }
    }
    cout << cnt;
    return 0;
}
