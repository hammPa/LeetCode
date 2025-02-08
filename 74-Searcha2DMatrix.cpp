class Solution {
public:
    bool search(vector<vector<int>>& matrix, int target, int row){
        int n = matrix[0].size();
        int st = 0, end = n-1;
        while(st<=end){
            int mid = st + (end-st)/2;
            if(matrix[row][mid] == target)return true;
            else if(target >= matrix[row][mid]) st = mid+1;
            else end = mid-1;
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int strow = 0, endrow = m-1;
        while(strow <= endrow){
            int mid = strow + (endrow-strow)/2;
            if(target >= matrix[mid][0] && target <= matrix[mid][n-1]){
                return search(matrix, target, mid);
            }
            else if(target >= matrix[mid][n-1]) strow = mid+1;
            else endrow = mid-1;
        }
        return false;
    }
};
