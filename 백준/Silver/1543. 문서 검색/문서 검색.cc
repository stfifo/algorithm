#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; getline(cin, s);
    string w; getline(cin, w);
    int l = (int) w.size();

    int i=0, cnt = 0;
    string tmp;
    while (i< s.size()) {
        if (i+l > (int) s.size()) break;
        tmp = s.substr(i,l);
        if (tmp == w) {
            cnt++;
            i += l;
        }
        else i++;
    }
    cout << cnt;
}