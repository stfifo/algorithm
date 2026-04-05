#include <iostream>
#include <queue>
#include <algorithm>
#include <string>

using namespace std;
int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};
bool visit[10003];
int n, target;

vector<int> dslr(int n) {
    vector<int> v;
    int tmp = n;
    //D_1
    v.push_back(n*2 % 10000);
    //S_2
    if (n==0) v.push_back(9999);
    else v.push_back(n-1);
    //L_3
    tmp = (n%1000)*10 + (n/1000);
    v.push_back(tmp);
    //R_4
    tmp = (n/10)+(n%10)*1000;
    v.push_back(tmp);

    return v;
}

void solve(int n, int target) {
    pair<int, int> parent[10003]; // 숫자, com
    bool visit[10003] = {false, };
    queue<int> q;
    q.push(n);

    while (!q.empty()) {
        int cur = q.front(); q.pop();
        vector<int> v = dslr(cur);
        bool find_target = false;
        for (int i=0; i<4; ++i) {
            int nxt = v[i];
            if (visit[nxt] == true) continue;
            parent[nxt] = {cur, i+1};
            if (nxt == target) {
                find_target = true;
                break;
            }
            visit[nxt] = true;
            q.push(nxt);
        }
        if (find_target) break;
    }

    string ans = "";
    int tmp = target, com;
    while (tmp != n) {
        com = parent[tmp].second;
        if (com == 1) ans += "D";
        else if (com == 2) ans += "S";
        else if (com == 3) ans += "L";
        else ans += "R";
        tmp = parent[tmp].first;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;

    while (t--) {
        cin >> n >> target;
        solve(n, target);
    }

}