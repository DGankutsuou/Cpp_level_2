#include <iostream>
#include "inputslib.h"
using namespace std;
using namespace input;

int main()
{
    cout << "Hello World!\n";
    cout << input::read_number("Enter a number: ") << endl;
    cout << read_number("Enter another number: ") << endl;
    return (0);
}
