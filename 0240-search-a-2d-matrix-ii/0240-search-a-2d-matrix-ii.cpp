class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int columns=matrix[0].size();
        int ri=0;
        int ci=columns-1;
        while(ri<rows && ci>=0){
            if(matrix[ri][ci]==target){
                return true;
            }
            else if(matrix[ri][ci]>target){
                ci--;
            }
            else{
                ri++;
            }
        }
        return false;
        
    }
};