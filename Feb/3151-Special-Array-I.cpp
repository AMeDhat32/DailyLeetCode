class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n = nums.size();
        if(nums.size()==1)return 1;
        int i=0,j=1;
        while(j<n)
        {
         if((nums[i]%2)==(nums[j]%2))return 0;
         i++;
         j++;
        }
        

        return 1;
    }
};

static int fast = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();