class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] <= k){
                k++;
            }else{
                break;
            }
        }
        return k;
    }
};
