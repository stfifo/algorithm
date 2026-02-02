#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    vector<int> vec(10);
    cin >> num;
    string s = to_string(num);
    for (auto c : s) vec[c-'0'] += 1;
    vec[6] += vec[9];
    vec.pop_back();
    if (vec[6] % 2 != 0) vec[6] = vec[6]/2 +1;
    else vec[6] = vec[6]/2;
    cout << *max_element(vec.begin(), vec.end());


}