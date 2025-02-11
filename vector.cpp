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

    cout << "After shrink_to_fit(): Size = " << vec1.size() << ", Capacity = " << vec1.capacity() << endl;
}

void part2() 
{
    vector <bool> boolVec(10000);
    vector <char> charVec(10000);



    cout << "Memory usage of std::vector<bool>: " << boolVec.capacity()/8 << " bytes" << endl;

    cout << "Memory usage of std::vector<char>: " << charVec.capacity() << " bytes" << endl;

    
}

int main() {
    part1();
    part2();
    return 0;
}
