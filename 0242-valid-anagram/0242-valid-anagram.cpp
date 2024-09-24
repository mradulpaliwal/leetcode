class Solution {
public:
    bool isAnagram(string s, string t) {
         if (s.length() != t.length()) {
        return false;
    }
        /*sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
        */
                
       

    unordered_map<char, int> count;
    
    for (char c : s) {
        count[c]++;
    }
    
    for (char c : t) {
        count[c]--;
        if (count[c] == 0) {
            count.erase(c);  // remove characters with count 0 to reduce memory
        }
    }
    
    return count.empty();

    }        

};