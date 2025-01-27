#include <iostream>
using namespace std;

int main()
{
    int array[2] = {1, 2}; 
    int sum = 0;          

    for (int i = 0; i < 2; i++)
    {
        sum += array[i]; 
    }

    cout << "Sum of array elements: " << sum << endl;

    return 0;
}
