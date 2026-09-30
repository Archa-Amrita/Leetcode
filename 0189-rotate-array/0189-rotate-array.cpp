class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> nums1;
        for (int i = 0; i < k; i++) {
            nums1.push_back(0);
            // cout << nums1[i] << " ";
        }
        // cout << endl;
        // cout << "nums.size() = " << nums.size() << endl;
        for (int i = 0; i < nums.size(); i++) {
            nums1.push_back(nums[i]);
        }
        /*for (int i = 0; i < nums1.size(); i++)
        {
            cout << nums1[i] << " ";
        }
        cout << endl;*/
        int m = k, n = nums1.size();
        for (int i = 0; i < k; i++) {
            nums1[m - 1] = nums1[n - 1];
            n--;
            m--;
        }
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = nums1[i];
        }
    }
};