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

    int updateAfterClick(int ix, int iy);
};


#endif //MAIN_CPP_JATEKMESTER_HPP
