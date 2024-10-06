class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.length();
        int n = needle.length();
        
        if (n == 0) return 0;  // Edge case: if needle is empty, return 0
        
        for (int i = 0; i <= h - n; i++) {
            int j = 0;
            for (j = 0; j < n; j++) {
                if (haystack[i + j] != needle[j]) {
                    break;
                }
            }
            if (j == n) return i;  // Found the substring
        }
        
        return -1;  // Substring not 
        
    }
};