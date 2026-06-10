class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;
        int right =nums.size()-1;
        int index = nums.size()-1;
        vector<int>ans(nums.size());
        while(left<=right){
            long long leftsq =(long long) nums[left]*nums[left];
            long long rightsq = (long long) nums[right]*nums[right];
            if(leftsq > rightsq){
                ans[index] = leftsq;
                left++;
            }else{
                ans[index]= rightsq;
                right--;
            }
            index--;
        }
        return ans;
    }
};
