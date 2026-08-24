class Solution {
public:
    int fo(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                ans=mid;
                e=mid-1;
            }
            if(nums[mid]>target){
                e=mid-1;
            }
            if(nums[mid]<target){
                s=mid+1;

            }
        }
        return ans;
    }

    int lo(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                ans=mid;
                s=mid+1;
            }
            if(nums[mid]>target){
                e=mid-1;
            }
            if(nums[mid]<target){
                s=mid+1;

            }
        }
        return ans;
    }
    
    
    
    
    
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=fo(nums,target);
        int last=lo(nums,target);
        return{first,last};
        
    }
};