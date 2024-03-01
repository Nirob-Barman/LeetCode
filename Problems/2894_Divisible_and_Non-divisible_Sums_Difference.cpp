#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int differenceOfSums(int n, int m)
    {
        int sum = n * (n + 1) / 2;
        // the number of terms for integers divisible by m from 1 to n
        int numTermsDivisible = n / m;
        int numTermsNotDivisible = n - numTermsDivisible;
        // cout << numTermsDivisible << " " << numTermsNotDivisible << endl;

        int sumDivisible = (numTermsDivisible * (2 * m + (numTermsDivisible - 1) * m)) / 2;
        int num2 = sumDivisible;
        int num1 = sum - num2;
        return num1 - num2;
    }
};

int main()
{
    Solution s;
    cout << s.differenceOfSums(10, 3) << endl;
    cout << s.differenceOfSums(5, 6) << endl;
    cout << s.differenceOfSums(5, 1) << endl;
    return 0;
}