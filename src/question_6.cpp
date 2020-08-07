#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    cout << endl;
    cout << "Find the first non-repeating character in an vector" << endl;
    cout << endl;

    vector<int> my_array ={ 0, 2, 1, 1, 2, 8, 1, 9, 3, 4, 0, 8, 9 };
    vector<int>::iterator it;

    cout << "vector: ";
    for (auto element : my_array)
        cout << element << " ";
    cout << endl;


    int element_number = 0;

    int size_of_vector = my_array.size();

    for (int num = 0; num < size_of_vector; num++)
    {

        element_number++;
        // cout << "element number: "<< element_number << ", element in vactor: " << my_array[num] << endl;

        it = find(my_array.begin() + element_number, my_array.end(), my_array[num]);

        if (it == my_array.end())
        {
            cout << endl << "first non-repeating character is:  " << my_array[num] << endl;
            return 1;
        }
        else
        {
            my_array.push_back(my_array[num]);
        }
    }

    cout << "All char are repeating" << endl;

    return 0;
}