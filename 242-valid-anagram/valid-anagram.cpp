class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();

        if(s.length() != t.length()){
            return false;
        }

        string s1 = s;
        string s2 = t;

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        for(int i=0; i<n; i++){
            if(s1[i] != s2[i]){
                return false;
            }
        }
        return true;
    }
};