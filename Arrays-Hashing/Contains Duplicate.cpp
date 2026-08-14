#include <unordered_set>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_set <int> values;
        for (int i =0;i<n;i++){
            if (values.count(nums[i])){
                return true;
                
            }
            else{
                values.insert(nums[i]);
                
            }
        }
        return false;
    }
};
