#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, now= 0, count=0;

    cin >> n;
    while (n > now) {
        count++;
        now += count;
    }
    if (n < now) cout << count-1;
    else cout << count;

}