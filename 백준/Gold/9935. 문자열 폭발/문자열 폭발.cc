#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str, bomb;
    cin >> str >> bomb;
    int bomb_len = bomb.size();
    if (str.find(bomb) == -1) {
        cout << str;
        return 0;
    }

    string tmp = "";

    for (auto c: str) {
        tmp.push_back(c);
        if (tmp.size() >= bomb_len && tmp[tmp.size()-1] == bomb[bomb_len-1]) {
            bool is_bomb = true;
            for (int i=1; i<bomb_len; i++) {
                if (tmp[tmp.size()-i-1] != bomb[bomb_len-i-1]) {
                    is_bomb = false;
                    break;
                }
            }
            if (is_bomb) {
                for (int i=0; i<bomb_len; i++) {
                    tmp.pop_back();
                }
            }
        }
    }
    if (tmp.size() == 0) cout << "FRULA";
    else cout << tmp;
}