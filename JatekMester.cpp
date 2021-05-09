#include "JatekMester.hpp"
#include <iostream>

JatekMester::JatekMester(int nx, int ny) {
    std::cout << "42" << endl;
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
