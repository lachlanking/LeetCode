class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string temp = "";
        string answer = "";

        for (int i = 0; i < s.length(); i++){
            if (s[i] != ' '){
                temp.append(1, s[i]);
            }
            if (s[i] == ' ' || i == s.length() - 1) {
                
                if (!temp.empty()) {
                    words.insert(words.begin(), temp);
                    temp = "";
                }
            }
        }

        
        for (const string& word : words) {
            answer += word + " ";
        }

        
        if (!answer.empty()) {
            answer.pop_back();
        }

        return answer;
    }
};
