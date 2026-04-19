#include <iostream>
#include <stack>
using namespace std;

int d[1003][1003];
// d[i][j] : comp의 0~i번째까지, str의 0~j까지 잘라서 비교했을 때 가지는 LCS 길이

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string comp, str; cin >> comp >> str;
    int len_comp = comp.size(), len_str = str.size();

    int idx = comp.find(str[0]);
    if (idx != -1) {
        for (int i=idx; i<len_comp; i++) d[i][0] = 1;
    }
    idx = str.find(comp[0]);
    if (idx != -1) {
        for (int i=idx; i<len_str; i++) d[0][i] = 1;
    }

    for (int i=1; i<len_comp; i++) {
        for (int j=1; j<len_str; j++) {
            if (comp[i] == str[j]) d[i][j] = d[i-1][j-1] + 1;
            else d[i][j] = max(d[i][j-1], d[i-1][j]);
        }
    }

    cout << d[len_comp-1][len_str-1];
}