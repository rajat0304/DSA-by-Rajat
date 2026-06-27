class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0 || matrix[0].size()==0){
            return false;
        }
        int n=matrix[0].size();
        int m=matrix.size();
        int left =0;
        int right = (m*n)-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            int row=mid/n;
            int col=mid%n;
            int value=matrix[row][col];
            if(value==target){
                return true;
            }
            else if(value<target){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return false;
    }
};
