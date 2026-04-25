class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> v = digits;
        int len = v.size();
        v[len-1]++;

        for (int i=len-1; i>=0; i--) {
            if (v[i] > 9) {
                if (i>0) {
                    v[i] = 0;
                    v[i-1]++;
                }
                else {
                    v[i] = 0;
                    v.insert(v.begin(), 1);
                }
            }

            else break;
        }
        return v;
    }
};