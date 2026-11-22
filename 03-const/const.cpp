#include <iostream>

int main() {
    const double PI = 3.14159; // Declare a constant variable for Pi
    const int radius = 5; // Declare a constant variable for the radius
    const double circumference = 2 * PI * radius; // Calculate the circumference using the constant variables
    std::cout << "The circumference of a circle with radius " << radius << " is: " << circumference << std::endl; // Output the result
    std::cout << "The area of a circle with radius " << radius << " is: " << (PI * radius * radius) << std::endl; // Output the area
    return 0;
}