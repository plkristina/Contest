#include <iostream>
#include <algorithm>

using namespace std;

bool check(string text) {
    string str;
    for (auto& i : text) {
        if (i == '(' or i == ')' or i == '[' or i == ']' or i == '{' or i == '}') {
            str += i;
        }
    }
    bool f = true;
    while (f) {
        int cnt = 0;
        for (int j = 0; j < str.length() - 1; ++j) {
            if ((str[j] == '(' && str[j + 1] == ')') or (str[j] == '[' && str[j + 1] == ']') or (str[j] == '{' && str[j + 1] == '}')) {
                str.erase(j, 2);
                cnt = 1;
                break;
            }
        }
        if (cnt == 0 or str.length() == 0) {
            f = false;
        }
    }
    return str.length() == 0;
}

int main() {
    string text;
    getline(cin, text, '!');
    if (check(text)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
