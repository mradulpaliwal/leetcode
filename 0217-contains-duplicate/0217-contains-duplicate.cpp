class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>h;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            h[nums[i]]++;
        }
      for(auto it:nums){
      if(h[it]>1){
        return true;
      }
                        
       
        }
    
        return  false;
        
    }
    
};