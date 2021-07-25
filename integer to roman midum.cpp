Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given an integer, convert it to a roman numeral.

 
 
 class Solution {
public:
    string intToRoman(int num) {
        string output = "";
        if (num >= 1000)
        {
            int th = num/1000;
            for (int i = 0; i<th; i++)
            {
                output = output + "M";
            }
            num -= th*1000;
        }
        if (num >= 900)
        {
            output = output + "CM";
            num -= 900;
        }
        if (num >= 500)
        {
            output = output + "D";
            num -= 500;
        }
        if (num >= 400)
        {
            output = output + "CD";
            num -= 400;
        }
        if (num >= 100)
        {
            int th = num/100;
            for (int i = 0; i<th; i++)
            {
                output = output + "C";
            }
            num -= th*100;
        }
        if (num >= 90)
        {
            output = output + "XC";
            num -= 90;
        }
        if (num >= 50)
        {
            output = output + "L";
            num -= 50;
        }
        if (num >= 40)
        {
            output = output + "XL";
            num -= 40;
        }
        if (num >= 10)
        {
            int th = num/10;
            for (int i = 0; i<th; i++)
            {
                output = output + "X";
            }
            num -= th*10;
        }
        if (num >= 9)
        {
            output = output + "IX";
            num -= 9;
        }
        if (num >= 5)
        {
            output = output + "V";
            num -= 5;
        }
        if (num >= 4)
        {
            output = output + "IV";
            num -= 4;
        }
        if (num < 4 && num >= 0)
        {
           for (int i = 0; i<num; i++)
            {
                output = output + "I";
            } 
        }
        return output;
    }
};
