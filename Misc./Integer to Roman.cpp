//Link: https://leetcode.com/problems/integer-to-roman/description/

class Solution {
public:
    string intToRoman(int num) {
        string ones[]={"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        string tens[]={"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        string hundreads[]={"","C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        string thousands[]={"", "M", "MM", "MMM"};

        string ans = thousands[num/1000] + hundreads[(num%1000)/100] + tens[(num%100)/10] + ones[num%10];
        return ans;
    }
};
