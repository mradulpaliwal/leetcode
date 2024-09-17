class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>h;
        for(int i=0;i<n;i++){
            h[arr[i]]++;
        }
       
        set<int> freq;
        for (auto it : h) {
            if (freq.find(it.second) != freq.end()) {
                return false;
            }
            freq.insert(it.second);
        }
        return true;
        
    }
};