class Solution {
public:
    bool buddyStrings(string s, string goal) {
       int count = 0;

    if(s.length() != goal.length()) {
        return false;
    }

    if(s == goal) {

        
        vector<int> freq(26, 0);

        for(int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;

            if(freq[s[i] - 'a'] >= 2) {
                return true;
            }
        }

        return false;
    }

    vector<int> st;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] != goal[i]) {
            count++;
            st.push_back(i);
        }
    }

    if(count == 2 && s[st[0]] == goal[st[1]] && s[st[1]] == goal[st[0]]) {
        return true;
    }

    return false;
    }
};