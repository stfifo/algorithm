#include <bits/stdc++.h>
using namespace std;

#define x first
#define y second

int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};
int row,col;

string board[1005];
int dis[1005][1005];
int dis_fire[1005][1005];


void solve(int n, int m) {
    queue<pair<int,int>> q;
    queue<pair<int,int>> q_fire;

    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            if (board[i][j] == '@') {
                q.push({i,j});
                dis[i][j] = 0;
            }
            else if (board[i][j] == '*') {
                q_fire.push({i,j});
                dis_fire[i][j] = 0;
            }
        }
    }

    //fire
    while (!q_fire.empty()) {
        pair<int,int> cur = q_fire.front(); q_fire.pop();

        for (int dir=0; dir<4; dir++) {
            int nx = cur.x + dx[dir];
            int ny = cur.y + dy[dir];

            if (nx < 0 || nx >= n || ny<0 || ny>=m) continue;
            if (board[nx][ny] == '#' || dis_fire[nx][ny] >= 0) continue;
            dis_fire[nx][ny] = dis_fire[cur.x][cur.y]+1;
            q_fire.push({nx,ny});
        }
    }

    //person
    while (!q.empty()) {
        pair<int,int> cur = q.front(); q.pop();

        for (int dir=0; dir<4; dir++) {
            int nx = cur.x + dx[dir];
            int ny = cur.y + dy[dir];

            if (nx < 0 || nx >= n || ny<0 || ny>=m) {
                cout << dis[cur.x][cur.y] +1 << '\n';
                return;
            }
            if (board[nx][ny] == '#' || dis[nx][ny] >= 0) continue;
            if (dis_fire[nx][ny] != -1 && dis_fire[nx][ny] <= dis[cur.x][cur.y]+1) continue;
            dis[nx][ny] = dis[cur.x][cur.y]+1;
            q.push({nx,ny});
        }
    }
    cout << "IMPOSSIBLE" << '\n';
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while (t--) {
        cin >> col >> row;
        for (int i=0; i<row; ++i) cin >> board[i];

        for (int i=0; i<row; ++i) {
            fill(dis[i], dis[i]+col, -1);
            fill(dis_fire[i], dis_fire[i]+col, -1);
        }
        solve(row,col);
    }
}