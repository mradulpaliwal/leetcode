class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n=nums.size();
        
        for(int i=0;i<n;i++){
            int count=1;
            for (int j=i+1;j<n;j++)
                if (nums[i]==nums[j])
                    count++;
                    
                int max=count;
        
                
            
        if(max>n/2)
                return nums[i];}
            
        
        return -1;
        
    }
};