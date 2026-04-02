#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

#define x first
#define y second

vector<int> v;
int n,m;
string s_board[1003];
int dist[1003][1003][2];
// dist[i][j][0] : (0,0)에서 (i,j)까지 벽을 안부수고 도착한 최단거리
// dist[i][j][1] : (0,0)에서 (i,j)까지 벽을 부수고 도착한 최단거리

int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

//2206
int main() {

    cin >> n >> m;
    int k=0;
    queue<pair<int,int>> wall;
    for (int i=0; i<n; ++i) cin >> s_board[i];
    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            dist[i][j][0] = -1;
            dist[i][j][1] = -1;
        }
    }

    queue<tuple<int,int,int>> q;
    q.push({0,0,0});
    dist[0][0][0] = 1;
    dist[0][0][1] = 1;

    while (!q.empty()) {
        int cur_x, cur_y,broken;
        tie(cur_x,cur_y,broken) = q.front(); q.pop();

        for (int i=0; i<4; i++) {
            int nx = cur_x + dx[i];
            int ny = cur_y + dy[i];
            if (nx<0 || nx>=n || ny<0 || ny>=m) continue;
            if (dist[nx][ny][broken] != -1) continue;
            
            if (broken == 0) {
                if (s_board[nx][ny] == '1') {
                    if (dist[nx][ny][1] != -1) continue;
                    dist[nx][ny][1] = dist[cur_x][cur_y][broken] + 1;
                    q.push({nx,ny,1});
                }
                else {
                    dist[nx][ny][broken] = dist[cur_x][cur_y][broken]+1;
                    q.push({nx,ny,0});
                }
            }
            else {
                if (s_board[nx][ny] == '1') continue;
                dist[nx][ny][broken] = dist[cur_x][cur_y][broken] + 1;
                q.push({nx,ny,broken});
            }
        }
    }
    
    int not_broke = dist[n-1][m-1][0], broke = dist[n-1][m-1][1];
    if (not_broke == -1 && broke == -1) cout << -1;
    else if (not_broke == -1 || broke == -1) cout << max(not_broke, broke);
    else cout << min(not_broke, broke);
}