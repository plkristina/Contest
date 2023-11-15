#include <iostream>
#include <map>

using namespace std;

int main() {
    int n, max = 0;
    cin >> n;
    map <string, int> words;
    for (int i = 1; i <= n; ++i) {
    	string s;
        cin >> s;
        ++words[s];
        if (max < words[s]) {
            max = words[s];
        }
    }
    for (auto word = words.cbegin(); word != words.cend(); ++word) {
        if ((*word).second == max) {
            cout << (*word).first << " ";
        }
    }
    return 0;
}
