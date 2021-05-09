#include "JatekMester.hpp"
#include <iostream>

JatekMester::JatekMester(int _nx, int _ny) {
    nx = _nx;
    ny = _ny;
    for (int iy = 0; iy < ny; ++iy) {
        vector<int> playFieldRow;
        for (int ix = 0; ix < nx; ++ix) {
            playFieldRow.push_back(0);
        }
        playField.push_back(playFieldRow);
    }
    currentPlayer = 1;
}

void JatekMester::changeCurrentPlayer() {
    if (currentPlayer == 1) {
        currentPlayer = 2;
    } else {
        currentPlayer = 1;
    }
}

int JatekMester::getCurrentPlayer() {
    return currentPlayer;
}

int JatekMester::updateAfterClick(int ix, int iy) {
    playField[ix][iy] = currentPlayer;
    this->changeCurrentPlayer();

    //horizontal sliding window
    //vertical sliding window
    //first diagonal sliding window
    //second diagonal sliding window
}

bool JatekMester::allFieldsCheckedSame(vector<vector<int>> fieldList) {
    //assumes that at least one field is non zero
    vector<int> numberList;
    for (vector<vector<int>>::iterator it = fieldList.begin(); it < fieldList.end(); ++it) {
        vector<int> pair = *it;
        int ix = pair[0];
        int iy = pair[1];
        numberList.push_back(playField[ix][iy]);
    }
    bool allEqual = true;
    for (int i = 1; i < numberList.size(); ++i) {
        if (numberList[i] != numberList[0]) {
            allEqual = false;
        }
    }
    return allEqual;
}


