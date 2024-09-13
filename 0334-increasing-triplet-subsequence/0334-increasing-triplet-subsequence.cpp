class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        //brute force o(n^2)
        //for(int i=0;i<n;i++){
            //for(int j=i+1;j<n;j++){
                //for(int k=j+1;k<n;k++){
                //    if(nums[k]>nums[j]&&nums[j]>nums[i])
              //         return true;
            //    }
          //  }
        //}
        //               return false;
        
        int first=INT_MAX;
        int sec=INT_MAX;
        
        for(int i=0;i<n;i++){
            if (nums[i]<=first)
            {
                first=nums[i];
            }
            else if(nums[i]<=sec){
                sec=nums[i];
            }
            else 
                return true;
            
        }
                       return false;
        
    }
};