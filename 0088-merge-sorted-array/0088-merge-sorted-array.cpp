class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int s=m;
        
        while(s<=m+n-1){
            for(int i=0;i<n;i++){
                nums1[s]=nums2[i];
                s++;
            }
            sort(nums1.begin(),nums1.end());
            

        }
        
    }
};