class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
    long long area=0;
        int left=0;
        int right=n-1;
        long long  maxar=0;
        
        
        while(left<right){
            int width=right-left;
           area=min(height[left],height[right])*width;
                            maxar=max(maxar,area);
                           if(height[left]<height[right]){
                               left++;
                           }
                           else
                               right--;

        
            
            
        }
        return maxar;
        
    }
};