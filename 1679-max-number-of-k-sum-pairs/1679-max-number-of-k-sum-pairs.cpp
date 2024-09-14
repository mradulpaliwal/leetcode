class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int count=0;
        int left=0;
        int right=n-1;
       while(left<right){
           if(nums[left]+nums[right]==k){
               count++;
               nums.erase(nums.begin() + left);
              nums.erase(nums.begin() + right);
               right-=2;

           }
           else if(nums[left]+nums[right]>k)
               right--;
           else 
               left++;
       }
        return count;
        
    }
};