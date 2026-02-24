#include <bits/stdc++.h>
using namespace std;

int dist[1000005];


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    fill(dist, dist+1000001, -1);
    dist[1] = 0;
    queue<int> q;
    q.push(1);


    while (dist[n] == -1) {
        int cur = q.front(); q.pop();

        for (int nxt : {cur+1, 2*cur, 3*cur}) {
            if (nxt > n) continue;
            if (dist[nxt] != -1) continue;
            dist[nxt] = dist[cur]+1;
            q.push(nxt);
        }
    }

    cout << dist[n];


}