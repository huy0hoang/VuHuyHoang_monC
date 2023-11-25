#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

double calculateAverageWordsPerSentence(const string& filepath) {
    ifstream file(filepath);
    string line;
    int totalSentences = 0;
    int totalWords = 0;

    while (getline(file, line)) {
        if (!line.empty()) {
            totalSentences++;

            // Split the line into words
            stringstream ss(line);
            vector<string> words;
            string word;
            while (ss >> word) {
                words.push_back(word);
            }

            totalWords += words.size();
        }
    }

    if (totalSentences == 0) {
        return 0.0;
    }

    return static_cast<double>(totalWords) / totalSentences;
}

int main() {
    string filepath = "text.txt";
    double averageWordsPerSentence = calculateAverageWordsPerSentence(filepath);
    cout << "Average words per sentence: " << averageWordsPerSentence << endl;

    return 0;
}