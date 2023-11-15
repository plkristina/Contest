#include <iostream>

using namespace std;

int main() {
    int n; int m = 2; int cnt = 2; int i = 2;
    cin >> n;
    cout << 1 << endl;
    for (i; m != (n + 1); i++) {
        while (cnt != i) {
            if (m == (n + 1)) {
                break;
            }
            for (int q = 1; q <= cnt; q++) {
                if (m == (n + 1)) {
                    break;
                }
                cout << m << " ";
                m += 1;
            }
            cout << endl;
            cnt += 1;
        }
        while (cnt != 1) {
            if (m == (n + 1)) {
                break;
            }
            for (int q = 1; q <= cnt; q++) {
                if (m == (n + 1)) {
                    break;
                }
                cout << m << " ";
                m += 1;
            }
            cout << endl;
            cnt -= 1;
        }

    }
    return 0;
}
