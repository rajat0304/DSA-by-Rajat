class Solution {
public:
    int findMin(vector<int>& nums) {
        int n= nums.size()-1;
        int last = nums[n];
        int right = n;
        int left = 0;
        while(left<right){
            int mid= left+(right-left)/2;
            if(nums[mid]>nums[right]){
                left = mid+1;
            }
            else{
                right = mid;
            }
        }
        return nums[left];
    }
};
