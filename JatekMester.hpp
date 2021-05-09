#ifndef MAIN_CPP_JATEKMESTER_HPP
#define MAIN_CPP_JATEKMESTER_HPP

#include <vector>

using namespace std;

class JatekMester {
private:
    int currentPlayer = 1;
    vector<vector<int>> playField;
public:
    JatekMester(int nx, int ny);
    void changeCurrentPlayer();
    int getCurrentPlayer();
    void updateAfterClick(int ix, int iy);
};


#endif //MAIN_CPP_JATEKMESTER_HPP
