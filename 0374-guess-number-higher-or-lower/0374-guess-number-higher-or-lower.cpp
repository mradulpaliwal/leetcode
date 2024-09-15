/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int left=1;
        int right =n;
        
      int mid=left + (right - left) / 2;
        
    while (left <= right) {
        int mid = left + (right - left) / 2;  // Correct calculation of mid
        
        int result = guess(mid);  // Get feedback from the guess function
        
        if (result == 0) {
            return mid;  // Correct guess
        } else if (result == 1) {
            left = mid + 1;  // Target number is higher
        } else {  // result == -1
            right = mid - 1;  // Target number is lower
        }
    }
    
    return -1;
    }
};