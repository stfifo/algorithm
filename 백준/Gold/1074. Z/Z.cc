#include <bits/stdc++.h>
using namespace std;

// 원판 n개를 a번 기둥에서 b번 기둥으로 옮기는 함수
int func(int n, int r, int c) {
    if (n == 0) return 0;

    int tmp = 1 << (n-1);
    // 1
    if (r < tmp && c < tmp) return func(n-1, r, c);
    // 2
    if (r < tmp && c >= tmp) return tmp*tmp + func(n-1, r, c-tmp);
    // 3
    if (r >= tmp && c < tmp) return 2*tmp*tmp + func(n-1, r-tmp, c);
    // 4
    else return 3*tmp*tmp + func(n-1, r-tmp, c-tmp);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, r, c;
    cin >> n >> r >> c;
    cout << func(n, r, c);

}
