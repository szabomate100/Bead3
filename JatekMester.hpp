#ifndef MAIN_CPP_JATEKMESTER_HPP
#define MAIN_CPP_JATEKMESTER_HPP

#include <vector>

using namespace std;

class JatekMester {
private:
    int currentPlayer = 1;
public:
    JatekMester(int nx, int ny);
    void changeCurrentPlayer();
    int getCurrentPlayer();
};


#endif //MAIN_CPP_JATEKMESTER_HPP
