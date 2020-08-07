#include <iostream>
#include <algorithm> 
#include <vector>
#include <math.h>
#include <tuple>
#include <map>
#include <string>

using namespace std;

int main()
{
    cout << endl;
    cout << "Given array of students and their marks in different subjects. Find maximum average of the student. {“James”, “70”}, {“Nick”, “60”}, {“James”, “10”}" << endl;
    cout << endl;

    vector<tuple<string, int>> grades;

    grades.push_back(make_tuple("James", 70));
    grades.push_back(make_tuple("Tom", 70));
    grades.push_back(make_tuple("Tom", 10));
    grades.push_back(make_tuple("James", 20));
    grades.push_back(make_tuple("James", 10));
    grades.push_back(make_tuple("Good", 22));
    grades.push_back(make_tuple("James", 60));
    grades.push_back(make_tuple("Tom", 16));
    grades.push_back(make_tuple("Tom", 17));

    for (auto& element : grades)
    {
        cout << "{“"<< get<0>(element) << "”, “" << get<1>(element) <<"”}" << endl;
    }
    

    vector<tuple<string, int>> copy = grades;
    vector<tuple<string, int>>::iterator it;

    string name = get<0>(copy[0]);
    string winner_name = name;

    int max_avr = 0;
    int temp_avr = 0;
    int cnt = 0;

    while (copy.empty() != true)
    {
        do
        {
            it = find_if(copy.begin(), copy.end(), [name](const tuple<string, int>& e) {return get<0>(e) == name;});
            if (it != copy.end())
            {
                temp_avr += get<1>(*it);
                cnt++;
                copy.erase(it);
            }
        } while (it != copy.end());

        temp_avr = temp_avr/cnt;

        if (temp_avr > max_avr) {
            max_avr = temp_avr;
            winner_name = name;
            cnt = 0;
            temp_avr = 0;
        }

        name = get<0>(copy[0]);
    }
    cout << "max avr is: " << max_avr << ", from student: " << winner_name << endl;
    return 0;
}