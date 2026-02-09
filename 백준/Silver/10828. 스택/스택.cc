#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    stack<int> s;
    int n;
    cin >> n;
    while (n--) {
        string opr;
        cin >> opr;
        if (opr == "push") {
            int x;
            cin >> x;
            s.push(x);
        }
        else if (opr == "pop")
            if (s.empty()) cout << "-1\n";
            else {
                cout << s.top() << '\n';
                s.pop();
            }
        else if (opr == "size") cout << s.size() << '\n';
        else if (opr == "empty") {
            if (s.empty()) cout << "1\n";
            else cout << "0\n";
        }
        else if (opr == "top") {
            if (s.empty()) cout << "-1\n";
            else cout << s.top() << '\n';
        }
    }
}