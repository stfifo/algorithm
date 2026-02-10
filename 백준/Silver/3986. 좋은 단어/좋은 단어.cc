#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, good = 0;
    cin >> n;
    string word;

    while (n--) {
        int  a=0, b=0;
        stack<char> s;
        cin >> word;

        for (auto w: word) {
            if (!s.empty() && s.top()==w) s.pop();
            else s.push(w);
        }
        if (s.empty()) ++good;
    }
    cout << good;
}