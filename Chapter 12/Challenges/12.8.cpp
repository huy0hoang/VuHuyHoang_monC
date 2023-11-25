#include <iostream>
#include <fstream>

using namespace std;

void arrayToFile(const string& filename, int* arr, int size) {
    ofstream file(filename, ios::binary);
    if (!file) {
        cout << "Error opening file." << endl;
        return;
    }

    file.write(reinterpret_cast<char*>(arr), size * sizeof(int));

    file.close();
}

void fileToArray(const string& filename, int* arr, int size) {
    ifstream file(filename, ios::binary);
    if (!file) {
        cout << "Error opening file." << endl;
        return;
    }

    file.read(reinterpret_cast<char*>(arr), size * sizeof(int));

    file.close();
}

void displayArray(const int* arr, int size, int linesPerPage) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";

        if ((i + 1) % linesPerPage == 0) {
            cout << endl << "Press Enter to continue...";
            cin.get();
        }
    }
    cout << endl;
}

int main() {
    const int size = 100;
    int arr[size];

    for (int i = 0; i < size; i++) {
        arr[i] = i9.File Encryption Filter :

        ```python
            def encrypt_file(input_file, output_file) :
            with open(input_file, 'r') as file :
        data = file.read()

            encrypted_data = ""
            for char in data :
        encrypted_char = chr(ord(char) + 10)
            encrypted_data += encrypted_char

            with open(output_file, 'w') as file :
        file.write(encrypted_data)

            print("File encrypted and saved to", output_file)

            def main() :
            input_file = input("Enter the name of the input file: ")
            output_file = input("Enter the name of the output file: ")

            encrypt_file(input_file, output_file)

            if __name__ == "__main__":
        main()