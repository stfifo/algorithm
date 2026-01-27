#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b) {
        if (b > c) cout << c << " " << b << " " << a;
        else if (a < c) cout << b << " " << a << " " << c;
        else cout << b << " " << c << " " << a;
    }
    else {
        if (a > c) cout << c << " " << a << " " << b;
        else if (c > b) cout << a << " " << b << " " << c;
        else cout << a << " " <<  c << " " << b;
    }
    
    return 0;
}
