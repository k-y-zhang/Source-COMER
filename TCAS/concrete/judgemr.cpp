#include <iostream>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <fstream>
#include <vector>
#include <dirent.h>
using namespace std;
#define MAX 10000

int b[5000][500];
int result[5000][4];
int resulti=0;
int bi;
int name[5000];

void spl(string a,int count)  //将a划分为整数数组 
{
	int b0=0;
	
    string temp[500];
    for(int i=0;i<500;i++)
    temp[i]="";
    int tempi=0;
    for(int i=0;i<a.length();i++)
    {
    	if(a[i]>='0'&&a[i]<='9')
    	{
    	 	temp[tempi]+=a[i];
    	}
    	if(a[i]==' ')
    	 	tempi++;
    	if(i==a.length()-1&&a[i]!=' ')
    	    tempi++;
    }
    
    for(int i=0;i<tempi;i++)
    {    	 
         int tempint=0;
         int cheng=1;
    	 for(int j=temp[i].length()-1;j>=0;j--)
    	 {
    	 	 tempint+=(temp[i][j]-'0')*cheng;
    	 	 cheng=cheng*10;
    	 }
    	 b[count][bi++]=tempint;
    }
    b0=bi-1;
    b[count][0]=b0;
}
void judgemr0(int a1,int a2)
{

	int i=1;
	for(;i<=12;i++)
	{
		if(i==4||i==6)
		continue;
		if(b[a1][i]!=b[a2][i])
		return;
	}
	if((b[a1][4]-b[a1][6])==(b[a2][4]-b[a2][6]))
	{
		result[resulti][0]=a1;
		result[resulti][1]=a2;
		result[resulti][2]=0;
		if(b[a1][13]==b[a2][13])
		result[resulti][3]=1;
		else
		result[resulti][3]=0;
		resulti++;
	}
	return;
}

void judgemr1(int a1,int a2)
{
	if((b[a1][11]!=2)||(b[a2][11]!=2))
	return;
	int i=1;
	for(;i<=12;i++)
	{
		if(i==10)
		continue;
		if(b[a1][i]!=b[a2][i])
		return;
	}
	result[resulti][0]=a1;
	result[resulti][1]=a2;
	result[resulti][2]=1;
	if(b[a1][13]==b[a2][13])
	result[resulti][3]=1;
	else
	result[resulti][3]=0;
	resulti++;
	return;
}

void judgemr2(int a1,int a2)
{
	if((b[a1][11]!=2)||(b[a2][11]!=2))
	return;
	int i=1;
	for(;i<=12;i++)
	{
		if(i==3)
		continue;
		if(b[a1][i]!=b[a2][i])
		return;
	}
	result[resulti][0]=a1;
	result[resulti][1]=a2;
	result[resulti][2]=2;
	if(b[a1][13]==b[a2][13])
	result[resulti][3]=1;
	else
	result[resulti][3]=0;
	resulti++;
	return;
}

void judgemr3(int a1,int a2)
{
	if((b[a1][10]!=0)||(b[a2][10]!=0)||(b[a1][3]!=1)||(b[a2][3]!=1))
	return;
	int i=1;
	for(;i<=12;i++)
	{
		if(i==11)
		continue;
		if(b[a1][i]!=b[a2][i])
		return;
	}
	result[resulti][0]=a1;
	result[resulti][1]=a2;
	result[resulti][2]=3;
	if(b[a1][13]==b[a2][13])
	result[resulti][3]=1;
	else
	result[resulti][3]=0;
	resulti++;
	return;
}
int main(int argc, char *argv[])
{
    struct dirent *ptr;    
    DIR *dir;
    
    string PATH = argv[1];
    string output_txt=argv[2]; 
    dir=opendir(PATH.c_str());
    vector<string> files;
    while((ptr=readdir(dir))!=NULL)
    {
 
        //跳过'.'和'..'两个目录
        if(ptr->d_name[0] == '.')
            continue;
        //cout << ptr->d_name << endl;
        files.push_back(ptr->d_name);
    }
    for(int i=0;i<5000;i++)
    {
    	for(int j=0;j<500;j++)
    	b[i][j]=-1;
    }
    for (int i = 0; i < files.size(); ++i)
    {
    	string tem= PATH+"/"+files[i];
    	string strname = files[i].substr(0,files[i].length()-4);
    	name[i]=atoi(strname.c_str());
    	
        ifstream f_in(tem.c_str());  
        string str;
        bi=1;
        while (getline(f_in, str)){
    	    spl(str,i);
        }   
    }
	int count =  files.size();
	for(int i=0;i<count-1;i++)
	{
		for(int j=i+1;j<count;j++)
		{
            judgemr0(i,j); 
            judgemr1(i,j);
			judgemr2(i,j); 
			judgemr3(i,j);  
		}
	} 
	/*for(int i=0;i<resulti;i++)
	{
		std::cout<<name[result[i][0]]<<" "<<name[result[i][1]]<<" "<<result[i][2]<<" "<<result[i][3]<<std::endl;
	}*/
	
	char filename[200];
	sprintf(filename,"%s",output_txt.c_str());
    std::ofstream examplefile(filename);
    if (examplefile.is_open())
    {  
         for(int i=0;i<resulti;i++)
	{
		examplefile<<name[result[i][0]]<<" "<<name[result[i][1]]<<" "<<result[i][2]<<" "<<result[i][3];
		if(i!=resulti-1)
		 examplefile<<"\n";
	}
         examplefile.close();        //关闭文件 
    }
    closedir(dir);
    return 0;
} 
