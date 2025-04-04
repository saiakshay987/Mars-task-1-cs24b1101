#include <iostream>
#include <unordered_map>
#include <sstream>
using namespace std;

// Morse code dictionary
unordered_map<string, char> morseToChar = {
    {".-", 'A'},    {"-...", 'B'},  {"-.-.", 'C'},  {"-..", 'D'},
    {".", 'E'},    {"..-.", 'F'},  {"--.", 'G'},   {"....", 'H'},
    {"..", 'I'},   {".---", 'J'},  {"-.-", 'K'},   {".-..", 'L'},
    {"--", 'M'},   {"-.", 'N'},    {"---", 'O'},   {".--.", 'P'},
    {"--.-", 'Q'}, {".-.", 'R'},   {"...", 'S'},   {"-", 'T'},
    {"..-", 'U'},  {"...-", 'V'},  {".--", 'W'},   {"-..-", 'X'},
    {"-.--", 'Y'}, {"--..", 'Z'},
    {"-----", '0'},{".----", '1'}, {"..---", '2'}, {"...--", '3'},
    {"....-", '4'},{".....", '5'}, {"-....", '6'}, {"--...", '7'},
    {"---..", '8'},{"----.", '9'},
    {"/", ' '} // Slash represents a space between words
};

// Function to decode Morse code
string decodeMorse(const string& morseCode) {
    stringstream ss(morseCode);
    string morseLetter, decodedMessage;
    
    while (ss >> morseLetter) {
        if (morseToChar.find(morseLetter) != morseToChar.end()) {
            decodedMessage += morseToChar[morseLetter];
        } else {
            decodedMessage += '?'; // Unknown Morse code symbol
        }
    }
    
    return decodedMessage;
}

int main() {
    string morseMessage;
    cout << "Enter Morse code (separate letters by spaces and words by '/'): ";
    getline(cin, morseMessage);
    
    string decodedText = decodeMorse(morseMessage);
    cout << "Decoded message: " << decodedText << endl;
    
    return 0;
}
