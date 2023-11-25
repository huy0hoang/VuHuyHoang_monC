#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct InventoryItem {
    string description;
    int quantity;
    double wholesaleCost;
    double retailCost;
    string dateAdded;
};

void addRecord(ofstream& outFile) {
    InventoryItem item;

    cout << "Enter item description: ";
    getline(cin, item.description);

    cout << "Enter quantity on hand: ";
    cin >> item.quantity;

    cout << "Enter wholesale cost: ";
    cin >> item.wholesaleCost;

    cout << "Enter retail cost: ";
    cin >> item.retailCost;

    cin.ignore(); // Ignore the newline character left in the input buffer

    cout << "Enter date added to inventory: ";
    getline(cin, item.dateAdded);

    outFile << item.description << "," << item.quantity << "," << item.wholesaleCost << "," << item.retailCost << "," << item.dateAdded << endl;

    cout << "Record added to the file." << endl;
}

void displayRecords(ifstream& inFile) {
    InventoryItem item;
    string line;

    while (getline(inFile, line)) {
        size_t pos = line.find(",");
        item.description = line.substr(0, pos);
        line.erase(0, pos + 1);

        pos = line.find(",");
        item.quantity = stoi(line.substr(0, pos));
        line.erase(0, pos + 1);

        pos = line.find(",");
        item.wholesaleCost = stod(line.substr(0, pos));
        line.erase(0, pos + 1);

        pos = line.find(",");
        item.retailCost = stod(line.substr(0, pos));
        line.erase(0, pos + 1);

        item.dateAdded = line;

        cout << "Description: " << item.description << endl;
        cout << "Quantity on Hand: " << item.quantity << endl;
        cout << "Wholesale Cost: " << item.wholesaleCost << endl;
        cout << "Retail Cost: " << item.retailCost << endl;
        cout << "Date Added: " << item.dateAdded << endl;
        cout << endl;
    }
}

void changeRecord(fstream& file) {
    string searchDescription;
    cout << "Enter the description of the item to change: ";
    cin.ignore();
    getline(cin, searchDescription);

    InventoryItem item;
    bool found = false;

    while (!file.eof() && !found) {
        size_t pos;
        string line;

        getline(file, line);
        pos = line.find(",");
        item.description = line.substr(0, pos);

        if (item.description == searchDescription) {
            found = true;

            cout << "Enter new quantity on hand: ";
            cin >> item.quantity;

            cout << "Enter new wholesale cost: ";
            cin >> item.wholesaleCost;

            cout << "Enter new retail cost: ";
            cin >> item.retailCost;

            cin.ignore(); // Ignore the newline character left in the input buffer

            cout << "Enter new date added to inventory: ";
            getline(cin, item.dateAdded);

            file.seekp(-(static_cast<int>(line.length()) + 1), ios::cur); // Move the file pointer back to the beginning of the line
            file << item.description << "," << item.quantity << "," << item.wholesaleCost << "," << item.retailCost << "," << item.dateAdded;
            cout << "Record updated." << endl;
        }
    }

    if (!found) {
        cout << "Item not found in the inventory." << endl;
    }
}

int main() {
    ofstream outFile("inventory.txt", ios::app); // Open the file in append mode for adding records
    ifstream inFile("inventory.txt");
    fstream file("inventory.txt", ios::in | ios::out);

    if (!outFile || !inFile || !file) {
        cout << "Error opening file." << endl;
        return 1;
    }

    int choice;

    do {
        cout << "*** Inventory Program Menu ***" << endl;
        cout << "1. Add new record" << endl;
        cout << "2. Display records" << endl;
        cout << "3. Change record" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cin.ignore(); // Ignore the newline character left in the input buffer
            addRecord(outFile);
            break;
        case 2:
            displayRecords(inFile);
            break;
        case 3:
            changeRecord(file);
            break;
        case 4:
            cout << "Exiting program." << Here's a solution for the Inventory Program you described. The program uses a structure to store inventory data and provides a menu for adding new records, displaying existing records, and changing records in a file.

                ```python
import datetime

                class InventoryItem :
                def __init__(self, description, quantity, wholesale_cost, retail_cost, date_added) :
                self.description = description
                self.quantity = quantity
                self.wholesale_cost = wholesale_cost
                self.retail_cost = retail_cost
                self.date_added = date_added

                def add_record() :
                description = input("Enter item description: ")
                quantity = int(input("Enter quantity on hand: "))
                wholesale_cost = float(input("Enter wholesale cost: "))
                retail_cost = float(input("Enter retail cost: "))
                date_added = input("Enter date added to inventory (YYYY-MM-DD): ")
                try :
                datetime.datetime.strptime(date_added, "%Y-%m-%d")
                except ValueError :
            print("Invalid date format. Please use the format YYYY-MM-DD.")
                return

                with open("inventory.txt", "a") as file :
            file.write(f"{description},{quantity},{wholesale_cost},{retail_cost},{date_added}\n")
                print("Record added to the file.")

                def display_records() :
                with open("inventory.txt", "r") as file :
            for line in file :
            description, quantity, wholesale_cost, retail_cost, date_added = line.strip().split(",")
                print("Description:", description)
                print("Quantity on Hand:", quantity)
                print("Wholesale Cost:", wholesale_cost)
                print("Retail Cost:", retail_cost)
                print("Date Added:", date_added)
                print()

                def change_record() :
                search_description = input("Enter the description of the item to change: ")
                new_quantity = int(input("Enter new quantity on hand: "))
                new_wholesale_cost = float(input("Enter new wholesale cost: "))
                new_retail_cost = float(input("Enter new retail cost: "))
                new_date_added = input("Enter new date added to inventory (YYYY-MM-DD): ")
                try :
                datetime.datetime.strptime(new_date_added, "%Y-%m-%d")
                except ValueError :
            print("Invalid date format. Please use the format YYYY-MM-DD.")
                return

                with open("inventory.txt", "r") as file :
            lines = file.readlines()

                item_found = False

                with open("inventory.txt", "w") as file :
            for line in lines :
            description, quantity, wholesale_cost, retail_cost, date_added = line.strip().split(",")
                if description == search_description :
                    file.write(f"{search_description},{new_quantity},{new_wholesale_cost},{new_retail_cost},{new_date_added}\n")
                    print("Record updated.")
                    item_found = True
                else:
            file.write(line)

                if not item_found :
                    print("Item not found in the inventory.")

                    def main() :
                    while True :
                        print("*** Inventory Program Menu ***")
                        print("1. Add new record")
                        print("2. Display records")
                        print("3. Change record")
                        print("4. Exit")
                        choice = input("Enter your choice: ")

                        if choice == "1":
            add_record()
                elif choice == "2" :
                display_records()
                elif choice == "3" :
                change_record()
                elif choice == "4" :
                print("Exiting program.")
                break
                        else:
            print("Invalid choice. Please try again.")

                if __name__ == "__main__" :
                    main()