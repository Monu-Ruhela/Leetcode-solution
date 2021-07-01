Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward. For example, 121 is palindrome while 123 is not.



class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0|| (x!=0 &&x%10==0)) 
            return false;
        int rnum=0; 
        while(x>rnum)
        {
            rnum = rnum*10+x%10;    
            x = x/10;
        }
        return (x==rnum)||(x==rnum/10); 
    }
};
