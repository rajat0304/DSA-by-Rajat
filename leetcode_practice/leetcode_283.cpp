class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ini=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                if(ini !=i){
                    swap(nums[ini],nums[i]);
                }
                ini++;
            }
        }
    }
};
