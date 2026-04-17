#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str; cin >> str;

    stack<char> opr;

    for (auto& c : str) {
        if (c == '+' || c=='-') {
            if (opr.empty()) {
                opr.push(c); continue;
            }

            while (!opr.empty() && opr.top() != '(') {
                cout << opr.top();
                opr.pop();
            }
            opr.push(c);
        }
        else if (c == '*' || c=='/') {
            if (opr.empty()) {
                opr.push(c); continue;
            }
            while (!opr.empty() && (opr.top()!='+' && opr.top() != '-')&& opr.top() != '(') {
                cout << opr.top();
                opr.pop();
            }
            opr.push(c);

        }
        else if (c == '(') {
            opr.push(c);
        }
        else if (c== ')') {
            while (opr.top() != '(') {
                cout << opr.top();
                opr.pop();
            }
            opr.pop();
        }
        else cout << c;
    }

    while (!opr.empty()) {
        cout << opr.top();
        opr.pop();
    }
}