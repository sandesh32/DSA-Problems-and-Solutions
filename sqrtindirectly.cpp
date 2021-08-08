/*
Given a non-negative integer x, compute and return the square root of x.

Since the return type is an integer, the decimal digits are truncated, and only the integer part of the result is returned.

Note: You are not allowed to use any built-in exponent function or operator, such as pow(x, 0.5) or x ** 0.5.
*/
class Solution {
public:
    int mySqrt(int x) {
        int count=0;
        int num1=1;

        /*
        Example: 4 = 1 + 3, 9 = 1 + 3 + 5
        49 = 1 + 3 + 5 + 7 + 9 + 11 + 13
        So, when you go on subtracting odd numbers (starting from 1) until you get 0, you will get perfect square root
        
        But, what if you won't get perfect square number?
        Example: 14 < 1 + 3 + 5 + 7 
        So, if you get any negative value while subtracting, you return the value count - 1
        */

        while(true){
            x=x-num1;
            num1+=2;
            count+=1;
            if(!x){
                return count;
            }
            else if(x<0){
                return count-1;
            }
        }
    }
};