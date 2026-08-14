// Time: O(n²)
// Space: O(1)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector <int> values;
        for (int i=0;i<n;i++){
            for (int j=i+1;j<n;j++){
                if (nums[i]+nums[j]==target){
                    values.push_back(i);
                    values.push_back(j);
                    return values;
                }
            }
        }
        return {};
    }
};

