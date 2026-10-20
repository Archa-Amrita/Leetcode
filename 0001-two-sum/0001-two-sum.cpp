class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> res;
        if (nums.size() == 2)
        {
            res.push_back(0);
            res.push_back(1);
        }
        else
        {
            bool find = false;
            for (int i = 0; i < nums.size(); i++)
            {
                if (find)
                    break;
                for (int j = i + 1; j < nums.size(); j++)
                {
                    if (target - nums[i] == nums[j])
                    {
                        res.push_back(i);
                        res.push_back(j);
                        find = true;
                        break;
                    }
                }
            }
        }

        return res;
    }
};
