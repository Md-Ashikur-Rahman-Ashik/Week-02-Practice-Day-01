#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ourString, newString;
    cin >> ourString;

    int index = ourString.find("EGYPT");

    while (index >= 0)
    {
        newString = ourString.replace(index, 5, " ");
        index = ourString.find("EGYPT");
    }

    cout << newString;

    return 0;
}