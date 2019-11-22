#include "tools.h"

vector<int> twoSum(vector<int>& nums, int target) {
    std::unordered_map<int, int> dict;
    for (int i = 0; i < nums.size(); i++) {
        if (dict.find(target - nums[i]) != dict.end()) {
            return vector<int>{dict[target - nums[i]], i};
        }
        else {
            dict.insert(std::pair<int, int>{nums[i], i});
        }
    }
    return std::vector<int>{};
}