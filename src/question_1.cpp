#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cout << endl;
    cout << "Given unorder set of numbers" << endl;
    cout << "1st smallest number = 1" << endl;
    cout << "2st smallest number = 2" << endl;
    cout << "nth smallest number = nth smallest in the set" << endl;
    cout << endl;

    {
        vector<int> myList ={ 1, 6, 3, 9, 2, 2, 5, 6 };

        cout << "set of numbers: ";
        for (auto element : myList)
            cout << element << " ";
        cout << endl;

        myList.push_back(1234);

        vector<int> smallestVec;

        sort(myList.begin(), myList.end());

        for (size_t i = 0; i < myList.size() - 1; i++)
        {
            if (myList[i] != myList[i + 1])
            {
                smallestVec.push_back(myList[i]);
            }
        }

        cout << "smallest numbers: ";
        for (auto element : smallestVec)
            cout << element << " ";
        cout << endl;
    }

    return 0;
}