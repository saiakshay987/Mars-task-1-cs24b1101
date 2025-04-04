#include <iostream>
#include <string>
using namespace std;

// Function to decode the special Mars message
string decode(const string& input) {
    string result = "";

    // Loop through each character in the input
    for (int i = 0; i < input.length(); ++i) {
        char ch = toupper(input[i]); // Convert to uppercase if it's lowercase

        // Shift the character backwards by (i+1) positions
        char decoded = ch - (i + 1);

        // If it goes before 'A', wrap around to 'Z'
        if (decoded < 'A') {
            decoded += 26; // Wrap back into the alphabet
        }

        result += decoded; // Append decoded character to result
    }

    return result; // Return the final decoded string
}

int main() {
    string encodedMessage;
    cout << "Enter the encoded message: ";
    cin >> encodedMessage;

    string decodedMessage = decode(encodedMessage);
    cout << "Decoded message: " << decodedMessage << endl;

    return 0;
}
