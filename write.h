#ifndef WRITE_H_INCLUDED
#define WRITE_H_INCLUDED
#include <string>

void write(std::string str){
str.erase(std::remove(str.begin(), str.end(), ';'), str.end());
        str.erase(std::remove(str.begin(), str.end(), ')'), str.end());
        str.erase(std::remove(str.begin(), str.end(), '"'), str.end());

        std::cout<<str.substr(6,str.length());
}


#endif // WRITE_H_INCLUDED
