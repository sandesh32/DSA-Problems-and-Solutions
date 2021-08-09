/**

Given an integer n, return the number of trailing zeroes in n!.

Follow up: Could you write a solution that works in logarithmic time complexity?

 

Example 1:

Input: n = 3
Output: 0
Explanation: 3! = 6, no trailing zero.
Example 2:

Input: n = 5
Output: 1
Explanation: 5! = 120, one trailing zero.
Example 3:

Input: n = 0
Output: 0
 

Constraints:

0 <= n <= 104

**/

class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;
        for(int i=5;i<=n;i*=5){
            count += n/i;
        }
        return count;
    }
};


/**
PYTHON SOLUTION



class Solution:
    def trailingZeroes(self, n: int) -> int:
        count = 0
        i=5
        while i<=n:
            count +=  (n//i)
            i*=5
        return count