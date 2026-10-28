class Solution {
public:
    int reverse(int x) {
        int sign = 1;
        long long val = x;
        long long res = 0;
        if (val < 0) {
            sign = -1;
            //val *= -1;
            val=abs(val);
        }
        while (val > 0) {
            long long n = val % 10;
            res = res * 10 + n;
            val /= 10;
        }
        if (res < INT_MIN || res > INT_MAX) {
            return 0;
        } else {
            return res * sign;
        }
    }
};