#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;

    for (int i = 0; i < testcase; i++)
    {
        int sumFirstThree = 0;
        int sumSecondThree = 0;

        int num;
        cin >> num;

        for (int i = 0; i < 6; i++)
        {
            int digit = num % 10;
            if (i >= 0 && i <= 2)
            {
                sumFirstThree = sumFirstThree + digit;
            }
            else if (i >= 3 && i <= 5)
            {
                sumSecondThree = sumSecondThree + digit;
            }
            num = num / 10;
        }

        if (sumFirstThree == sumSecondThree)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}