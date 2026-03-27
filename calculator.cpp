#include <iostream>
#include <iomanip>  // For formatting

int main() {
    std::cout << "====================================\n";
    std::cout << "   Welcome to Day 1 of GitHub C++   \n";
    std::cout << "       Simple Calculator App        \n";
    std::cout << "====================================\n\n";

    double num1, num2;
    char operation;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << "\nResult: " << num1 << " " << operation << " " << num2 << " = ";

    switch (operation) {
        case '+':
            std::cout << (num1 + num2) << std::endl;
            break;
        case '-':
            std::cout << (num1 - num2) << std::endl;
            break;
        case '*':
            std::cout << (num1 * num2) << std::endl;
            break;
        case '/':
            if (num2 != 0)
                std::cout << std::fixed << std::setprecision(4) << (num1 / num2) << std::endl;
            else
                std::cout << "Error: Division by zero!" << std::endl;
            break;
        default:
            std::cout << "Invalid operator!" << std::endl;
    }

    std::cout << "\n🎉 Committed to GitHub on Day 1! Keep the streak going!\n";
    return 0;
}