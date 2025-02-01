class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n = nums.size();
        for(int i=1;i<n;++i)
           if((nums[i]%2)==(nums[i-1]%2))return 0;
        

        return 1;
    }
};

static int fast = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();