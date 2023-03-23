#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string word;
    cout << "Enter word: ";
    cin >> word;

    const char *char_string = word.c_str();

    // for (long unsigned int i = 0; i < word.length(); i++)
    for (size_t i = 0; i < word.length(); i++)
    {
        cout << *(char_string + i) << endl;
    }


    return 0;
}