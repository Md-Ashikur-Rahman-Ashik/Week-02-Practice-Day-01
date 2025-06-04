#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ourString;
    cin >> ourString;

    int stringLength = ourString.size();
    int i = 0, j = stringLength - 1, countString = 0;

    while (i < j)
    {
        if (ourString[i] == ourString[j])
        {
            countString++;
        }
        
        i++;
        j--;
    }

    if (countString == (stringLength / 2))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}