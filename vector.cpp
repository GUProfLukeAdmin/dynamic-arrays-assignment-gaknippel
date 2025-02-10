#include <vector>
#include <iostream>
using namespace std;


void part1() 
{
    vector <int> vec1;

    for(int i = 0; i <50000; i++)
    {
        vec1.push_back(i);
    }

    cout << "After adding elements: Size = " << vec1.size() << ", Capacity = " << vec1.capacity() << endl;

    vec1.resize(vec1.size()/2);

    cout << "After resizing: Size = " << vec1.size() << ", Capacity = " << vec1.capacity() << endl;

    vec1.shrink_to_fit();

    cout << "After shirnk_to_fit(): Size = " << vec1.size() << ", Capacity = " << vec1.capacity() << endl;
}

void part2() 
{
    vector <bool> boolVec;
    vector <char> charVec;

    for(int i = 0; i < 10000; i++)
    {
        boolVec.push_back(i);
        charVec.push_back(i);
    }

    size_t byteSizeBool = boolVec.size()/8;
    size_t byteSizeChar = charVec.size() * sizeof(char);

    cout << "Memory usage of std::vector<bool>: " << byteSizeBool << " bytes" << endl;

    cout << "Memory usage of std::vector<bool>: " << byteSizeChar << " bytes" << endl;

    
}

int main() {
    part1();
    part2();
    return 0;
}
