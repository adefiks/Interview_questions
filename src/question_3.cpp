#include <iostream>
#include <string>

using namespace std;

string reverseString(string st1)
{
    string st2 = st1;

    int k = st1.size() - 1;
    for (size_t i = 0; i < st1.size(); i++)
    {
        st2[i] = st1[k];
        k--;
    }
    return st2;
}

void reverseStringSwap(string &st1)
{
    int k = st1.size() - 1;

    for (size_t i = 0; i < (st1.size() / 2); i++)
    {
        swap(st1[i], st1[k]);
        k--;
    }
}

int main()
{
    cout << endl;
    cout << "Given string reverse it." << endl;
    cout << endl;

    string st1 ={ "Hi google" };

    cout << "string: " << st1 << endl;

    cout << endl << "using 2-string: " << reverseString(st1) << endl;

    reverseStringSwap(st1);

    cout << "using swap: " << st1 << endl;

    return 0;
}