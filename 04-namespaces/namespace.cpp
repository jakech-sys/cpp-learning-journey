#include <iostream>

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main() {
    // Namespaces are used to organize code and prevent naming conflicts. In this example, we have two namespaces, 'first' and 'second', each containing a variable 'x'. We can access the variables using the scope resolution operator '::'.

    // int x = 0;

    // using namespace first; // Use the 'first' namespace
    // std::cout << x << std::endl; // Output the value of 'x'
    using namespace second; // Use the 'second' namespace
    std::cout << x << std::endl; // Output the value of 'x'

    // std::cout << first::x;
    // std::cout << x << std::endl; // Output the value of the local variable 'x'

    return 0;
}