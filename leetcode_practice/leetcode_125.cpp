#include<iostream>
#include<string>
using namespace std ;
class Solution {
public:
    bool isPalindrome(string s) {
        string clean_s = "";
        for(char c : s) {
            if(isalnum(c)) {
                clean_s += tolower(c);
            }
        }
        int n = clean_s.size();
        for(int i = 0; i < n / 2; i++) {
            if(clean_s[i] != clean_s[n - 1 - i]) {
                return false; 
            }
        }
        
        return true;
    }
};