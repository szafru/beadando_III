#include "textbox.hpp"
#include "graphics.hpp"
#include <sstream>
#include <iostream>

using namespace genv;
using namespace std;

LabelBox::LabelBox( int _x, int _y, int _size_x, int _size_y, char _szoveg)
    : Widget( _x, _y, _size_x, _size_y)
{
    szoveg=_szoveg;
}

void LabelBox::draw() const
{
    gout<<move_to(x,y)<<color(255,255,255)<<box(size_x, size_y)<<color(0,0,0)<<move_to(x+15,y+25)<<text(szoveg);
}

void LabelBox::handle(event ev)
{

}

string LabelBox:: get_text()
{
    return szoveg;
}

int LabelBox::getvalue()
{
    stringstream ss;
    ss >> szoveg;
    int temp;
    ss << temp;
    return temp;
}

void LabelBox::setvalue(int v)
{
    stringstream ss;
    ss << v;
    string temp;
    ss >> temp;
    szoveg = temp;
}

