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
//     int arr[5] = {0, 1, 2, 3, 4};
//     int reversedArr[5];
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//         reversedArr[i] = arr[4 - i];
//     }
//     cout << "" << endl;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << reversedArr[i] << " ";
//     }

//     return 0;
// }
