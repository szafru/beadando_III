#include "jatekmester.hpp"
#include <fstream>
#include <iostream>

using namespace std;

void jatekmester::setvector(vector<vector<int> > v)
{
    sudokuvector = v;
}

bool jatekmester::gyozelem(vector<vector<int> > vec,string fajlnev)
{
    ifstream f;
    f.open(fajlnev.c_str());

    vector<vector<int> > v;
    for(int i=0; i<9; i++)
    {
        vector<int> temp;
        for(int j=0; j<9; j++)
        {
            int t = 0;
            temp.push_back(t);
        }
        v.push_back(temp);
    }

    if(f.good())
    {
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                int t;
                f >> t >> ws;
                v[i][j] = t;
            }
        }
    }
    if(vec != v)
    {
        return false;
    }
    else return true;
}

void jatekmester::loadvector(vector<vector<int> > &v, string fajlnev)
{
    ifstream f;
    f.open(fajlnev.c_str());
    if(f.good())
    {
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                int t;
                f >> t >> ws;
                v[i][j] = t;
            }
        }
    }
}
