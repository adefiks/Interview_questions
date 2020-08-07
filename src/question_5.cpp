#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

struct output
{
    int whatInt = 0;
    int howManyTimes = 1;
};

output majorityElement(std::vector<int> vec)
{
    output outData;

    vec.push_back(1234);

    std::sort(vec.begin(), vec.end());

    for (size_t i = 0; i < vec.size() - 1; i++)
    {
        if (vec[i] == vec[i + 1])
        {
            outData.whatInt = vec[i];
            outData.howManyTimes++;
        }
        if (outData.howManyTimes > std::floor((vec.size() - 1) / 2))
            break;

        if (outData.whatInt != vec[i])
            outData.howManyTimes = 1;
    }

    if (outData.howManyTimes < std::floor((vec.size() - 1) / 2))
        outData.howManyTimes = 1;

    return outData;
}

int main()
{
    std::cout << std::endl;
    std::cout << "Given an array of size n, find the majority element. The majority element is the element that appears more than floor(n/2) times." << std::endl;
    std::cout << "You may assume that the array is non-empty and the majority element always exist in the array." << std::endl;
    std::cout << std::endl;

    std::vector<int> vec1 ={ 4, 12, 9, 5, 6, 5, 5, 12, 12, 12, 12 };

    std::cout << "array: ";
    for (auto element : vec1)
        std::cout << element << " ";
    std::cout << std::endl;

    output result = majorityElement(vec1);

    if (result.howManyTimes == 1)
        std::cout << std::endl << "there is no majority element" << std::endl;
    else
        std::cout << std::endl  << result.whatInt << " which occurs " << result.howManyTimes << " times wich is greater then " << vec1.size() << "/2" << std::endl;

    return 0;
}