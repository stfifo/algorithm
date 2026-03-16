#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin>>n;
    string s; cin>>s;

    int p = s.find('*');
    string l = s.substr(0, p);
    string r = s.substr(p+1, s.size()-p-1);

    while (n--) {
        string str; cin >> str;
        if (str.size() < l.size() + r.size()) {
            cout << "NE" << '\n';
            continue;
        }
        if (str.find(l) != 0) {
            cout << "NE" << '\n'; continue;
        }
        string r_str = str.substr(str.size()-r.size(), r.size());
        if (r_str != r) {
            cout << "NE" << '\n'; continue;
        }
        cout << "DA" << '\n';
    }
}