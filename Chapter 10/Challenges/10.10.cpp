#include <iostream>
#include <string>

using namespace std;

string replaceSubstring(const string& string1, const string& string2, const string& string3) {
    string result = string1;
    size_t pos = 0;

    while ((pos = result.find(string2, pos)) != string::npos) {
        result.replace(pos, string2.length(), string3);
        pos += string3.length();
    }

    return result;
}

int main() {
    string string1 = "the dog jumped over the fence";
    string string2 = "the";
    string string3 = "that";

    string replacedString = replaceSubstring(string1, string2, string3);

    cout << "Replaced string: " << replacedString << endl;

    return 0;
}