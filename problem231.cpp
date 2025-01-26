#include <iostream>
#include <cmath>
using namespace std;

bool powerOfTwo(int n)
{
    if (n = 0)
        return false;
    float x = log2(n);

    if (pow(2, x) == n)
        return true;
    else
        return false;
}

int main()
{
    int num = 6;
    cout << powerOfTwo(num) << endl;
    return 0;
}