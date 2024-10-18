#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void rev(string &str, int i, int j)
{
    // base condition :
    if (i > j)
        return;
    swap(str[i], str[j]);
    i++;
    j--;
    rev(str, i, j);
}

bool pal(string str, int i, int j)
{

    // base case :
    if (i > j)
        return true;
    if (str[i] != str[j])
        return false;
    else
    {
        i++;
        j--;
        pal(str, i, j);
    }
}
bool p(string str, int i)
{

    if (i > (str.length() - i))
        return true;
    if (str[i] != str[str.length() - (i + 1)])
        return false;
    else
    {
        i++;
        p(str, i);
    }
}

// to count the length of a string :
void count(string str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        ++i;
    }
    cout << "the length of the string is : " << i << endl;
}

int main()
{
    string name;

    cout << "eneter the string \n";
    cin >> name;

    cout << name.length() << endl; // find the length of string using inbuilt function :

    rev(name, 0, name.length() - 1); // reverse string call :
    cout << name << endl;

    // palendrom :
    if (pal(name, 0, name.length() - 1))
        cout << "It is a palendrom" << endl;
    else
        cout << "It is not a palendrom " << endl;

    count(name);

    // checking pallendrom without using the j variable : 
    if (p(name, 0))
        cout << "palendrom " << endl;
    else
        cout << "not a palendrom " << endl;

    return 0;
}