#include "JatekMester.hpp"
#include <iostream>

JatekMester::JatekMester(int nx, int ny) {
    for (int iy = 0; iy<ny;++iy){
        vector<int> playFieldRow;
        for (int ix = 0; ix<nx; ++ix){
            playFieldRow.push_back(0);
        }
        playField.push_back(playFieldRow);
    }
    currentPlayer = 1;
}

void JatekMester::changeCurrentPlayer() {
    if (currentPlayer == 1){
        currentPlayer = 2;
    } else{
        currentPlayer = 1;
    }
}

int JatekMester::getCurrentPlayer() {
    return currentPlayer;
}

void JatekMester::updateAfterClick(int ix, int iy) {

}
