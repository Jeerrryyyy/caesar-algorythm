#include <iostream>
#include <string.h>

#include "decode/decode.h"
#include "encode/encode.h"

using namespace std;

void log(string type, string message) {
    cout << "[" << type << "] " << message << endl;
}

void emptyLine() {
    cout << "" << endl;
}

int main() {
    int i;

    cout << "########## Caesar Encryption ##########" << endl;
    log("INFO", "Welcome. Choose your function.");
    log("INFO", "1 for encrypting | 2 for decrypting:");

    cin >> i;

    emptyLine();

    switch (i) {
        case 1: {
            string toEncrypt;

            log("INFO", "You chose 1 for encrypting a string.");
            log("INFO", "Please enter the string now:");

            getline(cin, toEncrypt);
            getline(cin, toEncrypt);

            if (toEncrypt.empty()) {
                emptyLine();
                log("INFO", "The string you entered was not valid!");
                log("INFO", "Program shuts down now!");
                return 0;
            }

            emptyLine();

            log("INFO", "Encrypting your string...");
            log("INFO", "Your encrypted string is...");
            emptyLine();
            log("INFO", encrypt(toEncrypt));
            emptyLine();

            log("INFO", "Program shuts down now!");
            break;
        }
        case 2: {
            string toDecrypt;

            log("INFO", "You chose 2 for decrypting a string.");
            log("INFO", "Please enter the string now:");

            getline(cin, toDecrypt);
            getline(cin, toDecrypt);

            if (toDecrypt.empty()) {
                emptyLine();
                log("INFO", "The string you entered was not valid!");
                log("INFO", "Program shuts down now!");
                return 0;
            }

            emptyLine();

            log("INFO", "Decrypting your string...");
            log("INFO", "Your decrypted string is...");
            emptyLine();
            log("INFO", decrypt(toDecrypt));
            emptyLine();

            log("INFO", "Program shuts down now!");
            break;
        }
        default: {
            log("ERROR", "Please choose one of the numbers give.");
            break;
        }
    }

    return 0;
}