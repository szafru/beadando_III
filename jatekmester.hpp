#ifndef JATEKMESTER_HPP_INCLUDED
#define JATEKMESTER_HPP_INCLUDED
#include <vector>
#include <string>
class jatekmester
{
protected:
    std::vector<std::vector<int> > sudokuvector;

public:
    bool gyozelem(std::vector<std::vector<int> > vec, std::string fajlnev);
    void setvector(std::vector<std::vector<int> > v);
    void loadvector(std::vector<std::vector<int> > &v, std::string fajlnev);
};

#endif // JATEKMESTER_HPP_INCLUDED
