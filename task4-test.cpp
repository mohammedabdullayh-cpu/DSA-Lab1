#include<iostream>
#include<string>
#include "task4-Implementation.cpp"

int main() {
    std::string text = "Muhammad Abdullah";

    std::cout << "Case 1: " << find_pattern(text, "Muh") << std::endl; 
    std::cout << "Case 2: "       << find_pattern(text, "lah") << std::endl;
    std::cout << "Case 3: "<< find_pattern(text, "abc")   << std::endl; 
    std::cout << "Case 4: "     << find_pattern(text, "")      << std::endl; 
    return 0;
}