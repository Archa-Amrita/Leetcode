class Solution {
public:
    void moveZeroes(vector<int> &nums)
    {
        int count = 0, n = 0;
        n=nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                count++;
            }
            else
            {
                nums.push_back(nums[i]);
            }
        }
        for (int i = 0; i < count; i++)
        {
            nums.push_back(0);
        }
        for (int i = 0; i < n; i++)
        {
            nums[i]=nums[i+n];
        }
        for (int i = 0; i < n; i++)
        {
            nums.pop_back();
        }
    }
};