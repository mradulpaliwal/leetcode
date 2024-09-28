class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
    vector<int> pCount(26, 0); // Frequency array for string p
    vector<int> sCount(26, 0); // Frequency array for sliding window in string s

    int pLen = p.length();
    int sLen = s.length();

    if (sLen < pLen) return result;

    // Initialize the frequency arrays for the first window
    for (int i = 0; i < pLen; i++) {
        pCount[p[i] - 'a']++;
        sCount[s[i] - 'a']++;
    }

    // Slide the window over the string s
    for (int i = 0; i < sLen - pLen + 1; i++) {
        // If the frequency arrays match, it means we have an anagram
        if (pCount == sCount) {
            result.push_back(i); // Add the starting index of the anagram
        }
        // Move the window to the right
        if (i + pLen < sLen) {
            sCount[s[i + pLen] - 'a']++;  // Add the next character to the window
            sCount[s[i] - 'a']--;         // Remove the first character of the current window
        }
    }

    return result;
        
    }
};