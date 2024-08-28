/**
 * Author: omteja04
 * Created on: 24-08-2024 09:16:58
 * Description: BitMask
 **/

#include <iostream>

// Function to display the elements in the set
void displaySet(int set) {
    std::cout << "{ ";
    for (int bitNo = 0; bitNo < 32; bitNo++) {
        if (set & (1 << bitNo)) {
            std::cout << bitNo + 1 << " "; // Display the number corresponding to the set bit
        }
    }
    std::cout << "}" << std::endl;
    
}
// Function to add a number to the set
void addNo(int &set) {
    int newNum;
    std::cin >> newNum;
    // Add the number by setting the corresponding bit
    set |= (1 << (newNum - 1));
    std::cout << set << std::endl; // Print the updated set
}
// Function to remove a number from the set
void removeNo(int &set) {
    int newNum;
    std::cin >> newNum;
    // Remove the number by clearing the corresponding bit
    set &= ~(1 << (newNum - 1));
    std::cout << set << std::endl; // Print the updated set
}

int main() {
    int set;
    std::cin >> set; // Input the initial set represented as a bitmask
    displaySet(set); // Display the elements in the set
    // addNo(set);      // Add a new number to the set
    // removeNo(set);   // Remove a number from the set
}
