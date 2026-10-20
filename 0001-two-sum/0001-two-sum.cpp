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
            /* for (int i = 0; i < newnums.size(); i++)
            {
                cout << newnums[i] << ",";
            }
            cout <<"newnums size: " <<newnums.size()<<endl; */
            for (int i = 0; i < nums.size(); i++)
            {
                if (find)
                    break;
                // cout<<"loop i values: "<<newnums[i]<<endl;
                for (int j = i + 1; j < nums.size(); j++)
                {
                    // cout<<"#loop j values: "<<newnums[j]<<" ";
                    if (target - nums[i] == nums[j])
                    {
                        res.push_back(i);
                        res.push_back(j);
                        // cout<<"values: "<<newnums[i]<<" "<<newnums[j]<<endl;
                        find = true;
                        break;
                    }
                }
                // cout<<endl;
            }
            /* cout<<"after adding values: ";
            for (int i = 0; i < nums.size(); i++){
                cout<<nums[i]<<",";
            }
            cout<<endl; */
        }

        return res;
    }
};
