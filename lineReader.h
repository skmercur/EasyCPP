#ifndef LINEREADER_H_INCLUDED
#define LINEREADER_H_INCLUDED
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdio>
#include "functionLocator.h"

void FileReader(std::string filename){
std::ifstream infile(filename.c_str());
    for( std::string line; getline( infile, line ); )
{
functionLocator(line);

}
}

#endif // LINEREADER_H_INCLUDED
