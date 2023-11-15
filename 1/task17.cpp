#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    long long maxl,maxr,sum = 0;
    cin >> n;
    vector <int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    for (int i = 0; i < n; ++i) {
        maxr = 0;
        maxl = 0;
        for (int j = 0; j < i; ++j) {
            if (nums[j] > maxl) maxl = nums[j];
        }
        for (int k = i + 1; k < n; ++k) {
            if (nums[k] > maxr) maxr = nums[k];
        }
        if (nums[i] < maxr and nums[i] < maxl) sum += min(maxr, maxl) - nums[i];
    }
    cout << sum;
}
