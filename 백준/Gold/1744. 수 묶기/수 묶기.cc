#include <bits/stdc++.h>
using namespace std;

vector<int> pos;
vector<int> neg;

int v_cal(const vector<int>& v) {
    int l = v.size(), tmp=0;
    if (l==1) tmp = v[0];
    else if (l>1) {
        for (int i=0; i<l; i+=2) {
            if (i == l-1) {tmp += v[i]; break;}
            tmp += max(v[i]*v[i+1], v[i]+v[i+1]);
        }
    }
    return tmp;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t; cin >> n;
    for (int i=0; i<n; ++i) {
        cin >> t;
        if (t>0) pos.push_back(t);
        else neg.push_back(t);
    }
    sort(pos.begin(), pos.end(), greater<int>()); // 4,3,2,1
    sort(neg.begin(), neg.end()); // -4,-3,-2,-1,0

    cout << v_cal(pos) + v_cal(neg);
}