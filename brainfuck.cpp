// #include <iostream>
// #include <string>

// std::string text_to_brainfuck(const std::string& text) {
//     std::string bf_code;
//     int prev_ascii = 0;  // Initialize the previous ASCII value to 0

//     for (char c : text) {
//         int ascii_val = static_cast<int>(c);  // Get ASCII value of the character
//         int diff = ascii_val - prev_ascii;    // Find the difference from the last character

//         if (diff > 0) {
//             bf_code += std::string(diff, '+');  // Increment memory cell value
//         } else if (diff < 0) {
//             bf_code += std::string(-diff, '-'); // Decrement memory cell value
//         }

//         bf_code += ".";  // Print the current character
//         prev_ascii = ascii_val;  // Update the previous ASCII value
//     }

//     return bf_code;
// }

// int main() {
//     std::string text;

//     // Input string
//     std::cout << "Enter a string to convert to Brainfuck: ";
//     std::getline(std::cin, text);

//     // Generate Brainfuck code
//     std::string brainfuck_code = text_to_brainfuck(text);

//     // Output the result
//     std::cout << "Generated Brainfuck Code:\n" << brainfuck_code << std::endl;

//     return 0;
// }
// #include <iostream>
// #include <string>

// std::string convertToBrainfuck(const std::string& text) {
//     std::string brainfuckCode;
//     int currentCellValue = 0;       // Memory cell value starts at 0

//     // Explicitly initialize the pointer at the first cell
//     brainfuckCode += ">>>>>>"; // Add some initial '>' to avoid out-of-range errors.

//     for (char character : text) {
//         int asciiValue = static_cast<int>(character); // Get ASCII value
//         int difference = asciiValue - currentCellValue;

//         // Adjust memory cell value
//         if (difference > 0) {
//             brainfuckCode += std::string(difference, '+'); // Increment cell value
//         } else if (difference < 0) {
//             brainfuckCode += std::string(-difference, '-'); // Decrement cell value
//         }

//         brainfuckCode += "."; // Print the current cell value as a character
//         currentCellValue = asciiValue; // Update current cell value
//     }

//     return brainfuckCode;
// }

// int main() {
//     std::string inputText;

//     std::cout << "Enter the text to convert into Brainfuck: ";
//     std::getline(std::cin, inputText);

//     std::string brainfuckCode = convertToBrainfuck(inputText);

//     std::cout << "Generated Brainfuck code:\n" << brainfuckCode << std::endl;

//     return 0;

// }
#include <iostream>
#include <string>

std::string optimizedBrainfuck(const std::string& text) {
    std::string brainfuckCode;
    brainfuckCode += ">>>"; // Position pointer safely at the start

    for (char character : text) {
        int asciiValue = static_cast<int>(character);

        // Create loop-based logic for ASCII value generation
        int base = asciiValue / 10;     // Approximation for loop multiplier
        int remainder = asciiValue % 10;

        brainfuckCode += std::string(base, '+');       // Create base multiplier
        brainfuckCode += "[>++++++++++<-]";           // Multiply by 10
        brainfuckCode += std::string(remainder, '+'); // Add remainder
        brainfuckCode += ".";                         // Output character
        brainfuckCode += ">";                         // Move to next cell
    }

    return brainfuckCode;
}

int main() {
    std::string inputText;

    std::cout << "Enter text to convert to optimized Brainfuck: ";
    std::getline(std::cin, inputText);

    std::string brainfuckCode = optimizedBrainfuck(inputText);

    std::cout << "Generated Brainfuck code:\n" << brainfuckCode << std::endl;

    return 0;
}
