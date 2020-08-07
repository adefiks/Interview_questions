#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    cout << endl;
    cout << "Form the largest possible number from the array of number" << endl;
    cout << endl;

    vector<int> my_vector ={ 1, 8, 2, 35, 8 };

    int max_number = 0;

    cout << "vector: ";
    for (auto element : my_vector)
        cout << element << " ";
    cout << endl;

    int v_size = my_vector.size();

    for (int i = 0; i < v_size; i++)
    {
        max_number += *max_element(my_vector.begin(), my_vector.end()) * pow(10, (my_vector.size() - 1));
        my_vector.erase(max_element(my_vector.begin(), my_vector.end()));
    }

    cout << endl << "largest possible number: " << max_number << endl;

    return 0;
}