[링크](https://neetcode.io/problems/validate-parentheses/question?list=neetcode150
)

- `empty` 상태일 때 `top()` 호출 주의

### 최종 코드

```cpp
class Solution {
public:
    bool isValid(string s) {
        stack<char> bracket;
        vector<char> v = {')', ']', '}'};
        for (auto& c: s) {
            if (find(v.begin(), v.end(), c) != v.end()) {
                if (bracket.empty()) return false;
                char back_ = bracket.top();
                if (back_ == '(') {
                    if (c == ')') bracket.pop();
                    else return false;
                }
                else if (back_ == '[') {
                    if (c == ']') bracket.pop();
                    else return false;
                }
                else if (back_ == '{') {
                    if (c == '}') bracket.pop();
                    else return false;
                }
            }
            else bracket.push(c);
        }
        if (!bracket.empty()) return false;
        else return true;
    }
};

```

### 코드 개선하기

- `std::map` 또는 `unordered_map` 활용
    - 현재: `if (back_ == '(' && c == ')')` 식으로 일일이 짝을 대조
    - 개선: `map` 으로 key-value 쌍으로 관리
    - `if (c == ')' || c == ']' ...)` 같은 복잡한 분기문 대신 `map`에 존재하는지만 확인하면 됨
- 코드 의도 명확히 하기 → early return
    - `if (!bracket.empty()) return false; else return true;`  → `return bracket.empty();`

```cpp
class Solution {
public:
    bool isValid(string s) {
        stack<char> bracket;
        unordered_map<char, char> bracket_key = {{')', '('}, {']', '['}, {'}', '{'}}
        vector<char> v = {')', ']', '}'};
        for (auto& c: s) {
            if (bracket)key.count(c)) {
                if (bracket.empty()) return false;
                if (bracket.top() == bracket_key[c]) bracket.pop();
                else return false;
            }
            else bracket.push(c);
        }
        return bracket.empty();
    }
};

```

#### 최종

```cpp
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

```