#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    queue<int> q;
    int n, x;
    string opr;
    cin >> n;

    while (n--) {
        cin >> opr;
        if (opr == "push") {
            cin >> x;
            q.push(x);
        }
        else if (opr == "pop") {
            if (q.empty()) cout << -1 << '\n';
            else {
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if (opr == "size") cout << q.size() << '\n';
        else if (opr == "empty") {
            if (q.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if (opr == "front") {
            if (q.empty()) cout << -1 << '\n';
            else cout << q.front() << '\n';
        }
        else {
            if (q.empty()) cout << -1 << '\n';
            else cout << q.back() << '\n';
        }
    }
}
