class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n==1){
            return nums[0];
        }
            for(int i=1;i<n;i++){
                if(nums[i-1]!=nums[i]&&nums[i]!=nums[i+1]){
                    return nums[i];
                   
            }
            
                 if(nums[0]!=nums[1]){
            return nums[0];
        }
        if(nums[n-1]!=nums[n-2]){
            return nums[n-1];
            
        }
            }
    return -1;
        
    }
};