#include <iostream> // Preprocessor directive that includes input/output stream
using namespace std; // Using the standard namespace

int main() // Main function of the program that turns a letter into its uppercase or lowercase counterpart
{
    char letter; // Letter to be converted

    cout << "Enter a letter: " << endl; // Prompts user to enter a letter
    cin >> letter; // Stores letter to be converted

    if (letter >= 'A' && letter <= 'Z') // Checks if letter is uppercase
    {
        char uppercase = letter + 32; // Converts letter to lowercase
        cout << "The lowercase of " << letter << " is " << uppercase << "." << endl; // Outputs lowercase letter
    }
    else if (letter >= 'a' && letter <= 'z') // Checks if letter is lowercase
    {
        char lowercase = letter - 32; // Converts letter to uppercase
        cout << "The uppercase of " << letter << " is " << lowercase << "." << endl; // Outputs uppercase letter
    }
    else // Executes if letter is not a letter
    {
        cout << letter << " is not a letter!" << endl; // Outputs error message if letter is not a letter
    }

    return 0; // Returns 0 to end program
}
