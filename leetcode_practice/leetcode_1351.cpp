class Solution {
public:
    int countNegatives(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        int i = row - 1;
        int j = 0;
        int count = 0;
        while (i >= 0 && j < col) {
            if (mat[i][j] < 0) {
                count += (col - j);
                i--;
            } else {
                j++;
            }
        }
        return count;
    }
};
