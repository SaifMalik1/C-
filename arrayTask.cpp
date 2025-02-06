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

// #include <iostream>
// using namespace std;

// int main()
// {
//     int array[6] = {1, 2, 3, 4, 5, 6};

//     int size = sizeof(array) / sizeof(array[0]);
//     int half = size / 2;

//     for (int i = 0; i < half; i++)
//     {
//         array[i] = array[i] * array[i];
//     }

//     for (int i = half; i < size; i++)
//     {
//         array[i] = array[i] * array[i] * array[i];
//     }

//     for (int i = 0; i < size; i++)
//     {
//         cout << array[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {

//     int array[6] = {1, 2, 3, 4, 5, 6};

//     int size = sizeof(array) / sizeof(array[0]);

//     int half = array[2];

//     cout << half << endl;

//     int largest = array[0];
//     int smallest = array[0];

//     int largest2 = array[2];
//     int smallest2 = array[2];

//     for (int i = 0; i < array[2]; i++)
//     {
//         if (array[i] > largest)
//         {

//             largest = array[i];
//         }
//         if (array[i] < smallest)
//         {

//             smallest = array[i];
//         }
//     }

//     for (int i = array[2]; i < size; i++)
//     {

//         if (array[2] > largest2)
//         {

//             largest2 = array[i];
//         }
//         if (array[i] < smallest2)
//         {

//             smallest2 = array[i];
//         }
//     }

//     cout << "largest Number: " << largest << endl;
//     cout << "smallest Number: " << smallest << endl;

//     cout << "largest2 Number: " << largest2 << endl;
//     cout << "smallest2 Number: " << smallest2;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int array[7] = {2, 4, 5, 5, 3, 8, 6};
//     int a = 10;

//     cout << "Pair" << a;

//     for (int i = 0; i < 7; i++)
//     {
//         for (int j = i + 1; j < 7; j++)
//         {
//             if (array[i] + array[j] == a)
//             {
//                 cout << array[i] << " " << array[j] << endl;
//             }
//         }
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// bool findmatch(int array[], int a)
// {
//     for (int i = 0; i < 6; i++)
//     {
//         if (array[i] == a)
//         {
//             cout << "Match Element: " << array[i];
//             return true;
//         }
//     }
//     return false;
// }

// int main()
// {
//     int array[] = {2, 5, 3, 6, 7, 1};
//     int a = 3;

//     findmatch(array, a);

//         return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int array[] = {2, 4, 6, 2, 4, 3, 1};
//     int a = 10;

//     for (int i = 0; i < 7; i++)
//     {
//         for (int j = i + 1; j < 7; j++)
//         {

//             if (array[i] + array[j] == a)
//             {

//                 cout << array[i] << "," << array[j] << endl;
//             }
//         }
//     }

//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main()
// {
//     int arr[] = {2, 3, 5, 3, 7, 9, 5, 3, 4};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     cout << "Duplicate elements and their counts:\n";

//     for (int i = 0; i < size; i++)
//     {
//         int count = 1;
//         if (arr[i] != -1)
//         {
//             for (int j = i + 1; j < size; j++)
//             {
//                 if (arr[i] == arr[j])
//                 {
//                     count++;
//                     arr[j] = -1;
//                 }
//             }
//             if (count > 1)
//             {
//                 cout << arr[i] << " appears " << count << " times\n";
//             }
//         }
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int array[2][3] = {{1, 2, 3}, {4, 5, 6}};

//     int sum = 0;

//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             sum += array[i][j];
//         }
//         cout << endl;
//     }

//     cout << sum;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int size;
//     cout << "Enter Array size: ";
//     cin >> size;

//     int array[size];
//     cout << "Enter Array Elements: ";

//     for (int i = 0; i < size; i++)
//     {
//         cin >> array[i];
//     }

//     int target = 40;
//     int low = 0, high = size - 1;
//     int result = -1;

//     while (low <= high)
//     {
//         int mid = (low + high) / 2;

//         if (array[mid] == target)
//         {
//             result = mid;
//             break;
//         }
//         else if (array[mid] < target)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }

//     if (result != -1)
//     {
//         cout << " Found at index: " << result << "this value " << array[result] << endl;
//     }
//     else
//     {
//         cout << "Element not found" << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int size = 5;
//     int array[size] = {10, 20, 30, 40, 50};

//     int low = 0;
//     int high = size - 1;
//     int target = 50;
//     int result = -1;

//     while (low <= high)
//     {
//         int mid = (low + high) / 2;

//         if (array[mid] == target)
//         {
//             result = mid;
//             break;
//         }
//         else if (array[mid] < target)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }

//     if (result != -1)
//     {
//         cout << "Element is found at Index " << result << endl;
//     }
//     else
//     {
//         cout << "Element not found" << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int binarySearch(int array[], int low, int high, int target)
{
    if (low <= high)
    {
        int mid = (low + high) / 2;

        if (array[mid] == target)
        {
            return mid;
        }
        if (target < array[mid])
        {
            return binarySearch(array, low, mid - 1, target);
        }
        return binarySearch(array, mid + 1, high, target);
    }
    return -1;
}

int main()
{
    int size;
    cout << "Enter the array size : ";
    cin >> size;
    int array[size];
    cout << "Enter the array Element according to size :";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int target = 40;
    int low = 0;
    int high = size - 1;

    int result = binarySearch(array, low, high, target);

    if (result == -1)
    {
        cout << "Element is not found" << endl;
    }
    else
    {
        cout << "Element is found at index: " << result << endl;
    }

    return 0;
}
