class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string ans = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                if (count > 0) {
                    ans += s[i];
                }
                count++;
            } else {
                if (count > 1) {
                    ans += s[i];
                }
                count--;
            }
        }
        return ans;
    }
};
