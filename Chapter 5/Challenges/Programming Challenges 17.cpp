#include <iostream>

int main() {
    const int NUM_STORES = 5;
    int sales[NUM_STORES];

    // Get today's sales for each store
    for (int i = 0; i < NUM_STORES; i++) {
        std::cout << "Enter today's sales for store " << (i + 1) << ": ";
        std::cin >> sales[i];
    }

    // Display bar graph
    std::cout << "\nSALES BAR CHART\n";
    std::cout << "(Each * = $100)\n";
    for (int i = 0; i < NUM_STORES; i++) {
        std::cout << "Store " << (i + 1) << ": ";
        for (int j = 0; j < (sales[i] / 100); j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}