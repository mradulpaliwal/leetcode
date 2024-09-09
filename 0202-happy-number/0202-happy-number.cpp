class Solution {
public:

    int rec(int n) {
        int totalSum = 0;
        while (n > 0) {
            int digit = n % 10;
            totalSum += digit * digit;
            n /= 10;
        }
        return totalSum;
    }

    bool isHappy(int n) {
        if (n == 1) {
            return true;  
        }
        if (n == 4) {
            return false;  // If n becomes 4, it will enter an endless loop (4 -> 16 -> 37 -> ...)
        }

        // Recursively check the next number in the sequence
        return isHappy(rec(n));
    }
};

        
    