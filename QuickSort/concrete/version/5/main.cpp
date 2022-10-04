#include "function.h"
#include <fstream>

int main(int argc, char *argv[])
{
    std::string tem=argv[1];       
    std::string str;
    std::ifstream infile;    
    infile.open(tem.c_str());
    int b[500];
    int bi=0;
    while(!infile.eof())
    {
        infile>>b[bi];
        bi++;
    } 
    int *temp;
    temp=quicksort(b,0,bi-1);
        std::ofstream write;
        //cout<<tem<<endl;
        char filename[200];
        
        tem.copy(filename,tem.length(),0);
        //cout<<endl;
        *(filename+tem.length())='\0';
        write.open(filename, std::ios::app);                //用ios::app不会覆盖文件内容
        write << std::endl;
        for(int i=0;i<bi;i++)
        write <<temp[i]<<" ";
        write.close();
    return 0;
}
