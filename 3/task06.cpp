#include <iostream>
#include <map>

using namespace std;

pair<string, int> fun(string str) {
    string login, s;
    for (int i = 0; i < str.find(";"); ++i) {
        login += str[i];
    }
    for (int i = str.find(";") + 1; i < str.length(); ++i) {
        s += str[i];
    }
    return pair<string, int>(login, stoi(s));
} 

int main() {
    int n, op;
    string log, str;
    cin >> n;
    map <string, int> persons;
    for (int i = 1; i <= n; ++i) {
        cin >> str;
        persons.insert(fun(str));
    }
    cin >> op;
    for (int j = 1; j <= op; ++j) {
        cin >> log;
        cout << persons[log] << " ";
    }
    return 0;
}
