#include <iostream>
//Typedef is a reserved keyword in C++ used to create a new name (alias) for an existing type. It can be used to simplify complex type definitions and improve code readability.
// In C++11 and later, the 'using' keyword can also be used to create type aliases, which is often preferred over 'typedef' due to its clearer syntax.
//typealias is a feature in C++ that allows you to create a new name for an existing type. It can be used to improve code readability and maintainability by providing more descriptive names for types, especially when dealing with complex or long type definitions.

// typedef std::string text_t; // Using typedef to create an alias for std::string
// typedef int number_t; // Using typedef to create an alias for int

using text_t = std::string; // Using 'using' to create an alias for std::string
using number_t = int; // Using 'using' to create an alias for int

int main () {
    text_t myText = "Hello, World!"; // Using the alias to declare a variable of type std::string
    std::cout << myText << std::endl; // Output: Hello, World!
    number_t myNumber = 42; // Using the alias to declare a variable of type int
    std::cout << myNumber << std::endl; // Output: 42
}


