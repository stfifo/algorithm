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
        if (year[s][y-1] == 1) {
            room++;
            year[s][y-1] = 0;
        } else year[s][y-1] = 1;
    }

    for (const auto& row : year) room += accumulate(row.begin(), row.end(), 0);
    cout << room << '\n';
}