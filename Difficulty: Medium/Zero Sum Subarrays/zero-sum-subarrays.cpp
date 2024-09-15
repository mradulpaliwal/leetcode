//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    
    long long int findSubarray(vector<long long int> &arr, int n ) {
      
       unordered_map<long long, int> sumCount;
    sumCount[0] = 1;  // sum=0 ka count ek baar store kralia he phle se 
    long long sum = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];


        if (sumCount.find(sum) != sumCount.end()) {
            count += sumCount[sum];
        }

       // btayega ki kitni baar wo sum already aachuka hai
        sumCount[sum]++;
        }
        return count;
     
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<long long int> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}
// } Driver Code Ends