class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size();
    int p = word2.size();
    string result; // Initialize an empty result string

    for (int i = 0; i < n || i < p; i++) {
        if (i < n) {
            result += word1[i]; // Append from word1
        }
        if (i < p) {
            result += word2[i]; // Append from word2
        }
    }

    return result;
        
    }
};