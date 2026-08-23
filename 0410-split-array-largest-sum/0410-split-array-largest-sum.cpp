#include <vector>
using namespace std;
class Solution {
 private:
    bool isPossible(vector<int>& nums, int k, long long mid) {
        int studentCount = 1;
        long long pageSum = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            // Agar koi akela element hi mid se bada hai, toh yeh mid possible hi nahi hai
            if(nums[i] > mid) {
                return false;
            }
            
            if(pageSum + nums[i] <= mid) {
                pageSum += nums[i];
            }
             else {
                studentCount++;
                if(studentCount > k) {
                    return false;
                }
                pageSum = nums[i];
            }
        }
        return true;
    }


public:
    int splitArray(vector<int>& nums, int k) {
        
        long long s = 0;
        long long sum = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        
        long long e = sum;
        long long ans = -1;
        
        while(s <= e) {
            long long mid = s + (e - s) / 2;
            
            if(isPossible(nums, k, mid)) {
                ans = mid;
                e = mid - 1; // Aur chhota answer dhoondne ke liye left jao
            } 
            else {
                s = mid + 1; // Right jao
            }
        }
        return ans;
        
    }
};