class Solution {
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int n = digits.size(), count = 0;
        if (n == 1)
        {
            if (digits[0] == 9)
            {
                digits.pop_back();
                digits.push_back(1);
                digits.push_back(0);
            }
            else
            {
                digits[0] += 1;
            }
        }
        else
        {
            for (int i = n - 1; i >= 0; i--)
            {
                if (digits[i] == 9)
                {
                    count++;
                }
                else
                    break;
            }
            //cout << count << endl;
            if (count > 0 && count < n)
            {
                for (int i = 0; i < count; i++)
                {
                    digits.pop_back();
                }
                n = digits.size();
                //cout << "new size: " << n << endl;
                // for (int i = 0; i < n; i++)
                // {
                //     cout << "after pop " << digits[i] << ", ";
                // }
                // cout << endl;

                digits[n - 1] = digits[n - 1] + 1;
                //cout << "last digit: " << digits[n] << endl;
                for (int i = 0; i < count; i++)
                {
                    digits.push_back(0);
                }
            }
            else if (count == n)
            {
                for (int i = 0; i < count; i++)
                {
                    digits.pop_back();
                }
                digits.push_back(1);
                for (int i = 0; i < count; i++)
                {
                    digits.push_back(0);
                }
            }
            else
            {
                digits[n - 1] = digits[n - 1] + 1;
            }
        }

        // for (int i = 0; i < digits.size(); i++)
        // {
        //     cout << digits[i] << ",";
        // }
        return digits;
    }
};