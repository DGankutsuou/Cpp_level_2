#pragma once
#include <iostream>
using namespace std;

namespace input
{
    int read_number(string message)
    {
        int number;

        number = 0;
        cout << message;
        cin >> number;
        return (number);
    }

    int read_positive_number(string message)
    {
        int number;

        number = 0;
        do
        {
            cout << message;
            cin >> number;
        } while (number <= 0);
        return (number);
    }

    int read_number_in_range(int from, int to)
    {
        int number;

        do
        {
            cout << "Enter a number from " << from << " to " << to << ": ";
            cin >> number;
        } while (number < from || number > to);

        return (number);
    }

    void    read_array(int array[100], int& array_length)
    {
        array_length = read_positive_number("Enter the number of the array length: ");
        for (int counter = 0; counter < array_length; counter++)
        {
            cout << "Element[" << counter + 1 << "] = ";
            cin >> array[counter];
        }
    }
}
