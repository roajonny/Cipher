/* A cipher program - to practice with strings and manipulations using std::string functions
 */

#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string alphabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
    string key{ "lkjhgfdsapoiuytrewqmnbvcxzLKJHGFDSAMNBVCXZPOIUYTREWQ" };
    string input;
    string decrypt;

    cout << "Enter your secret message: ";
    getline(cin, input);

    for(size_t i{ 0 }; i < input.size(); i++) {
        int index = alphabet.find(input.at(i));
        if(isspace(input.at(i))) {
            cout << " ";
        } else if(index == -1) {
            cout << input.at(i);
        } else {
            input.at(i) = key.at(index);
        }
    }

    cout << "\nEncrypting message..." << endl;
    cout << "\nEncrypted message: ";

    cout << input << endl;
    decrypt = input;

    cout << "\nDecrypting message...\n" << endl;
    cout << "Decrypted message: ";

    for(size_t i{ 0 }; i < decrypt.size(); i++) {
        int elem = key.find(decrypt.at(i));
        if(elem == -1) {
            ;
        } else {
            decrypt.at(i) = alphabet.at(elem);
        }
    }

    cout << decrypt << "\n" << endl;

    return 0;
}