#include <iostream>
#include <map>

using namespace std;

int main() {
    int n, m, cnt;
    string s;
    cin >> n;
    map <string, unsigned> words;
    for (int i = 1; i <= n; ++i) {
        cin >> s;
        words.insert(pair<string, int>(s, 1));
    }
    cin >> m;
    for (int i = 1; i <= m; ++i) {
        cin >> s;
        if (words[s] != 0) {
            ++words[s];
        }
    }
    for (auto word = words.cbegin(); word != words.cend(); ++word) {
        if ((*word).second > 1) {
            cout << (*word).first << " ";
            ++cnt;
        }
    }
    if (cnt == 0) {
        cout << -1;
    }
    return 0;
}
