#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[21], a, b;
    iota(arr, arr+21, 0);
    for (int i = 1; i < 11; ++i) {
        cin >> a >> b;
        reverse(arr+a, arr+b+1);
    }
    for (int i=1; i<21; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}
