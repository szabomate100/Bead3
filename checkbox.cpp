#include "checkbox.hpp"
#include "graphics.hpp"
#include "JatekMester.hpp"

using namespace genv;

CheckBox::CheckBox(int x, int y, int sx, int sy, int ix, int iy, JatekMester *_jatekMester)
        : Widget(x, y, sx, sy), jatekMester(jatekMester) {
    checked = false;
    whichPlayerChecked = 0;
    jatekMester = _jatekMester;
    this->set_index(ix, iy);
}

void CheckBox::set_index(int ix, int iy){
    my_ix = ix;
    my_iy = iy;
}

void CheckBox::draw() {
    gout << move_to(_x, _y) << color(255, 255, 255) << box(_size_x, _size_y);
    gout << move_to(_x + 2, _y + 2) << color(0, 0, 0) << box(_size_x - 4, _size_y - 4);
    if (checked) {
        auto col = color(255, 0, 0);
        if (whichPlayerChecked == 2){
            col = color(0,0,255);
        }
        gout << move_to(_x, _y) << color(250, 255, 255) << box(_size_x, _size_y);
        gout << move_to(_x + 2, _y + 2) << col << box(_size_x - 4, _size_y - 4);

    }

}

void CheckBox::handle(event ev) {

    if (ev.type == ev_mouse && kival(ev.pos_x, ev.pos_y) && ev.button == btn_left && !checked) {
        checked = true;
        int currentPlayer = jatekMester->getCurrentPlayer();
        whichPlayerChecked = currentPlayer;
        jatekMester->updatePlayField_testWinOrFull(my_ix, my_iy, currentPlayer);
        jatekMester->changeCurrentPlayer();
    }
}

bool CheckBox::checked_e() {
    return checked;
}
