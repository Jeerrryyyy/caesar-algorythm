//
// Created by Jeremias.BRAUN on 19.06.2020.
//

#ifndef CEASAR_ALGORYTHM_DECODE_H
#define CEASAR_ALGORYTHM_DECODE_H

#include <iostream>

using namespace std;

string decrypt(string input) {
    string finishedText;
    int shift = 15;

    cout << input << endl;

    for (char i : input) {
        if (isblank(i)) {
            finishedText += " ";
            continue;
        }

        if (isupper(i)) finishedText += char(int(i - (shift - 26) - 65) % 26 + 65);
        else finishedText += char(int(i - (shift - 26) - 97) % 26 + 97);
    }

    return finishedText;
}

#endif //CEASAR_ALGORYTHM_DECODE_H
