#ifndef MAIN_CPP_JATEKMESTER_HPP
#define MAIN_CPP_JATEKMESTER_HPP

#include <vector>

using namespace std;

class JatekMester {
private:
    int currentPlayer = 1;
    vector<vector<int>> playField;
    int nx;
    int ny;

    bool allFieldsCheckedSame(vector<vector<int>> fieldList);

public:
    JatekMester(int _nx, int _ny);

    void changeCurrentPlayer();

    int getCurrentPlayer();

    void updatePlayField_testWinOrFull(int ix, int iy, int _currentPlayer);

    void playerWins(int _currentPlayer);

    void playfieldIsFull();
};


#endif //MAIN_CPP_JATEKMESTER_HPP
