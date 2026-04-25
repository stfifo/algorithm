class Solution {
public:
    int lengthOfLastWord(string s) {
        int len_s = s.size();
        int cnt = 0;
        for (int i=len_s-1; i>-1; i--) {
            if (s[i] == ' ') {
                if (cnt != 0) break;
                else continue;
            }
            else cnt++;
        }
        return cnt;
    }
};