#include <bits/stdc++.h>
using namespace std;

char board[6600][6600];

void star33(int r, int c) {
    for (int i=r; i<r+3; ++i) {
        for (int j=c; j<c+3; ++j) {
            if (i==r+1 && j == c+1) continue;
            board[i][j] = '*';
        }
    }
}

void solve(int r, int c, int len) {
    // base condition
    if (len == 3) {
        star33(r,c);
        return;
    }
    //recursion
    int n = len/3;
    for (int i=0; i<3; ++i) {
        for (int j=0; j<3; ++j) {
            if (i==1 && j==1) continue;
            solve(r+i*n,c+j*n,n);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    for (int i=0; i<n; i++) fill(board[i], board[i]+n, ' ');

    solve(0,0,n);

    for (int i=0; i<n; ++i) {
        for (int j=0; j<n; ++j) cout << board[i][j];
        cout << '\n';
    }
}
