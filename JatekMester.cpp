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

bool JatekMester::allFieldsCheckedSame(vector<vector<int>> fieldList) {
    //assumes that at least one field is non zero
    vector<int> numberList;
    for (vector<int> &field : fieldList) {
        int field_x = field.front();
        int field_y = field.back();
        numberList.push_back(playField[field_x][field_y]);
    }
    bool allEqual = true;
    if (numberList[0] == 0) {
        allEqual = false;
    } else {
        for (int i = 1; i < numberList.size(); ++i) {
            if (numberList[i] != numberList[0]) {
                allEqual = false;
            }
        }
    }
    return allEqual;
}

void JatekMester::checkWinOrFull(int ixClicked, int iyClicked, int _currentPlayer) {

    //horizontal sliding window
    int windowXLeftMin = max(ixClicked - 4, 0);
    int windowXLeftMax = min(ixClicked, nx - 5);
    for (int ixLeft = windowXLeftMin; ixLeft <= windowXLeftMax; ++ixLeft) {
        vector<vector<int>> fieldsInWindow;
        for (int i = 0; i < 5; ++i) {
            vector<int> field;
            field.push_back(ixLeft + i);
            field.push_back(iyClicked);
            fieldsInWindow.push_back(field);
        }
        if (this->allFieldsCheckedSame(fieldsInWindow)) {
            this->playerWins(_currentPlayer);
        }
    }

    // vertical sliding window
    int windowYUpMin = max(iyClicked - 4, 0);
    int windowYUpMax = min(iyClicked, ny - 5);
    for (int iyUp = windowYUpMin; iyUp <= windowYUpMax; ++iyUp) {
        vector<vector<int>> fieldsInWindow;
        for (int i = 0; i < 5; ++i) {
            vector<int> field;
            field.push_back(ixClicked);
            field.push_back(iyUp + i);
            fieldsInWindow.push_back(field);
        }
        if (this->allFieldsCheckedSame(fieldsInWindow)) {
            this->playerWins(_currentPlayer);
        }
    }
    //first diagonal sliding window
    //second diagonal sliding window

}

void JatekMester::playerWins(int _currentPlayer) {
    cout << "Player " << _currentPlayer << " wins." << endl;
}


