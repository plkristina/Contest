#include <iostream>

using namespace std;

int main(){
    string a; int cnt = 1;
    cin >> a;
    for (int i = 0; i <= a.length() - 1; i++){
        if (a[i] == a[i + 1]){
            cnt++;
        }
        else{
            if (cnt == 1){
                cout << a[i];
            }
            else{
                cout << a[i] << cnt;
                cnt = 1;
            }
        }
    }
    return 0;
}
