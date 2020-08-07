#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    cout << endl;
    cout << "Find the occurrences of digit d in the range of number b" << endl;
    cout << endl;

    vector<int> my_vector;
    vector<int>::iterator it;

    int number_given = 25;
    int number_occ = 2;

    cout << "Number b: " << number_given << endl;
    cout << "Number d: " << number_occ << endl;

    my_vector.push_back(0);
    for (int i = 0; i < number_given / 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            if (i != 0)
                my_vector.push_back(i);
            my_vector.push_back(j);
        }

        my_vector.push_back(i + 1);
        my_vector.push_back(0);
    }

    for (int i = 1; i < ((number_given % 10) + 1); i++)
    {
        my_vector.push_back(number_given / 10);
        my_vector.push_back(i);
    }

    int number_cnt = 0;

    for (uint16_t i = 0; i < my_vector.size(); i++)
    {
        it = find(my_vector.begin(), my_vector.end(), number_occ);

        if (it != my_vector.end())
        {
            my_vector.erase(it);
            number_cnt++;
        }
    }

    cout << endl;

    cout << "Number of occurrences -> [" << number_occ << "] in range[" << number_given << "]: " << number_cnt << endl;

    return 0;
}
