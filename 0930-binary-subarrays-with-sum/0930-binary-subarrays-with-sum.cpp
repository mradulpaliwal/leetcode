class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       int n=nums.size();
        unordered_map<int,int>h;
        int presum=0;
        int count=0;
        h[0]=1;// agar starting ki index hi sum=k bna di toh
        for(int i=0;i<n;i++){
            presum+=nums[i];
            if (h.find(presum-goal) != h.end()) {
            count += h[presum-goal];
        }

       // btayega ki kitni baar wo sum already aachuka hai
        h[presum]++;
        }
        return count;
            
        
        
        
    }
};