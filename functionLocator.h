#ifndef FUNCTIONLOCATOR_H_INCLUDED
#define FUNCTIONLOCATOR_H_INCLUDED
#include <string>
void functionLocator(std::string str){
std::size_t found = str.find("(");
std::size_t found1 = str.find(")");
if( (found != std::string::npos)&& (found1 != std::string::npos)){
std::string str11;
std::string str12;
str11.assign(str);
str11.resize(found);
if(str11.compare("write")== 0){

str12 = str.substr(found+2,found1-2);
std::cout<<str12;
std::cout<<std::endl;
}
if(str11.compare("writel")==0){
    str12 = str.substr(found+2,found1-2);
std::cout<<str12<<std::endl;
}
if(str11.compare("add")==0){
    double a = std::stod();
}
}
}




#endif // FUNCTIONLOCATOR_H_INCLUDED
