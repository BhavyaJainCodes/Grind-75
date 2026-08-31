class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int major_number;
    int n =nums.size();
    for (int i=0;i<n;i++){
        int count=0;
        for (int j=0;j<n;j++){
                if (nums[i] == nums[j]) {
                    count++;
                }
            }
            if (count>floor(n/2)){
                return nums[i];
            }
        }
    return major_number;
    }
};
