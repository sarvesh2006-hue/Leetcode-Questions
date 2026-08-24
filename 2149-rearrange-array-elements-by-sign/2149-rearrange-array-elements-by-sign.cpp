class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size());
        int pi=0;
        int ni=1;
        int i=0;
        while(i<nums.size()){
            if(nums[i]>0){
                ans[pi]=nums[i];
                pi+=2;
            }
            else{
                ans[ni]=nums[i];
                ni+=2;
            
            }
            i++;
            
        }
        return ans;
        
    }
};