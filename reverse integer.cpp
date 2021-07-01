Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Input: x = 123
Output: 321
  
class Solution {
public:
    int reverse(int a) {
        bool neg = false;
        if (a <= -2147483648)
            return 0;
        if (a<0) {
            neg = true;
            a *= -1;
        }
        string str = to_string(a);
        std::reverse(str.begin(), str.end());

        stringstream ss(str);
        int out;
        ss >> out;
        
        if(out>=2147483647)
            return 0;
        
        if (neg)
            out *= -1;        
        
        return out;
    }
};
