#include <iostream>
#include <set>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector <string> words;
    set <string> vvd;
    while (true) {
        string s;
        cin >> s;
        if (s == "end") break;
        words.push_back(s);
    }

    for (auto word = words.begin(); word != words.end(); ++word) {
        if (count(words.begin(), words.end(), *word) > 1) {
            vvd.insert(*word);
        }

    }

    for (auto& s : vvd) cout << s << " ";
}
