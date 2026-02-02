#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b>>c;
    a = a*b*c;
    string s = to_string(a);
    vector<int> vec(10);
    for (auto c : s) vec[c-'0'] += 1;
    for (int i:vec) cout << i <<'\n';

}