#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string state, name;

    cin >> n;
    set<string> s;
    while (n--) {
        cin >> name >> state;
        if (state == "enter") s.insert(name);
        else s.erase(name);
    }
    for (auto it = s.rbegin(); it != s.rend(); it++) {
        cout << *it << "\n";
    }
}