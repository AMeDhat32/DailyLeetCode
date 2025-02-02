class Solution {
public:
    bool check(vector<int>& nums) {
        int counter = 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]<0)counter++;
        }
        if(nums[0]-nums[nums.size()-1]<0)counter++;

        return (counter<=1);
    }
};