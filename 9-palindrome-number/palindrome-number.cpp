class Solution {
public:
    bool isPalindrome(int x) {
        int rev = 0, rem;
        int n = x;
        
        if(x<0) return false;

        while(n){
            rem = n%10;
            n/=10;
            if(rev > INT_MAX/10 || rev < INT_MIN/10){
                return false;
            }
            rev = rev *10 + rem;
        }
        if(rev == x){
            return true;
        }
        return false;
    }
};