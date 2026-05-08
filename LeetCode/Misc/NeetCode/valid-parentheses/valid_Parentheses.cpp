
class Solution {
public:
    bool isValid(string s) {
        stack<char> bracket;
        unordered_map<char, char> bracket_key = {{')', '('}, {']', '['}, {'}', '{'}};
        vector<char> v = {')', ']', '}'};
        for (auto& c: s) {
            if (bracket_key.count(c)) {
                if (bracket.empty() || bracket.top() != bracket_key[c]) return false;
                bracket.pop();
            }
            else bracket.push(c);
        }
        return bracket.empty();
    }
};
