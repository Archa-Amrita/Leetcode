class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int len = nums.size();
        if (len == 1)
            return false;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < len - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                //cout << "Duplicate found: " << nums[i] << endl;
                return true;
            }
        }
        //cout << "No duplicates found" << endl;
        return false;
    }
};