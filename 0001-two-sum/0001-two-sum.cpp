class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                vector<int>final;
            
                if(nums[i]+nums[j]==target){
                    
                    final.push_back(i);
                    final.push_back(j);
                    return final;

                }
                
            }
        }
            return {};
    }
        
    
};