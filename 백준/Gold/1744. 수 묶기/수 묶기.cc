#include <bits/stdc++.h>
using namespace std;
// 1744
vector<int> pos;
vector<int> neg;

int loop(int st, int en, const vector<int>& v) {
    int sum=0;
    for (int i=st; i<=en; i+=2) {
        if (i>en) break;
        else if (i==en) {sum += v[en]; break;}
        sum += v[i]*v[i+1];
    }
    return sum;
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
    sort(pos.begin(), pos.end(), greater<int>());
    sort(neg.begin(), neg.end());

    int ans=0;
    if (pos.size() == 1) {ans = pos[0];}
    else if (pos.size()>1) {
        for (int i=0; i<pos.size(); i+=2) {
            if (i==pos.size()-1) {ans += pos[i]; break;}
            ans += max(pos[i]+pos[i+1], pos[i]*pos[i+1]);
        }
    }

    int k = neg.size();
    if (k==0) {
        cout << ans;
        return 0;
    }
    if (k == 1) {ans += neg[0];}
    else {
        for (int i=0; i<k; i+=2) {
            if (i==k-1) {ans += neg[i]; break;}
            ans += max(neg[i]+neg[i+1], neg[i]*neg[i+1]);
        }
    }
    cout << ans;
}