// Basic C++ Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int times(int a, int b) {
    return a * b;
}
int divide(int a, int b) {
    return a / b;
}

int main()
{
    int* a = new int();
    char* o = new char();
    int* b = new int();
    std::cout << "Calculation: ";
    std::cin >> *a;
    std::cin >> *o;
    std::cin >> *b;

    std::cout << "Identifying calculation..." << std::endl;

    if (*o == '+') {
        std::cout << "\n" << add(*a, *b);
    }
    else if (*o == '-') {
        std::cout << "\n" << subtract(*a, *b);
    }
    else if (*o == '*') {
        std::cout << "\n" << times(*a, *b);
    }
    else if (*o == '/') {
        std::cout << "\n" << times(*a, *b);
    }
    else {
        std::cout << "\nInvalid operator " << *o;
    }

    delete a;
    delete o;
    delete b;

    std::cout << "\nEnd of program." << std::endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
