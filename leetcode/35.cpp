class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        // can use other method as well 
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=target){
                return i;
            }
        }
     return n;
    }
};
