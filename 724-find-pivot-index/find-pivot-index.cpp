class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int pivot = 0;

        while(pivot < nums.size()){
            int  left_sum=0, right_sum=0;
            for(int i =0; i< pivot; i++){
                left_sum += nums[i];
            }
            for(int i=pivot+1; i< nums.size(); i++){
                right_sum += nums[i];
            }
            if(left_sum == right_sum){
                return pivot;
            }
            pivot++;
        }
        return -1;
    }
};