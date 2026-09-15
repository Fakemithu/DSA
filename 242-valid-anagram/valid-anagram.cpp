class Solution {
public:
    bool isAnagram(string s, string t) {

        int n = s.length();
        if(s.length() != t.length()){
            return false;
        
        }

        string s1 = s;
        string t1 = t;

        sort(s1.begin(), s1.end());
        sort(t1.begin(), t1.end());

        for(int i=0; i<n; i++){
            if(s1[i] != t1[i]){
                return false;
            }
        }


        return true;
    }
};