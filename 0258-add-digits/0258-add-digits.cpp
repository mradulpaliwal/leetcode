class Solution {
public:
    int sum(int num){
        if( num>=0&&num<=9){
            return num;
        }
        int s=0;
        while(num>0){
           s += num % 10;  
        num /= 10;
           
            
        }
         return sum(s);
       
    }
    int addDigits(int num) {
        return sum(num);
        
    }
};