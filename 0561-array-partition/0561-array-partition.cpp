class Solution {
public:
    // hmesha phla element to ,minimum hoga hi har pair ka or yhi pair ka minimum add hote jayega maximize krne k lie ( i+2) toh bas 2 ,2 ke pair ke lie kie hai
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxsum=0;
        for(int i=0;i<nums.size();i=i+2){
            maxsum+=nums[i];
        }
        return maxsum;
    }
};