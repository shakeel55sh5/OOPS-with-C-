#include <iostream>
#include <string>
using namespace std;
// Function to get string input from the user
string getStringInput() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);
    return inputString;
}
// Function to calculate the length of a string
int calculateStringLength(const string& str) {
    return str.length();
}
int main() {
    // Get string input from the user
    string inputString = getStringInput();
    // Calculate and display the length of the string
    int length = calculateStringLength(inputString);
    cout << "Length of the string: " << length << endl;
    return 0;
}








#include <iostream>
#include <string>
using namespace std;
int main() {
    string str1, str2;
    // Get input from the user
    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string: ";
    getline(cin, str2);
    // Concatenate the strings
    string concatenatedString = str1 + str2;
    // Find the size of the concatenated string
    int size = concatenatedString.size();
    // Display the result
    cout << "Concatenated string: " << concatenatedString << endl;
    cout << "Size of concatenated string: " << size << endl;
    return 0;
}










#include <iostream>
#include <string>
using namespace std;
int main() {
  string str1, str2;
  cout << "Enter the first string: ";
  getline(cin, str1);
  cout << "Enter the second string: ";
  getline(cin, str2);
  if (str1 == str2) {
    cout << "Both strings are equal." << endl;
  } else {
    // Swap the contents of the strings
    string temp = str1;
    str1 = str2;
    str2 = temp;
    cout << "Strings after swapping:" << endl;
    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl;
  }
  return 0;
}








#include <iostream>
#include <string>
using namespace std;
int main() {
  string inputString;
  cout << "Enter a string: ";
  getline(cin, inputString);
  // Create a character array with size of the string + 1 (for null terminator)
  char charArray[inputString.length() + 1]; 
  // Copy the string to the character array
  for (int i = 0; i < inputString.length(); i++) {
    charArray[i] = inputString[i];
  }
  // Add null terminator to the end of the character array
  charArray[inputString.length()] = '\0'; 
  cout << "The string in character array: " << charArray << endl;
  return 0;
}