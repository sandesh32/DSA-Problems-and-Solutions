/**leetcode168

Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.

For example:

A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
...
 

Example 1:

Input: columnNumber = 1
Output: "A"
Example 2:

Input: columnNumber = 28
Output: "AB"
Example 3:

Input: columnNumber = 701
Output: "ZY"
Example 4:

Input: columnNumber = 2147483647
Output: "FXSHRXW"
 

Constraints:

1 <= columnNumber <= 2^31 - 1

**/

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s="";
        while(columnNumber>0){
            int r=columnNumber%26;
            if(r!=0){
                s=char(64+r)+s;
                columnNumber=columnNumber/26;
            }
            else{
                s="Z"+s;
                columnNumber=(columnNumber-r)/26-1;
            }
        }
        return s;
    }
};












/**

PYTHON solution:

class Solution:
    def convertToTitle(self, columnNumber: int) -> str:
        s=""
        while columnNumber>0:
            r=columnNumber%26
            if r!=0:
                s=chr(64+r)+s
                columnNumber=(columnNumber-r)//26
            else:
                s="Z"+s
                columnNumber=(columnNumber-r)//26-1
        return s
                **/