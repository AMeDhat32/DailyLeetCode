class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int ans = nums[0],n  = nums.size(),sum =nums[0];
        for(int i=1;i<n;i++){
         if(nums[i]>nums[i-1])sum+=nums[i];
         else sum = nums[i];  
         ans = max(ans,sum);
        }


        return ans;
        
    }
};