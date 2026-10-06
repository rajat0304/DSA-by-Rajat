class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>freq;
        unordered_set<int>st;
        for(int x:arr){
            freq[x]++;
        }
        for(auto it:freq){
            if(st.count(it.second)){
                return false;
            }
            st.insert(it.second);
        }
        return true;
    }
};
