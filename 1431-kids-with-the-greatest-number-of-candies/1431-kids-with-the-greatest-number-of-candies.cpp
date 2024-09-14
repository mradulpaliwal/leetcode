class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int maximum=-1;
        int n=candies.size();
        vector<bool>temp;
         for(int i=0;i<n;i++){
             if (candies[i]>maximum)
            
             maximum=max(maximum,candies[i]);
         }
        for(int i=0;i<n;i++){
        
            if(candies[i]+extraCandies>=maximum){
                temp.push_back(true);
            }
            else 
                temp.push_back(false);
        }
        return temp;
        
    }
};