#include "text.hpp"
#include "graphics.hpp"
#include <sstream>
#include <iostream>

using namespace genv;
using namespace std;

Label::Label( int _x, int _y, int _size_x, int _size_y)
    : Widget( _x, _y, _size_x, _size_y )
    {

    }

void Label::handle(event ev)
{
    if(ev.type==ev_key && ev.keycode >= 49 && ev.keycode < 58)
    {
        st(ev.keycode);
    }
    if(ev.type==ev_key && ev.keycode==key_backspace)
    {
        szoveg=' ';
    }
}

void Label::draw() const
{
     gout<<move_to(x,y)<<color(255,255,255)<<box(size_x, size_y)<<color(252,18,228)<<move_to(x+15,y+25)<<text(szoveg);
}

void Label::st(int bet)
{
    szoveg=char(bet);
    std::cout<<szoveg<<std::endl;
}

void Label::set_text(char szov)
{
    szoveg=szov;
}

int Label::getvalue()
{
    stringstream ss;
    ss >> szoveg;
    int temp;
    ss << temp;
    return temp;
}

void Label::setvalue(int v)
{
    stringstream ss;
    ss << v;
    string temp;
    ss >> temp;
    szoveg = temp;
}
