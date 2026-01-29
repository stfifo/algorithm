#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> height(9);
    int i, j;
    for (i=0; i<9; ++i) {
        cin >> height[i];
    }
    int x = accumulate(height.begin(), height.end(), 0) - 100;

    for (i=0; i<9; ++i) {
        for (j=0; j < i; ++j) {
            if (height[i]+height[j] == x) {
                height.erase(height.begin()+i);
                height.erase(height.begin()+j);
                sort(height.begin(), height.end());

                for (i=0; i<7; ++i) {
                    cout << height[i] << '\n';
                }
            }
        }
    }


    return 0;
}
