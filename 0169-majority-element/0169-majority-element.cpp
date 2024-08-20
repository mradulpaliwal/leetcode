class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
       
       // brute force soln 
        //for(int i=0;i<n;i++){
            //int count=1;
            
          //  for (int j=i+1;j<n;j++)
               // if (nums[i]==nums[j])
                    //count++;
                    
                
        
                
            
        //if(count>n/2)
                //return nums[i];
    //}
            
        
        //return -1;
        // moore voting algorithm
        // sbse phle dundenge majority konsa hai
        int res=0;
        int count=1;
        
        for(int i=1;i<n;i++){{
            
            if(nums[i]==nums[res]){
                count++;
            }
            else count--;}
            if (count==0){
                res=i;count=1;
            }
            
        }
        // check kro majority he bhi yha nahi
                         
       count=0;
            

        for(int i=0;i<n;i++){
            
            if(nums[i]==nums[res]){
                count++;
            }
        }
        if(count<=n/2){
        res=-1;}
        return nums[res];
    }
};