class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        std::sort(nums.begin(), nums.end());

        int count = 1; // Start with 1 to include the largest element
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] != nums[i + 1]) {
                count++;
            }
            if (count == 3) {
                return nums[i];
            }
        }

        // In case the k-th distinct largest element is the smallest element
    
        

        return nums[n-1]; 
    }
};