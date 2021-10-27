#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>
using namespace std;

void it(vector<int> vect, int index)
{
    cout << vect.at(index);
    return it(vect, index + 1);
}

int main()
{
    try
    {
        vector<int> vect(5);
        int i = 2;
        generate(vect.begin(), vect.end(), [&i] {i *= 2; return i; });
        it(vect, 0);
    }
    catch (exception& exception)
    {
        cout << "\n" << "Done";
    }


    return 0;
}