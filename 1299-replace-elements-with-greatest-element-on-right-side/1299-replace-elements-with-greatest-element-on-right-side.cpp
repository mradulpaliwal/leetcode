class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
         int mx=-1;
        int n=arr.size();
        vector<int>temp(n);
        for(int i=n-1;i>=0;i--){
            temp[i]=mx;
         mx=max(mx,arr[i]);
        }
        return temp;
        
    }
};