#ifndef TEXTBOX_HPP_INCLUDED
#define TEXTBOX_HPP_INCLUDED
#include "graphics.hpp"
#include "widgets.hpp"

using namespace std;

class LabelBox: public Widget
{
protected:
    string szoveg;

public:
    LabelBox( int _x, int _y, int _size_x, int _size_y, char _szoveg);

    virtual void draw() const;
    virtual void handle( genv::event ev );
    string get_text();
    virtual int getvalue();
    virtual void setvalue(int v);
};
#endif // TEXTBOX_HPP_INCLUDED
