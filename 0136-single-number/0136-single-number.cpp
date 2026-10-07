class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums[0];
        bool res = false;
        if (nums.size() > 1)
        {
            sort(nums.begin(), nums.end());
            n = nums[0];
            for (int i = 1; i < nums.size() - 1; i = i + 2)
            {
                if (nums[i - 1] != nums[i])
                {
                    n = nums[i - 1];
                    res = true;
                    break;
                }
            }
            if (!res)
                n = nums[nums.size() - 1];
        }
        return n;
    }
};