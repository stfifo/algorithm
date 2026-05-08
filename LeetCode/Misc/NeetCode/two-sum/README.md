
[링크](https://neetcode.io/problems/two-integer-sum/question?list=neetcode150)


### 최종 코드

```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i=0; i<nums.size(); i++) {
            for (int j=0; j<i; j++) {
                if (nums[i]+nums[j] == target) return {j,i};
            }
        }
    }
};

```

- brute force 방식 → $O(N^2)$ 시간복잡도

### 코드 개선하기

```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        for (int i=0; i<nums.size(); i++) {
            int k = nums[i];
            if (m.find(target-k) != m.end()) return {min(m[target-k], i), max(m[target-k], i)};
            else m[k]=i;
        }
    }
};
```

- `map` 을 사용하여 <숫자 값, 해당 숫자의 인덱스>를 저장하고
- map에 `target - nums[i]` 이 있는지 찾으면 O(N)으로 해결할  수 있음
- 문제의 목표를 파악하고 시간 복잡도 줄이는 다른 방법 없는지 생각하기