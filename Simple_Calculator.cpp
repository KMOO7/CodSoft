#include <iostream>
using namespace std;
int main()
{
    int operation;
    int num1, num2;
    
    do
    {
        cout << "\nMenu for Arithmeitc Operators \nPlease select the arithmetic operation  \n1. For Addition \n2. For Subtraction \n3. For Multiplication \n4. For Divsion \n5. Exit \n";
        cout << "Enter your choice ";
        cin >> operation;

        if (operation < 1 || operation > 5)
        {
            cout << "Error!! Invalid Choice please select again\n";
            continue;
        }

        if (operation == 5)
        {
            cout << "Successfully exited from the software";
            break;
        }

        cout << "Enter the first number ";
        cin >> num1;
        cout << "Enter the second number ";
        cin >> num2;

        if (operation == 1)
        {
            printf("Sum of %d and %d is:%d \n", num1, num2, num1 + num2);
        }

        else if (operation == 2)
        {
            printf("Difference of %d and %d is:%d \n", num1, num2, num1 - num2);
        }

        else if (operation == 3)
        {
            printf("Product of %d and %d is:%d \n", num1, num2, num1 * num2);
        }

        else
        {
            printf("Divisor of %d after dividing with %d is:%d \n", num1, num2, num1 / num2);
        }

    } while (true);
    return 0;
}