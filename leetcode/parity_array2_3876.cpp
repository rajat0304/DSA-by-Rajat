class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        bool all_even = true ;
        int mn = nums1[0];
        for (int a:nums1){
            if(a<mn){
                mn = a;
            }
            if(a%2 !=0){
                all_even = false ;
            }
        }
        return mn % 2 !=0 || all_even;
    }
};
