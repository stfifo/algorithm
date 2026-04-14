#include <algorithm>
#include <iostream>
using namespace std;

int dp_max[5];
int dp_min[5];
int tmp1,tmp2,tmp3;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int x1,x2,x3;
    cin >> x1 >> x2 >> x3;
    dp_max[1] = dp_min[1] = x1;
    dp_max[2] = dp_min[2] = x2;
    dp_max[3] = dp_min[3] = x3;

    for (int i=2; i<=n; i++) {
        cin >> x1 >> x2 >> x3;
        tmp1 = max(dp_max[1], dp_max[2]) + x1;
        tmp2 = *max_element(dp_max+1, dp_max+4) + x2;
        tmp3 = max(dp_max[2], dp_max[3]) + x3;
        dp_max[1] = tmp1, dp_max[2] = tmp2, dp_max[3] = tmp3;

        tmp1 = min(dp_min[1], dp_min[2]) + x1;
        tmp2 = *min_element(dp_min+1, dp_min+4) + x2;
        tmp3 = min(dp_min[2], dp_min[3]) + x3;
        dp_min[1] = tmp1, dp_min[2] = tmp2, dp_min[3] = tmp3;
    }

    cout << *max_element(dp_max+1, dp_max+4)
    << ' '
    << *min_element(dp_min+1, dp_min+4);
}