//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int search(string text, string pat)
	{
	  bool flag = false;
	    int n = text.size();
	    int m = pat.size();
	    
	    for(int i=0;i<=(n - m);i++){
	        int j;
	        for(j = 0; j<m;j++){
	            if(pat[j] != text[i+j]){
	                break;
	            }
	        }
	        if(j == m){
	            flag = true;
	            break;
	        }
	    }
	    if(flag) return 1;
	    else return 0;
	    // Your code goes here
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string x, y;
   		cin >> x >> y;



        Solution ob;
   		cout << ob.search(x, y) << "\n";
   	}

    return 0;
}
// } Driver Code Ends