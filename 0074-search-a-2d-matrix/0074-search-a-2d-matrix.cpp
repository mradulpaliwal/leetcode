class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        int s = 0 ;
        int e = r*c - 1 ;
        int m= s+(e-s)/2;
        while(s<=e){
            int element = matrix[m/c][m%c];//m/c row coordinate btayega m ka m%c column coordinate
            if(target == element){
                return 1;
            }
            else if(target <= element){
                e=m-1;
            }
            else {
                s=m+1;
            }
            m = s+(e-s)/2;
        }
        return 0;
        
        
    }
};