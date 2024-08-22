class Solution {
public:
    bool solve(vector<int>&a,int mid,int n,int m){
        int req=1;long long sum=0;
        for(int i=0; i<n;i++){
            if(sum+a[i]>mid){
                req++;
                sum=a[i];
            }
            else{
                sum+=a[i];
            }
            
                
            
        }
        return(req<=m);
    }
    int splitArray(vector<int>& nums, int k) {
        int sum=0;int mx=0; int n=nums.size();
        
        for(int i=0;i<n;i++){
            sum+=nums[i];
            mx=max(nums[i],mx);
            
            
        }
        int s=mx,e=sum; int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(solve(nums,mid,n,k)){
                ans=mid;
                e=mid-1;
            }
            else{ s=mid+1;}
        }
        return ans;
    }
};