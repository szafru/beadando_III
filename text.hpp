#ifndef TEXT_HPP_INCLUDED
#define TEXT_HPP_INCLUDED
#include "graphics.hpp"
#include "widgets.hpp"

using namespace std;

class Label: public Widget
{
protected:
    string szoveg;

public:
    Label( int _x, int _y, int _size_x, int _size_y);

    virtual void draw()const ;
    virtual void handle( genv::event ev );
    virtual void set_text(char szov);
    virtual void st(int bet);
    virtual int getvalue();
    virtual void setvalue(int v);
};
#endif // TEXT_HPP_INCLUDED
