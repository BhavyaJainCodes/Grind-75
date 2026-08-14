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
// one more solution using unordered_maps
        unordered_map<int,int> values;
        for (int i=0;i<n;i++){
            int needed = target - nums[i];
            if (values.count(needed)){
                return {values[needed], i};
            }
            values[nums[i]] = i;
        }
