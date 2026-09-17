class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();

        unordered_set<char> st;

        int left = 0;
        int right = 0;
        int longest = 0;

        while(right < n){
            if(st.find(s[right]) == st.end()){
                st.insert(s[right]);
                longest = max(longest, right - left + 1);
                right++;
            }
            else{
                st.erase(s[left]);
                left++;
            }
        }
        return longest;
    }
};