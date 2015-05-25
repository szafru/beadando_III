#ifndef WIDGETS_HPP_INCLUDED
#define WIDGETS_HPP_INCLUDED
#include "graphics.hpp"

class Widget
{
protected:
    int x, y, size_x, size_y;

public:
    Widget( );
    Widget( int _x, int _y, int _size_x, int _size_y );

    virtual bool is_selected( int mouse_x, int mouse_y ) const;
    virtual void draw() const;
    virtual void handle( genv::event ev );
    virtual int getvalue() {};
    virtual void setvalue(int v) {};
};

#endif // WIDGETS_HPP_INCLUDED
