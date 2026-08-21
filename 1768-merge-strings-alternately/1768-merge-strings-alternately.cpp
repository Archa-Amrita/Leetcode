class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word3 = "";
        int len1 = 0, len2 = 0, len = 0, j = 0;
        len1 = word1.length();
        len2 = word2.length();
        if (len1 >= len2) {
            len = 1;
        }

        if (len == 1) {
            for (int i = 0; i < len2; i++) {
                word3 += word1[i];
                word3 += word2[i];
                j++;
            }
            for (int i = j; i < len1; i++) {
                word3 += word1[i];
            }
        } else {
            for (int i = 0; i < len1; i++) {
                word3 += word1[i];
                word3 += word2[i];
                j++;
            }
            for (int i = j; i < len2; i++) {
                word3 += word2[i];
            }
        }
        return word3;
    }
};
