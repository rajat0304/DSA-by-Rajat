class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0;
        int right = 1;
        int n = nums.size();
        if(n==1){
            return nums[0];
        }
        while (right < n) {
            if (nums[left] == nums[right]) {
                left += 2;
                right += 2;
            }
            else  {
                return nums[left];
            }
        }
        return nums[n - 1];
    }
};
