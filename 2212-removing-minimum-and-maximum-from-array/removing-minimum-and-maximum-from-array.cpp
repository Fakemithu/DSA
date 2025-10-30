class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        if(n == 1){
            return 1;
        }
        int maxi = 0, maxv = nums[0], mini = 0, minv = nums[0];

        for(int i=1; i<n; i++){
            if(nums[i]<minv){
                minv = nums[i];
                mini = i;
            }
            if(nums[i]>maxv){
                maxv = nums[i];
                maxi = i;
            }
        }
        int x = min(mini,maxi);
        int y = max(mini,maxi);
        
        int front = y + 1;          
        int back = n - x;          
        int both = (x + 1) + (n - y);

        return min({front, back, both});
    }
};