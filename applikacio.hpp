#ifndef APPLIKACIO_HPP_INCLUDED
#define APPLIKACIO_HPP_INCLUDED

#include "widgets.hpp"
#include <vector>

class Applikacio
{
protected: 
   std::vector<Widget*> widgets;
   virtual void handle();
public:
   virtual void fut(int a,int b);
   void bele(Widget * w);
};

#endif