class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int>v;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            int cnt=1;
            while(i+1<n && arr[i]==arr[i+1]){
                cnt++;
                i++;
            }
            v.push_back(cnt);
        }
        sort(v.begin(),v.end());
        for(int j=1;j<v.size();j++){
            if(v[j]==v[j-1]){
                return false;
            }
        }
        return true;
    }
};
