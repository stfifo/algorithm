#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void star(int n) {
    for (int i=0; i<n; ++i) cout << '*';
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i, j, x;
    cin >> n;
    for (i=0; i<n; ++i) {
        for (j=0; j<=i; ++j) cout << '*';
        for (j=0; j < 2*(n-1-i); ++j) cout << ' ';
        for (j=0; j<=i; ++j) cout << '*';
        cout << '\n';
    }
    for (i=1; i<n; ++i) {
        for (j=0; j<n-i; ++j) cout << '*';
        for (j=0; j < 2*i; ++j) cout << ' ';
        for (j=0; j<n-i; ++j) cout << '*';
        cout << '\n';
    }


}