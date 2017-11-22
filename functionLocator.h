#ifndef FUNCTIONLOCATOR_H_INCLUDED
#define FUNCTIONLOCATOR_H_INCLUDED
#include <string>
#include <algorithm>
#include "stdlib.h"
#include <iostream>
#include <cmath>
#include "write.h"
#include "writel.h"
void functionLocator(std::string str)
{
    std::string str1 = str;
    std::string str2 = str;
    std::string str3;
    std::string FunctionName;
    /*std::size_t found = str.find("(");
    std::size_t found1 = str.find(")");
    if( (found != std::string::npos)&& (found1 != std::string::npos)){
    std::string str11;
    std::string str12;
    str11.assign(str);
    str11.resize(found);
    if(str11.compare("write")== 0){

    str12 = str.substr(found+2,str.back());
    std::cout<<str12;
    std::cout<<std::endl;
    }
    if(str11.compare("writel")==0){
        str12 = str.substr(found+2,found1-found);
    std::cout<<str12<<std::endl;
    }
    if(str11.compare("add")==0){
    std::size_t found2 = str.find(",");
        double a = std::atof(str.substr(found+1,found2-1).c_str());
        double b = std::atof(str.substr(found2,found1-2).c_str());
        std::cout<<a<<std::endl;
        std::cout<<found2<<std::endl;
    }
    }*/
    int posiParentheseOuvrante, posiParentheseFermente;
    int posiGuillemetS,posiGuillemetE;
    int posiVirgule;
    for(int i=0; i<=str.length(); i++)
    {
        if(str[i] == '(')
        {
            posiParentheseOuvrante = i;
        }

        if(str[i] == ')')
        {
            posiParentheseFermente = i;
        }
        if(str[i] == ',')
        {
            posiVirgule = i;
        }
    }
    if(str[posiParentheseOuvrante+1] == '"')
    {
        posiGuillemetS = posiParentheseOuvrante +1;
    }
    if(str[posiParentheseFermente+1] == '"')
    {
        posiGuillemetS = posiParentheseFermente -1;
    }


    /* Switching part */
    FunctionName = str1.substr(0,posiParentheseOuvrante);
    int functionID;
    if(FunctionName.compare("add") == 0 )
        functionID = 0;
    if(FunctionName.compare("write") == 0)
        functionID = 1;
    if(FunctionName.compare("writel") == 0)
        functionID = 2;
    if(FunctionName.compare("sub") == 0)
        functionID = 3;
    if(FunctionName.compare("mul") == 0)
        functionID = 4;
    if(FunctionName.compare("div") == 0)
        functionID = 5;
         if(FunctionName.compare("pow") == 0)
        functionID = 6;
    switch(functionID)
    {
    case 0:
    {
        /* ARITHMITIC PART */
        str1.erase(std::remove(str1.begin(), str1.end(), ';'), str1.end());
        str1.erase(std::remove(str1.begin(), str1.end(), ')'), str1.end());
        str2 = str1.substr(posiVirgule+1,str.length());
        str3 = str1.erase(posiVirgule,str.length());
        str3 = str3.substr(posiParentheseOuvrante+1,str3.length());
        double a,b;
       std::stringstream(str3)>>a;
        std::stringstream(str2)>>b;
        std::cout<<a+b<<std::endl;

        break;
    }
    case 1:
    {
        write(str1);
        break;
    }
    case 2:
    {
      writel(str1);
        break;
    }

case 3:
    {
        /* ARITHMITIC PART */
        str1.erase(std::remove(str1.begin(), str1.end(), ';'), str1.end());
        str1.erase(std::remove(str1.begin(), str1.end(), ')'), str1.end());
        str2 = str1.substr(posiVirgule+1,str.length());
        str3 = str1.erase(posiVirgule,str.length());
        str3 = str3.substr(posiParentheseOuvrante+1,str3.length());


        double a,b;
        std::stringstream(str3)>>a;
        std::stringstream(str2)>>b;

        std::cout<<a-b<<std::endl;


        break;
    }
case 4:
    {
        /* ARITHMITIC PART */
        str1.erase(std::remove(str1.begin(), str1.end(), ';'), str1.end());
        str1.erase(std::remove(str1.begin(), str1.end(), ')'), str1.end());
        str2 = str1.substr(posiVirgule+1,str.length());
        str3 = str1.erase(posiVirgule,str.length());
        str3 = str3.substr(posiParentheseOuvrante+1,str3.length());
        double a,b;
      std::stringstream(str3)>>a;
        std::stringstream(str2)>>b;
        std::cout<<a*b<<std::endl;

        break;
    }
    case 5:
    {
        /* ARITHMITIC PART */
        str1.erase(std::remove(str1.begin(), str1.end(), ';'), str1.end());
        str1.erase(std::remove(str1.begin(), str1.end(), ')'), str1.end());
        str2 = str1.substr(posiVirgule+1,str.length());
        str3 = str1.erase(posiVirgule,str.length());
        str3 = str3.substr(posiParentheseOuvrante+1,str3.length());
        double a,b;
       std::stringstream(str3)>>a;
        std::stringstream(str2)>>b;
        std::cout<<a/b<<std::endl;


        break;
    }
    case 6:
    {
        /* ARITHMITIC PART */
        str1.erase(std::remove(str1.begin(), str1.end(), ';'), str1.end());
        str1.erase(std::remove(str1.begin(), str1.end(), ')'), str1.end());
        str2 = str1.substr(posiVirgule+1,str.length());
        str3 = str1.erase(posiVirgule,str.length());
        str3 = str3.substr(posiParentheseOuvrante+1,str3.length());
        double a,b;
        std::stringstream(str3)>>a;
        std::stringstream(str2)>>b;
        std::cout<<pow(a,b)<<std::endl;


        break;
    }








    }

}





#endif // FUNCTIONLOCATOR_H_INCLUDED
