//Pattern: HashMap / Frequency Count
//Intuition: Two strings are anagrams if character frequencies match exactly
//Approach: Count freq in string1, decrement with string2, check all zeros
//Time: O(N) | Space: O(1) — max 26 keys for lowercase letters
//Beats: 100% on LeetCode
//Key insight: Sorting works but HashMap avoids the O(NlogN) cost
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        int freq[26] = {0};
        for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                return false;
            }
        }
        return true;
    }
};
