class Solution {
public:
    void merge(vector<int>& nums,int st,int mid,int e){
        vector<int>temp;
        int i=st;
        int j=mid+1;
        while(i<=mid && j<=e){
            if(nums[i]<=nums[j]){
                temp.push_back(nums[i]);
                i++;
            }
            else{
                temp.push_back(nums[j]);
                j++;
            }
          }
          while(i<=mid){
            temp.push_back(nums[i]);
            i++;
          }
           while(j<=e){
            temp.push_back(nums[j]);
            j++;
          }
          for(int idx = 0; idx < temp.size(); idx++) {
            nums[idx + st] = temp[idx];
        }
    }
    
    
    
    void mergesort(vector<int>& nums,int st,int e){
         if(st<e){
            int mid=st+(e-st)/2;
            mergesort(nums,st,mid);
            mergesort(nums,mid+1,e);
            merge(nums,st,mid,e);
            }
    }
    
    
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;

       
        
    }


};