#include "function.h"
#include <fstream>
//#include <limits.h>
//#include<iostream>
//#include<string>
//#include <dirent.h>
//#include <vector>

int main(int argc, char *argv[])
{
    std::string tem=argv[1];       
    std::string str;
    std::ifstream infile;    
    infile.open(tem.c_str());
    std::string b="";
    std::string c="";
    while(!infile.eof())
    {
        infile>>b>>c;
    }
    
    int m=editDist(b,c,b.length(),c.length());
        std::ofstream write;
        //cout<<tem<<endl;
        char filename[200];
        
        tem.copy(filename,tem.length(),0);
        //cout<<endl;
        *(filename+tem.length())='\0';
        write.open(filename, std::ios::app);                //��ios::app���Ḳ���ļ�����
        write << std::endl<< m;
        write.close();
    return 0;
}
