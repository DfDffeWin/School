#include<string>
#include <unordered_map>

bool scramble(const std::string& str1, const std::string& str2) {
    std::unordered_map<char, int> charCount;

    // Count occurrences of each character in str1
    for (char c : str1) {
        charCount[c]++;
    }

    // Check if there are enough occurrences of each character in str2
    for (char c : str2) {
        if (charCount[c] == 0) {
            return false;
        }
        charCount[c]--;
    }

    return true;
}