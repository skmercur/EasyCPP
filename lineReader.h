#ifndef LINEREADER_H_INCLUDED
#define LINEREADER_H_INCLUDED
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdio>
void FileReader(std::string filename){
std::ifstream infile(filename.c_str());
    for( std::string line; getline( infile, line ); )
{
std::cout<<line<<std::endl;
  std::wstring message = L"السلام عليك";
    std::cout << message.c_str() << std::endl;

}
}

#endif // LINEREADER_H_INCLUDED
