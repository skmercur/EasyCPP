#ifndef WRITEL_H_INCLUDED
#define WRITEL_H_INCLUDED
#include <string>
void writel(std::string str){
  str.erase(std::remove(str.begin(), str.end(), ';'), str.end());
        str.erase(std::remove(str.begin(), str.end(), ')'), str.end());
        str.erase(std::remove(str.begin(), str.end(), '"'), str.end());

        std::cout<<str.substr(7,str.length())<<std::endl;
}

#endif // WRITEL_H_INCLUDED
