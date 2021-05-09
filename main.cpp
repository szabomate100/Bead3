#include "graphics.hpp"
#include "widgets.hpp"
#include "checkbox.hpp"
#include "JatekMester.hpp"
#include "applikacio.hpp"
#include <vector>
#include <iostream>

using namespace std;
using namespace genv;

const int cellSize = 40;
const int cellNumber = 20;
const int windowSize = cellSize * cellNumber;

class App : public Applikacio {
protected:

public:

    App() {
        vector<vector<CheckBox>> playField;
        JatekMester *jatekMester = new JatekMester(cellNumber, cellNumber);
        for (int iy = 0; iy < cellNumber; ++iy) {
            vector<CheckBox> playFieldRow;
            for (int ix = 0; ix < cellNumber; ++ix) {
                CheckBox *refCheckBox = new CheckBox(ix * cellSize, iy * cellSize, cellSize, cellSize, *jatekMester);
                playFieldRow.push_back(*refCheckBox);
                bele(refCheckBox);
            }
            playField.push_back(playFieldRow);
        }

    }
};

int main() {
    // parameterek

    App app;
    app.fut(windowSize, windowSize);
    return 0;
}
