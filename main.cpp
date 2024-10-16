#include <iostream>
using namespace std;

int main() {

    while(true) {
        std::cout << "1. Add Project\n2. List Projects\n3. Add Task to Project\n4. Exit\n"; // Fixed std:cout to std::cout
        int choice;
        std::cin >> choice;

        if (choice == 1) {
            std::string projectName;
            std::cout << "Enter project name: ";
            std::cin >> projectName;
            std::cout << projectName << std::endl;
        } else if (choice == 2) {
            std::cout << "Temp list of projects" << std::endl;
        } else if (choice == 3) {
            std::string projectName;
            std::cout << "Enter project name: ";
            std::cin >> projectName;
            std::string taskName;
            std::cout << "Enter task name: ";
            std::cin >> taskName;
            std::cout << "Creating task in project" << std::endl;
            std::cout << taskName + " in " + projectName << std::endl;
        } else if (choice == 4) {
            break;
        } else {
            std::cout << "Invalid choice. Please select a valid option.\n";
        }
    }
    return 0;
}