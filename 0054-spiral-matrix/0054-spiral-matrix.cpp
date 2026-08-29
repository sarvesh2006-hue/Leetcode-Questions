class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int column=matrix[0].size();
        int count=0;
        int total=row*column;
        int srow=0;
        int scolumn=0;
        int erow=row-1;
        int ecolumn=column-1;
        vector<int>ans;
        while(count<total){
            //print starting row
            for(int index=scolumn;count<total && index<=ecolumn;index++){
                ans.push_back(matrix[srow][index]);
                count++;
            }
            srow++;
            //print ending column
            for(int index=srow;count<total && index<=erow;index++){
                ans.push_back(matrix[index][ecolumn]);
                count++;
            }
            ecolumn--;
            //printing ending row
            for(int index=ecolumn;count<total && index>=scolumn;index--){
                ans.push_back(matrix[erow][index]);
                count++;
            }
            erow--;
            for(int index=erow;count<total && index>=srow;index--){
                ans.push_back(matrix[index][scolumn]);
                count++;
            }
            scolumn++;
        }
        return ans;
    
    
    }
};