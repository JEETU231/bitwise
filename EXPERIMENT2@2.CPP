#include <iostream>

// Function to set a bit at a specified position
void setBit(int &num, int pos) {
    num |= (1 << pos);
}

int main() {
    int number;
    int position;

    // Prompt user for input
    std::cout << "Enter a number: ";
    std::cin >> number;

    std::cout << "Enter the bit position to set (0-based index): ";
    std::cin >> position;

    std::cout << "Before setting bit: " << number << std::endl;

    // Setting the bit
    setBit(number, position);

    std::cout << "After setting bit: " << number << std::endl;

    return 0;
}

