#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> height(9);
    int i, j;
    for (i=0; i<9; ++i) cin >> height[i];

    int x = accumulate(height.begin(), height.end(), 0) - 100;

    for (i=0; i<9; ++i) {
        for (j=0; j < i; ++j) {
            if (height[i]+height[j] == x) {
                height[i] = 0;
                height[j] = 0;

                sort(height.begin(), height.end());

                for (i=2; i<9; ++i) cout << height[i] << '\n';
                return 0;
            }
        }
    }


    return 0;
}
