Given a non-empty array of decimal digits representing a non-negative integer, increment one to the integer.

The digits are stored such that the most significant digit is at the head of the list, and each element in the array contains a single digit.

You may assume the integer does not contain any leading zero, except the number 0 itself.






class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        reverse(digits.begin(),digits.end());
        
        vector <int> ans;
        int carry=1;
        for(int i=0;i<n;i++){
            digits[i]=digits[i]+carry;
            if(digits[i]>9){
                ans.push_back(0);
                carry=1;
            }
            else{
                ans.push_back(digits[i]);
                carry=0;
            }
        }
        if(carry==1) ans.push_back(carry);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
