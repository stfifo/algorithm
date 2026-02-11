#include <bits/stdc++.h>
using namespace std;

string str;
stack<char> s;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> str;

    int sum = 0, mul = 1;
    for (int i=0; i<str.size(); ++i) {
        if (str[i] == '(') {
            mul *= 2;
            s.push(str[i]);
        }
        else if (str[i] == '[') {
            mul *= 3;
            s.push(str[i]);
        }
        else if (str[i] == ')') {
            if (s.empty() || s.top() != '(') {
                cout << 0;
                return 0;
            }
            if (str[i-1] == '(') sum += mul;
            s.pop();
            mul /= 2;
        }
        else if (str[i] == ']') {
            if (s.empty() || s.top() != '[') {
                cout << 0;
                return 0;
            }
            if (str[i-1] == '[') sum += mul;
            s.pop();
            mul /= 3;
        }
    }
    if (s.empty()) cout << sum;
    else cout << 0;

}
