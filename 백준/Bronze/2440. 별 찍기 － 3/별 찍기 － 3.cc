#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i, j;
    cin >> n;
    for (i=n;i>0; i-=1) {
        for (j=0; j<i; ++j) cout << '*';
        cout << '\n';
    }

    return 0;
}
