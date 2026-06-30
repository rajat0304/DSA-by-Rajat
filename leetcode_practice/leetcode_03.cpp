class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>last(256,-1);
        int n=s.size();
        int left =0,ans=0;
        for(int r=0;r<n;r++){
            if(last[s[r]]!=-1){
                left=max(left,last[s[r]]+1);
            }
            last[s[r]]=r;
            ans=max(ans,r-left+1);
        }
        return ans;
    }
};
