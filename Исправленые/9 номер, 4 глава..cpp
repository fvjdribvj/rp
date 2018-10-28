#include "stdafx.h"
#include<iostream>
#include<string>
struct CandyBar
{
 std::string name;
 float weight;
 int calor;
};
 int main()
{
using namespace std;
CandyBar *ps = new CandyBar [3];
ps[0].name= "Muncha Mon";
    ps[0].weight=350.5;
    ps[0].calor=12;
    ps[1].name= "Body Scru";
    ps[1].weight=125.7;
    ps[1].calor=38;
    ps[2].name   = "Dobey Bru";               
    ps[2].weight = 30.1;                      
    ps[2].calor  = 63;                        
    cout<<"1 struct: "<<ps[0].name<<", "<<ps[0].weight<<", "<<ps[0].calor<<"."<<endl;
    cout<<"2 struct: "<<ps[1].name<<", "<<ps[1].weight<<", "<<ps[1].calor<<"."<<endl;
    cout<<"3 struct: "<<ps[2].name<<", "<<ps[2].weight<<", "<<ps[2].calor<<"."<<endl;
delete [] ps;
}