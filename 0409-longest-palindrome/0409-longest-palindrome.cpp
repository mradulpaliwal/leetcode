class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }
    
    int length = 0;
    bool odd_found = false;
    
    for (auto& pair : freq) {
        if (pair.second % 2 == 0) {
            length += pair.second;  // add even counts
        } else {
            length += pair.second - 1;  // add the largest even part
            odd_found = true;
        }
    }
    
    if (odd_found) {
        length += 1;  // add one odd character in the center
    }
    
    return length;
        
    }
};