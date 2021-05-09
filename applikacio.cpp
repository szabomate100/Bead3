#include "applikacio.hpp"
#include "widgets.hpp"
using namespace genv;


void Applikacio::handle()
{
    for (Widget * widg : widgets) {
        widg->draw();
    }
    gout << refresh;
    event ev;
    int focus = -1;
    while(gin >> ev) {
        if (ev.type == ev_mouse && ev.button==btn_left) {
            for (size_t i=0;i<widgets.size();i++) {
                if (widgets[i]->kival(ev.pos_x, ev.pos_y)){
                        focus = i;
                }
            }
        }
        
        if (focus!=-1) {
            widgets[focus]->handle(ev);
        }
        for (Widget *w : widgets) {
            w->draw();
        }
        gout << refresh;
    }
}

void Applikacio::fut(int a, int b)
{
    genv::gout.open(a,b);
    handle();
}

void Applikacio::bele(Widget * w){
    widgets.push_back(w);
}