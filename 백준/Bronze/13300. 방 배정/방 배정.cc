#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, s, y, room = 0;
    cin >> n >> k;

    vector<vector<int>> year(2, vector<int>(6, 0));

    while (n--) {
        cin >> s >> y;
        year[s][y-1]++;
    }

    for (int s=0; s< 2; ++s) {
        for (int y=0; y<6; ++y) {
            int temp = year[s][y];
            if (temp == 0) continue;
            room += (temp + k - 1) / k;
        }
    }
    cout << room;
}