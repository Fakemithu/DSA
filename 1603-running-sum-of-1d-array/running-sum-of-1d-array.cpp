class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int prev_sum=0;
        for(int i=0; i<nums.size(); i++){
            nums[i] = prev_sum+nums[i];
            prev_sum = nums[i];
        }
        return nums;
    }
};