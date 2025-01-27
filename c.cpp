// #include <iostream>
// using namespace std;

// int addition(int a, int b)
// {
//     return a + b;
// }

// int subtraction(int a, int b)
// {
//     return a - b;
// }

// int multiplication(int a, int b)
// {
//     return a * b;
// }

// int division(int a, int b)
// {
//     return a / b;
// }

// int main()
// {

//     while (true)
//     {

//         cout << "1. Addition of two numbers" << endl;
//         cout << "2. Subtraction of two numbers" << endl;
//         cout << "3. Multiplication of two numbers" << endl;
//         cout << "4. Division of two numbers" << endl;
//         cout << "5. Exit" << endl;

//         int choice;
//         cout << "Enter your choice: ";
//         cin >> choice;
//         if (choice == 5)
//         {

//             cout << "Exit the program." << endl;
//             break;
//         }
//         int a, b;
//         cout << "Enter the first number: ";
//         cin >> a;
//         cout << "Enter the second number: ";
//         cin >> b;

//         if (choice == 1)
//         {
//             int result = addition(a, b);
//             cout << "The result of addition is: " << result << endl;
//         }
//         else if (choice == 2)
//         {
//             int result = subtraction(a, b);
//             cout << "The result of subtraction is: " << result << endl;
//         }
//         else if (choice == 3)
//         {
//             int result = multiplication(a, b);
//             cout << "The result of multiplication is: " << result << endl;
//         }
//         else if (choice == 4)
//         {
//             int result = division(a, b);
//         }
//         else
//         {
//             cout << "Invalid choice! Please enter a number between 1 and 5." << endl;
//         }
//     }
//     return 0;
// }

// String in c++//

// #include<iostream>
// #include<string>

// using namespace std;

// int main(){

// string s ="saif";
// s.append("ullah");
// cout<<s<<endl;

// cout<<s.length()<<endl;

// return 0 ;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
// int arr[5] = {0, 1, 2, 3, 4};
// int reversedArr[5];
// for (int i = 0; i < 5; i++)
// {
//     cout << arr[i] << " ";
//     reversedArr[i] = arr[4 - i];
// }
// cout << "" << endl;
// for (int i = 0; i < 5; i++)
// {
//     cout << reversedArr[i] << " ";
// }

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string arr[] = {"this", "is", "my", "home"};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     cout << "Size of the array: " << size << endl;

//     string reversedArr[4];
//     for (int i = 0; i < size; i++)
//     {
//         reversedArr[i] = arr[size - 1 - i];
//     }

//     cout << "Original Array: ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     cout << "Reversed Array: ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << reversedArr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string str;
//     string word = "";
//     string result = "";
//     cout << "Enter a string: ";
//     getline(cin, str);

//     for (int i = 0; i < str.length(); ++i)
//     {
//         char ch = str[i];
//         if (ch == ' ' || ch == '.')
//         {
//             for (int j = word.length() - 1; j >= 0; --j)
//             {
//                 result += word[j];
//             }
//             result += ch;
//             word = "";
//         }
//         else
//         {
//             word += ch;
//         }
//     }
//     cout << "Reversed string: " << result << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

// int inp;
// cin>>inp;
//     int arr[inp] = {1, 2, 3, 4};

//     for (int i = 0; i < 4; i++)
//     {
//         cout << arr[i];
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int size;
//     cout << "Enter the size of the array: ";
//     cin >> size;

//     int *arr = new int[size];

//     cout << "Enter " << size << " elements: ";
//     for (int i = 0; i < size; ++i)
//     {
//         cin >> arr[i];
//     }
//     cout << "You entered: ";
//     for (int i = 0; i < size; ++i)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int array[3] = {4, 2, 6};

//     for (int i = 0; i < 3; i++)
//     {

//         cout << array[i] * array[i] << " ";
//     }

//     return 0;
// }