#include <iostream>
#include <string>

using namespace std;

string compareString(string st1, string st2)
{
    for (auto &element : st1)
    {
        element = toupper(element);
    }

    for (auto &element : st2)
    {
        element = toupper(element);
    }

    if (st1.compare(st2) == 0)
    {
        return "strings the same";
    }
    else
    {
        return "strings not the same";
    }
}

int main()
{
    cout << endl;
    cout << "Given two strings compare them case insensitive." << endl;
    cout << endl;

    string st1 ={ "First string" };
    string st2 ={ "first string" };

    cout << "first string: " << st1 << endl;
    cout << "second string: " << st2 << endl;

    cout << endl << compareString(st1, st2) << endl;

    return 0;
}