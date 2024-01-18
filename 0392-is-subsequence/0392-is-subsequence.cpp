class Solution {
public:
    bool isSubsequence(string s, string t) {
        int counter = 0;
        
        for (int i = 0; i < t.length() and counter < s.length(); i++){
                if (s[counter] == t[i]){
                    counter++;
                }
        }
        
        return (counter == s.length());
        
    }
};