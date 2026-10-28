class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        char temp;
        for (int i = 0; i < n; i++)
        {
            temp = s[i];
            s[i] = s[n - 1];
            s[n - 1] = temp;
            n--;
            
        }
    }
};