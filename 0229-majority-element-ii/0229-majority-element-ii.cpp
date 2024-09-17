class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp;
        unordered_map<int,int>h;
        
        for(int i=0;i<n;i++){
            h[nums[i]]++;
            
        }     
      for(  auto e:h){
          if(e.second>n/3){
              
              temp.push_back( e.first);
          }
      }
        return temp;
    }
};