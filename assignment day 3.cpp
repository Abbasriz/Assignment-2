#include <iostream>
#include <string>

// Function to reverse a string in-place
void reverseString(std::string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        std::swap(str[left], str[right]);
        left++;
        right--;
    }
}

int main() {
    std::string input;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    // Reversing the input string using the reverseString function
    reverseString(input);

    std::cout << "Reversed string: " << input << std::endl;

    return 0;
}
