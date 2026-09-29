class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();
        vector<int> prefix_prod(n+1);
        vector<int> suffix_prod(n+1);

        prefix_prod[0] = 1;
        suffix_prod[n] = 1;

        //finding prefix product
        for(int i=1 ; i<=n; i++){
            prefix_prod[i] = prefix_prod[i-1] * nums[i-1];
        }

        //finding suffix product
        for(int i=n-1 ; i>=0; i--){
            suffix_prod[i] = suffix_prod[i+1] * nums[i];
        }

        //finding answer array
        vector<int> answer(n);

        for(int i=0; i<n; i++){
            answer[i] = prefix_prod[i] * suffix_prod[i+1];
        }

        return answer;
        
    }
};