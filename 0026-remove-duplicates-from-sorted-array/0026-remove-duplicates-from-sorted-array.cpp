class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    vector<int> expectedNums;
    int k=0;
    if (nums.size() == 1){
        k = 1;
    }
    else
    {
        expectedNums.push_back(nums[0]);
        for (int i = 1; i < nums.size() - 1; i++)
            {
                if (nums[i - 1] != nums[i])
                {
                    expectedNums.push_back(nums[i]);
                }
            }
        if (nums[nums.size() - 1] != expectedNums[expectedNums.size() - 1])
        {
            expectedNums.push_back(nums[nums.size() - 1]);
        }

        for (int i = 0; i < expectedNums.size(); i++)
        {
            nums[i] = expectedNums[i];
        }
        k = expectedNums.size();
    
    }
        return k;
        //check
    }
};
    