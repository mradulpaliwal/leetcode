class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int mxi=0;
        
        unordered_set<int>h;
        for(int i=0;i<n;i++){
            h.insert(nums[i]);
        }
        for(int i=0;i<n;i++){
            if(h.find(nums[i]-1)==h.end()){
                int count=1;
            while(h.find(nums[i]+count)!=h.end()){
                count++;
            }
                mxi=max(mxi,count);
                
        }
        }
            return mxi;
        
    }
};