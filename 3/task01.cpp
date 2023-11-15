#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
    return a < b;
}

int main() {
    int n, m;
    cin >> n;
    vector <int> vec(n);
    for (auto& num1 : vec) {
        cin >> num1;
    }
    cin >> m;
    for (int i = 1; i <= m; ++i) {
        int num;
        cin >> num;
        vec.push_back(num);
    }
    sort(vec.begin(), vec.end(), compare);
    for (auto& num : vec) {
        cout << num << " ";
    }
    return 0;
}
