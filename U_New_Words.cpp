#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ourString;
    cin >> ourString;

    int stringLength = ourString.size();
    int countE = 0;
    int countG = 0;
    int countY = 0;
    int countP = 0;
    int countT = 0;

    for (int i = 0; i < stringLength; i++)
    {
        if (ourString[i] == 'E' || ourString[i] == 'G' || ourString[i] == 'Y' || ourString[i] == 'P' || ourString[i] == 'T')
        {
            char newCharacter = ourString[i] + 32;
            ourString[i] = newCharacter;
        }

        if (ourString[i] == 'e')
        {
            countE++;
        }
        else if (ourString[i] == 'g')
        {
            countG++;
        }
        else if (ourString[i] == 'y')
        {
            countY++;
        }
        else if (ourString[i] == 'p')
        {
            countP++;
        }
        else if (ourString[i] == 't')
        {
            countT++;
        }
    }

    int count = min({countE, countG, countY, countP, countT});
    cout << count;

    return 0;
}