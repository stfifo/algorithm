#include <iostream>
using namespace std;
int board[303][303];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m; cin >> n >> m;
    for (int i=1;i<=n;i++) {
        for (int j=1; j<=m; j++) {
            cin >> board[i][j];
        }
    }
    int t; cin >> t;
    while (t--) {
        int st_x,en_x,st_y,en_y;
        cin >> st_x >> st_y >> en_x >> en_y;
        int result = 0;
        for (int i=st_x; i<=en_x; i++) {
            for (int j=st_y; j<=en_y; j++) {
                result += board[i][j];
            }
        }
        cout << result << '\n';
    }

}