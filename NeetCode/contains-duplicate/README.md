[링크](https://neetcode.io/problems/duplicate-integer/question?list=neetcode150)

### C++ 정리

- `std::unordered_set`
    - 해시 테이블 기반 자료구조

### 최종 코드

```cpp
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       sort(nums.begin(), nums.end());
       for (int i=1; i<nums.size(); i++) {
        if (nums[i] == nums[i-1]) return true;
       }
       return false;
    }
};
```

- 배열로 정렬한 후 인접한 두 원소가 같은지 비교
- 시간 복잡도 O(NlogN)

### 코드 개선하기

```cpp
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       map<int,int> mapNum;
        for (auto& n : nums) {
            if (mapNum[n] == 1) return true;
            else mapNum[n]++;
        }
       
       return false;
    }
};
```

위 방식대로 하면 O(N)으로 해결 가능

- 넣기 전에 이미 같은 숫자 있는지 확인
- 삽입 및 탐색이 O(1)에 이루어지므로 전체 시간복잡도는 O(N)에 가능함