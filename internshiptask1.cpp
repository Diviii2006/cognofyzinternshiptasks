#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    // Declare a string variable to hold the user's input
    std::string input;

    // Prompt the user for input
    std::cout << "Enter a string: ";
    
    // Get the entire line of input from the user
    std::getline(std::cin, input);

    // Reverse the string using the reverse function from the algorithm library
    std::reverse(input.begin(), input.end());

    // Display the reversed string
    std::cout << "Reversed string: " << input << std::endl;

    return 0;
}

