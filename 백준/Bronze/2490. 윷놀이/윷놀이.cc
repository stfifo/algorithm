#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 0; i < 3; ++i) {
        int count = 0, num;
        for (int j = 0; j < 4; j++) {
            cin >> num;
            count += num;
        }
        cout << "DCBAE"[count] << '\n';
    }
    return 0;
}
