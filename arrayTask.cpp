// #include <iostream>
// using namespace std;

// int main()
// {
//     int size;
//     cout << "Enter size: ";
//     cin >> size;

//     if (size <= 0)
//     {
//         cout << "Invalid size!" << endl;
//         return 1;
//     }

//     int *array = new int[size];

//     cout << "Enter the elements of the array:" << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cin >> array[i];
//     }

//     cout << "Array Elements: ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << array[i] << " ";
//     }
//     cout << endl;

//     // int largest = array[0];
//     // int smallest = array[0];

//     // for (int i = 0; i < size; i++)
//     // {
//     //     if (array[i] > largest)
//     //     {
//     //         largest = array[i];
//     //     }
//     //     if (array[i] < smallest)
//     //     {
//     //         smallest = array[i];
//     //     }
//     // }
//     int *array2 = new int[size];

//     cout << "New Array: ";
//     for (int i = 0; i < size; i++)
//     {
//         if (i == 0)
//         {
//             array2[i] = array[i];
//         }
//         else
//         {
//             array2[i] = array[i] + array[i - 1];
//         }

//         cout << array2[i] << " ";
//     }
//     cout << endl;

//     // cout << "Largest Number: " << largest << endl;
//     // cout << "Smallest Number: " << smallest << endl;

//     for (int i = 0; i < size; i++)
//     {
//         if (array[i] % 2 == 0)
//         {

//             array[i] = array[i] * array[i];
//             cout << array[i];
//         }
//         else

//         {

//             array[i] = array[i] * array[i] * array[i];
//             cout << array[i];
//         }
//     }

//     delete[] array;
//     delete[] array2;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int array[5] = {1, 2, 3, 4, 5};

//     for (int i = 0; i < 5; i++)
//     {
//         if (array[i] % 2 == 0)
//         {
//             array[i] = array[i] * array[i];
//         }
//         else
//         {
//             array[i] = array[i] * array[i] * array[i];
//         }
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         cout << array[i] << " ";
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int array[6] = {1, 2, 3, 4, 5, 6};

    int size = sizeof(array) / sizeof(array[0]); 
    int half = size / 2;                         

    for (int i = 0; i < half; i++)
    {
        array[i] = array[i] * array[i];
    }

    for (int i = half; i < size; i++)
    {
        array[i] = array[i] * array[i] * array[i];
    }


    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}
