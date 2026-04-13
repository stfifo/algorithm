#include <algorithm>
#include <iostream>
using namespace std;
int n;
int d[1003];
// d[i] = num[i]를 포함하고 있는 가장 긴 부분 수열의 길이
int num[1003];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i=1; i<=n; i++) cin >> num[i];

    d[1] = 1;
    for (int i=2; i<=n; i++) {
        int mx=1;
        for (int j=1; j<i; j++) {
            if (num[j] > num[i]) {
                mx = max(mx, d[j]+1);
            }
        }
        d[i] = mx;
    }

    cout << *max_element(d, d+n+1);

}