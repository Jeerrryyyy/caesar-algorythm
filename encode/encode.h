//
// Created by Jeremias.BRAUN on 19.06.2020.
//

#ifndef CEASAR_ALGORYTHM_ENCODE_H
#define CEASAR_ALGORYTHM_ENCODE_H

#include <iostream>

using namespace std;

string encrypt(const string &input) {
    string finishedText;
    int shift = 15;

    cout << input << endl;

    for (char i : input) {
        if (isblank(i)) {
            finishedText += " ";
            continue;
        }

        int maths;
        char finishedChar;

        if (isupper(i)) {
            maths = i + shift - 65;
            finishedChar = maths % 26 + 65;

            finishedText += finishedChar;
        } else {
            maths = i + shift - 97;
            finishedChar = maths % 26 + 97;

            finishedText += finishedChar;
        }
    }

    return finishedText;
}

#endif //CEASAR_ALGORYTHM_ENCODE_H
