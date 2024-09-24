class Solution {
public:
    int firstUniqChar(string s) {
        int size=s.length();
        int count[26] = {0};  // To store frequency of each character (a-z)

    

    // Count frequency of each character
    for (int i = 0; i < size; i++) {
        count[s[i] - 'a']++;
    }

    // Find the first character with a frequency of 1
    for (int i = 0; i < size; i++) {
        if (count[s[i] - 'a'] == 1) {
            return i;
        }
    }

    return -1;
        
    }
};