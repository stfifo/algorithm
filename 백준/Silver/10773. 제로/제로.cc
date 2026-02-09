#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    vector<int> s;
    cin >> n;

    while (n--) {
        cin >> x;
        if (x) s.push_back(x);
        else s.pop_back();
    }
    cout << accumulate(s.begin(), s.end(), 0);
}
