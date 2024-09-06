//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<int> BoundaryElements(vector<vector<int>>&matrix){
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>v;
        if(n==1){
            for(int i=0;i<n;i++)
                v.push_back(matrix[0][0]);
                
            }
            else 
            {
               for(int i = 0; i < m; i++) {
            v.push_back(matrix[0][i]);
        }
        
        for(int i = 1; i < n - 1; i++) {
            v.push_back(matrix[i][0]);
            v.push_back(matrix[i][n-1]);
        }
        
        for(int i = 0; i < n; i++) {
            v.push_back(matrix[n-1][i]);
        }
            
            }
               
            return v;
            
            
        
        // Code here
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>matrix(n, vector<int>(n, 0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				cin >> matrix[i][j];
		Solution obj;
		vector<int>ans = obj.BoundaryElements(matrix);
		for(auto i: ans)
			cout << i << " ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends