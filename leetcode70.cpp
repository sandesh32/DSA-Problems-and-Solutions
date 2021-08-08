/*
You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

*/



class Solution {
public:
    int climbStairs(int n) {
        int a=1;
        int b=0;
        /*
        The solution is simple fibonacii series.
        */
        for(int i=0;i<n;i++){
            int c=a;
            a=a+b;
            b=c;
        }
        return a;
    }
};