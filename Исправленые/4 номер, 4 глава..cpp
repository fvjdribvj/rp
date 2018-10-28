#include "stdafx.h"
#include <iostream> 
#include <string>
#include <cstring>
using namespace std;
void main()
{
 string name;
 string soname;
 string NAME;
 cout << "What is your first name?" << endl;
 getline (cin, name);
 cout << "What is your last name?" << endl;
 getline (cin, soname);
 NAME = soname;
 NAME += ", ";
 NAME += name;
 cout << "Name: " << NAME << endl;
}