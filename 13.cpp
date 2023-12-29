#include <iostream>

using namespace std;

void swap(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}

void generatePermutations(char str[], int start, int end)
{
    if (start == end)
    {
        // If start equals end, a permutation is found
        cout << str << endl;
    }
    else
    {
        // Recursively generate permutations
        for (int i = start; i <= end; ++i)
        {
            // Swap characters at positions start and i
            swap(str[start], str[i]);
            // Recursively generate permutations for the remaining characters
            generatePermutations(str, start + 1, end);
            // Backtrack: restore the original order of characters
            swap(str[start], str[i]);
        }
    }
}

int main()
{
    string inputString;

    // Input the string
    cout << "Enter a string: ";
    cin >> inputString;

    // Convert string to a character array
    char charArray[inputString.size() + 1];
    strcpy(charArray, inputString.c_str());

    // Generate and print all permutations
    cout << "All permutations of the string:" << endl;
    generatePermutations(charArray, 0, inputString.size() - 1);

    return 0;
}
