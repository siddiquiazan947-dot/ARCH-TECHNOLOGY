#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); 
    char choice;

    do {
        int dice1 = (rand() % 6) + 1;
        int dice2 = (rand() % 6) + 1;

        std::cout << "You rolled a " << dice1 << " and a " << dice2 << std::endl;
        std::cout << "Total: " << dice1 + dice2 << std::endl;

        do {
            std::cout << "Do you want to roll again? (y/n): ";
            std::cin >> choice;
        } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
