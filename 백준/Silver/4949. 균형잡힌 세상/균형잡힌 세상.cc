#include <bits/stdc++.h>
using namespace std;

//1021
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string a;
    while (1) {
        bool temp = true;
        stack<char> s;
        getline(cin, a);
        if (a == ".") return 0;
        for (auto c: a) {
            if (c == '(' or c == '[') s.push(c);
            else if (c == ')') {
                if (s.empty()) {
                    temp = false;
                    break;
                }
                else if (s.top() == '(') s.pop();
                else {
                    temp = false;
                    break;
                }
            }
            else if (c == ']') {
                if (s.empty()) {
                    temp = false;
                    break;
                }
                else if (s.top() == '[') s.pop();
                else {
                    temp = false;
                    break;
                }
            }
        }
        if (temp == true and s.empty()) cout << "yes\n";
        else cout << "no\n";
    }



}
