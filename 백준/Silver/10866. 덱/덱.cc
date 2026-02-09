#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    deque<int> dq;
    int n, x;
    string opr;

    cin >> n;
    while (n--) {
        cin >> opr;
        if (opr == "push_front") {
            cin >> x;
            dq.push_front(x);
        }
        else if (opr == "push_back") {
            cin >> x;
            dq.push_back(x);
        }
        else if (opr == "pop_front") {
            if (!dq.empty()) {
                cout << dq.front() << '\n';
                dq.pop_front();
            } else cout << -1 << '\n';
        }
        else if (opr == "pop_back") {
            if (!dq.empty()) {
                cout << dq.back() << '\n';
                dq.pop_back();
            } else cout << -1 << '\n';
        }
        else if (opr == "size") cout << dq.size() << '\n';
        else if (opr == "empty") {
            if (dq.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if (opr == "front") {
            if (!dq.empty()) cout << dq.front() << '\n';
            else cout << -1 << '\n';
        }
        else {
            if (!dq.empty()) cout << dq.back() << '\n';
            else cout << -1 << '\n';
        }
    }
}
