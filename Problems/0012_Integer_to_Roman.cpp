#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string intToRoman(int num)
    {
        // string roman;

        // while (num >= 1000)
        // {
        //     roman += "M";
        //     num -= 1000;
        // }

        // while (num >= 900)
        // {
        //     roman += "CM";
        //     num -= 900;
        // }

        // while (num >= 500)
        // {
        //     roman += "D";
        //     num -= 500;
        // }

        // while (num >= 400)
        // {
        //     roman += "CD";
        //     num -= 400;
        // }

        // while (num >= 100)
        // {
        //     roman += "C";
        //     num -= 100;
        // }

        // while (num >= 90)
        // {
        //     roman += "XC";
        //     num -= 90;
        // }

        // while (num >= 50)
        // {
        //     roman += "L";
        //     num -= 50;
        // }

        // while (num >= 40)
        // {
        //     roman += "XL";
        //     num -= 40;
        // }

        // while (num >= 10)
        // {
        //     roman += "X";
        //     num -= 10;
        // }

        // while (num >= 9)
        // {
        //     roman += "IX";
        //     num -= 9;
        // }

        // while (num >= 5)
        // {
        //     roman += "V";
        //     num -= 5;
        // }

        // while (num >= 4)
        // {
        //     roman += "IV";
        //     num -= 4;
        // }

        // while (num >= 1)
        // {
        //     roman += "I";
        //     num -= 1;
        // }

        // return roman;

        // another method

        string roman;

        int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string sym[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

        for (int i = 0; i < 13; i++)
        {
            while (num >= val[i])
            {
                num -= val[i];
                roman += sym[i];
            }
        }

        return roman;
    }
};

int main()
{
    Solution s;
    cout << s.intToRoman(3) << endl;  // III
    cout << s.intToRoman(4) << endl;  // IV
    cout << s.intToRoman(9) << endl;  // IX
    cout << s.intToRoman(58) << endl; // LVIII
    return 0;
}