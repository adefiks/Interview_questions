#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int returnMissingInt(vector<int> vec1, vector<int> vec2)
{
    sort(vec1.begin(), vec1.end());
    sort(vec2.begin(), vec2.end());

    for (size_t i = 0; i < vec1.size(); i++)
    {
        if (vec1[i] != vec2[i])
        {
            return vec1[i];
        }
    }

    return 0;
}

int main()
{
    cout << endl;
    cout << "Given two vectors find missing int in second vector." << endl;
    cout << endl;

    vector<int> vec1 ={ 4, 12, 9, 5, 6 };
    vector<int> vec2 ={ 4, 9, 12, 6 };

    cout << "vector_1: ";
    for (auto element : vec1)
        cout << element << " ";
    cout << endl;

    cout << "vector_2: ";
    for (auto element : vec2)
        cout << element << " ";
    cout << endl;

    cout << endl << "missing int is: " << returnMissingInt(vec1, vec2) << endl;

    return 0;
}