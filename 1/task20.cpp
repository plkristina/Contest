#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string n1, n2;
    cin >> n1 >> n2;
    if (n1.length() == n2.length()) {
        sort(n1.begin(), n1.end());
        sort(n2.begin(), n2.end());
        if (n1 == n2) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
    }
    else {
        cout << "NO";
    }
    return 0;
}
