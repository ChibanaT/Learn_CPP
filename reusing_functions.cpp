#include <iostream>

int getValueFromUser() // this function returns an integer value
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input; // return the value the user entered back to the caller
}

int main()
{
    int x { getValueFromUser() }; // first call to getValueFromUser()
    int y { getValueFromUser() }; // second call to getValueFromUser()

    std::cout << x << " + " << y << " = " << x + y <<'\n';

    return 0;
}