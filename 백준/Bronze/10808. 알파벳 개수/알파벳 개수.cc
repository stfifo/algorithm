#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    vector<int> word(26);
    string s;
    cin >> s;
    for (int i=0; i<s.size(); ++i) {
        int idx = alphabet.find(s[i]);
        word[idx]++;
    }
    for (int e : word) cout << e << ' ';
}
