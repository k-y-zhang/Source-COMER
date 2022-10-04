#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int src_input;
int arg[2000][12];
int bi;

int flag[2000];
string number;
void MR0_testcase(int a1,int a2)
{
	if(flag[a1]==1||flag[a2]==1)
	return;
	
	int cmd1 = arg[a1][0];
	int attr1 = arg[a1][1];
	
	int cmd2 = arg[a1][2];
	int attr21 = arg[a1][3];
	int attr22 = arg[a1][4];

	int cmd3 = arg[a1][5];

	int cmd4 = arg[a1][6];
	int attr4 = arg[a1][7];

	int cmd5 = arg[a1][8];

	int cmd6 = arg[a1][9];

	int cmd7 = arg[a1][10];

	std::string line = "";
	std::string end = "";	
	std::string begin = "";
	std::string a = "";
	std::string b = "";

	if (cmd1!=0){
		switch (attr1)
		{
			case 0:
				a = "1";				
				break;
			case 1:
				a = "2";
				break;			
			case 2:				
				a = "3";
				break;		

		}
		line += "1 "+ a+" ";
		if (cmd1 >1 )
		{
			int temp=2+rand()%9;//[2,10]
			for(int i= 0; i<temp-1;i++)
			line += "1 "+ a+" ";
		} 
		    
	}


	if (cmd2!=0){
		switch (attr21)
		{
			case 0:
				a = "1";				
				break;
			case 1:
				a = "2";
				break;			

		}
		switch (attr22)
		{
			case 0:
				b = "0"; 
				break;

			case 1:
				b = "1"; 
				break;
			case 2:	// 0.1
				b ="0.1";		
				break;
			case 3: //0.4
				b ="0.4";		
				break;
			case 4: //0.5
				b ="0.5";				
				break;
			case 5: //0.6
				b ="0.6";		
				break;
			case 6: //0.9
				b ="0.9";		
				break;			
			case 7: // 2
				b ="2";
				break;

		}
		begin += "2 "+ a+" "+b+" ";
		std::string bl = "2 "+ a+" "+b+" ";
		if (cmd2>1 )
		{
			int temp=2+rand()%9;//[2,10]
			for(int i= 0; i<temp-1;i++)
			line += bl;
		}
			
	}


	if (cmd3!=0){
		line += "3 ";
		if (cmd3>1 )
		{
			int temp=2+rand()%9;//[2,10]
			for(int i= 0; i<temp-1;i++)
				line += "3 ";
		}
			
	}


	if (cmd4!=0){
		switch (attr4)
		{
			case 0:
				b = "0"; 
				break;
			case 1:
				b = "1"; 
				break;
			case 2:	// 0.1
				b ="0.1";				
				break;
			case 3: //0.4
					b ="0.4";		
				break;
			case 4: //0.5
					b ="0.5";		
				break;
			case 5: //0.6
					b ="0.6";		
				break;
			case 6: //0.9
					b ="0.9";		
				break;
			case 7:
				b = "2"; 
				break;
		}

		line += "4 "+b+" ";
		if (cmd4>1 )
		{
			int temp=2+rand()%9;//[2,10]
			for(int i= 0; i<temp-1;i++)
				line += "4 "+b+" ";
		}
			
	}


	if (cmd5!=0){
		line += "5 ";
		if (cmd5>1 )
		{
			int temp=2+rand()%9;//[2,10]
			for(int i= 0; i<temp-1;i++)
			line += "5 ";
		}
		  
	}

	if (cmd6!=0){
		line += "6 ";
		if (cmd6>1 )
		{
			int temp=2+rand()%9;//[2,10]
			for(int i= 0; i<temp-1;i++)
			line += "6 ";
		}
		  
	}

		line += "7 ";
		if (cmd7>0 )
		{
			int temp=2+rand()%9;//[2,10] 
			for(int i= 0; i<temp-1;i++)
			line += "7 ";
		}
	
    char filename[200];
	sprintf(filename,"%s%s%d%s",number.c_str(),"/",src_input++,".txt");
    std::ofstream examplefile(filename);
    if (examplefile.is_open())
    {  
         examplefile<<begin<<line<<end; 
         examplefile.close();        //�ر��ļ� 
    } 
    //cout<<begin<<line<<endl;
    begin+="5 ";
    //cout<<begin<<line<<endl;
	sprintf(filename,"%s%s%d%s",number.c_str(),"/",src_input++,".txt");
    std::ofstream examplefile2(filename);
    if (examplefile2.is_open())
    {  
         examplefile2<<begin<<line<<end; 
         examplefile2.close();        //�ر��ļ� 
    } 
    flag[a1]=1;
    flag[a2]=1;
}

void MR1_testcase(int a1,int a2)
{
	if(flag[a1]==1||flag[a2]==1)
	return;
	
	int cmd1 = arg[a1][0];
	int attr1 = arg[a1][1];
	
	int cmd2 = arg[a1][2];
	int attr21 = arg[a1][3];
	int attr22 = arg[a1][4];

	int cmd3 = arg[a1][5];

	int cmd4 = arg[a1][6];
	int attr4 = arg[a1][7];

	int cmd5 = arg[a1][8];

	int cmd6 = arg[a1][9];

	int cmd7 = arg[a1][10];

	std::string line = "";
	std::string end = "";	
	std::string begin = "";
	std::string a = "";
	std::string b = "";

	if (cmd1!=0){
		switch (attr1)
		{
			case 0:
				a = "1";				
				break;
			case 1:
				a = "2";
				break;			
			case 2:				
				a = "3";
				break;		

		}
		//line += "1 "+ a+" ";
		if (cmd1 >1 )
		{
			int temp=2+rand()%9;//[2,10]
			for(int i= 0; i<temp-1;i++)
			line += "1 "+ a+" ";
		} 
		    
	}


	if (cmd2!=0){
		switch (attr21)
		{
			case 0:
				a = "1";				
				break;
			case 1:
				a = "2";
				break;			

		}
		switch (attr22)
		{
			case 0:
				b = "0"; 
				break;

			case 1:
				b = "1"; 
				break;
			case 2:	// 0.1
				b ="0.1";		
				break;
			case 3: //0.4
				b ="0.4";		
				break;
			case 4: //0.5
				b ="0.5";				
				break;
			case 5: //0.6
				b ="0.6";		
				break;
			case 6: //0.9
				b ="0.9";		
				break;			
			case 7: // 2
				b ="2";
				break;

		}
		line += "2 "+ a+" "+b+" ";
		std::string bl = "2 "+ a+" "+b+" ";
		if (cmd2>1 )
		{
			int temp=2+rand()%9;//[2,10]
			for(int i= 0; i<temp-1;i++)
			line += bl;
		}
			
	}


	if (cmd3!=0){
		//line += "3 ";
		if (cmd3>1 )
		{
			int temp=2+rand()%9;//[2,10]
			for(int i= 0; i<temp-1;i++)
				line += "3 ";
		}
			
	}


	if (cmd4!=0){
		switch (attr4)
		{
			case 0:
				b = "0"; 
				break;
			case 1:
				b = "1"; 
				break;
			case 2:	// 0.1
				b ="0.1";				
				break;
			case 3: //0.4
					b ="0.4";		
				break;
			case 4: //0.5
					b ="0.5";		
				break;
			case 5: //0.6
					b ="0.6";		
				break;
			case 6: //0.9
					b ="0.9";		
				break;
			case 7:
				b = "2"; 
				break;
		}

		//line += "4 "+b+" ";
		if (cmd4>1 )
		{
			int temp=2+rand()%9;//[2,10]
			for(int i= 0; i<temp-1;i++)
				line += "4 "+b+" ";
		}
			
	}


	if (cmd5!=0){
		line += "5 ";
		if (cmd5>1 )
		{
			int temp=2+rand()%9;//[2,10]
			for(int i= 0; i<temp-1;i++)
			line += "5 ";
		}
		  
	}

	if (cmd6!=0){
		line += "6 ";
		if (cmd6>1 )
		{
			int temp=2+rand()%9;//[2,10]
			for(int i= 0; i<temp-1;i++)
			line += "6 ";
		}
		  
	}

		line += "7 ";
		if (cmd7>0 )
		{
			int temp=2+rand()%9;//[2,10] 
			for(int i= 0; i<temp-1;i++)
			line += "7 ";
		}
	begin="1 3 3 4 0 ";
    char filename[200];
	sprintf(filename,"%s%s%d%s",number.c_str(),"/",src_input++,".txt");
    std::ofstream examplefile(filename);
    if (examplefile.is_open())
    {  
         examplefile<<begin<<line<<end; 
         examplefile.close();        //�ر��ļ� 
    } 
   // cout<<begin<<line<<endl;
    begin="1 2 2 2 0.9 3 4 0 ";
    //cout<<begin<<line<<endl;
	sprintf(filename,"%s%s%d%s",number.c_str(),"/",src_input++,".txt");
    std::ofstream examplefile2(filename);
    if (examplefile2.is_open())
    {  
         examplefile2<<begin<<line<<end; 
         examplefile2.close();        //�ر��ļ� 
    } 
    flag[a1]=1;
    flag[a2]=1;
}

void judgeMR0()
{	
	for(int i=0;i<bi-1;i++)
	{
		for(int j=i+1;j<bi;j++)
		{
			if(arg[i][0]==arg[j][0]&&arg[i][1]==arg[j][1]&&arg[i][2]==arg[j][2]&&arg[i][2]>0&&arg[i][3]==arg[j][3]&&arg[i][3]==1&&arg[i][4]==arg[j][4]&&arg[i][4]==0&&arg[i][5]==arg[j][5]&&arg[i][6]==arg[j][6]&&arg[j][7]==arg[i][7]&&arg[i][8]==arg[j][8]-1&&arg[i][9]==arg[j][9]&&arg[i][10]==arg[j][10])	
			{
			    MR0_testcase(i,j);
			    break;
			}
			if(arg[i][0]==arg[j][0]&&arg[i][1]==arg[j][1]&&arg[i][2]==arg[j][2]&&arg[i][2]>0&&arg[i][3]==arg[j][3]&&arg[i][3]==1&&arg[i][4]==arg[j][4]&&arg[i][4]==0&&arg[i][5]==arg[j][5]&&arg[i][6]==arg[j][6]&&arg[i][7]==arg[j][7]&&arg[i][8]==arg[j][8]+1&&arg[i][9]==arg[j][9]&&arg[i][10]==arg[j][10])	
			{
			    MR0_testcase(j,i);
			    break;
			}
		}
	}
} 

void judgeMR1()
{	
	for(int i=0;i<bi-1;i++)
	{
		for(int j=i+1;j<bi;j++)
		{
		    if(arg[i][0]==arg[j][0]&&arg[i][0]==1&&arg[i][1]==2&&arg[j][1]==1&&arg[i][2]==arg[j][2]-1&&arg[i][3]==arg[j][3]&&arg[i][3]==1&&arg[i][4]==arg[j][4]&&arg[j][4]==6&&arg[i][5]==arg[j][5]&&arg[i][5]>0&&arg[i][6]==arg[j][6]&&arg[i][6]>0&&arg[i][7]==arg[j][7]&&arg[i][7]==0&&arg[i][8]==arg[j][8]&&arg[i][9]==arg[j][9]&&arg[i][10]==arg[j][10])	
			{
			    MR1_testcase(i,j);
			    break;
			}
			if(arg[i][0]==arg[j][0]&&arg[j][0]==1&&arg[i][1]==1&&arg[j][1]==2&&arg[i][2]==arg[j][2]+1&&arg[i][3]==arg[j][3]&&arg[i][3]==1&&arg[i][4]==arg[j][4]&&arg[i][4]==6&&arg[i][5]==arg[j][5]&&arg[i][5]>0&&arg[i][6]==arg[j][6]&&arg[i][6]>0&&arg[i][7]==arg[j][7]&&arg[i][7]==0&&arg[i][8]==arg[j][8]&&arg[i][9]==arg[j][9]&&arg[i][10]==arg[j][10])	
			{
			    MR1_testcase(j,i);
			    break;
			}
		}
	}
} 

void init()
{
	src_input=0;
	bi=0;
	for(int i=0;i<2000;i++)
	flag[i]=-1;
}

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		std::cerr << "bad args" << std::endl;
	}
	std::ifstream f_in(argv[1]);
	number=argv[2];
	std::string str;
    srand((unsigned int)(time(NULL)));
    init();	
	while (getline(f_in, str))
	{       	
		int jj=0;
		for(int i=0;i<11;i++)
		{
			while(str[jj]==' ')
			jj++;
			if(str[jj]!=' ')
			arg[bi][i]=str[jj]-'0';
			jj++; 
		}
		bi++;
    }
    judgeMR0();
    judgeMR1();
    
    for(int a1=0;a1<bi;a1++)
    {
    if(flag[a1]==-1)
    {
	int cmd1 = arg[a1][0];
	int attr1 = arg[a1][1];
	
	int cmd2 = arg[a1][2];
	int attr21 = arg[a1][3];
	int attr22 = arg[a1][4];

	int cmd3 = arg[a1][5];

	int cmd4 = arg[a1][6];
	int attr4 = arg[a1][7];

	int cmd5 = arg[a1][8];

	int cmd6 = arg[a1][9];

	int cmd7 = arg[a1][10];

	std::string line = "";
	std::string end = "";	
	std::string begin = "";
	std::string a = "";
	std::string b = "";

	if (cmd1!=0){
		switch (attr1)
		{
			case 0:
				a = "1";				
				break;
			case 1:
				a = "2";
				break;			
			case 2:				
				a = "3";
				break;		

		}
		line += "1 "+ a+" ";
		if (cmd1 >1 )
		{
			int temp=2+rand()%9;//[2,10]
			for(int i= 0; i<temp-1;i++)
			line += "1 "+ a+" ";
		} 
		    
	}


	if (cmd2!=0){
		switch (attr21)
		{
			case 0:
				a = "1";				
				break;
			case 1:
				a = "2";
				break;			

		}
		switch (attr22)
		{
			case 0:
				b = "0"; 
				break;

			case 1:
				b = "1"; 
				break;
			case 2:	// 0.1
				b ="0.1";		
				break;
			case 3: //0.4
				b ="0.4";		
				break;
			case 4: //0.5
				b ="0.5";				
				break;
			case 5: //0.6
				b ="0.6";		
				break;
			case 6: //0.9
				b ="0.9";		
				break;			
			case 7: // 2
				b ="2";
				break;

		}
		line += "2 "+ a+" "+b+" ";
		std::string bl = "2 "+ a+" "+b+" ";
		if (cmd2>1 )
		{
			int temp=2+rand()%9;//[2,10]
			for(int i= 0; i<temp-1;i++)
			line += bl;
		}
			
	}


	if (cmd3!=0){
		line += "3 ";
		if (cmd3>1 )
		{
			int temp=2+rand()%9;//[2,10]
			for(int i= 0; i<temp-1;i++)
				line += "3 ";
		}
			
	}


	if (cmd4!=0){
		switch (attr4)
		{
			case 0:
				b = "0"; 
				break;
			case 1:
				b = "1"; 
				break;
			case 2:	// 0.1
				b ="0.1";				
				break;
			case 3: //0.4
					b ="0.4";		
				break;
			case 4: //0.5
					b ="0.5";		
				break;
			case 5: //0.6
					b ="0.6";		
				break;
			case 6: //0.9
					b ="0.9";		
				break;
			case 7:
				b = "2"; 
				break;
		}

		line += "4 "+b+" ";
		if (cmd4>1 )
		{
			int temp=2+rand()%9;//[2,10]
			for(int i= 0; i<temp-1;i++)
				line += "4 "+b+" ";
		}
			
	}


	if (cmd5!=0){
		line += "5 ";
		if (cmd5>1 )
		{
			int temp=2+rand()%9;//[2,10]
			for(int i= 0; i<temp-1;i++)
			line += "5 ";
		}
		  
	}

	if (cmd6!=0){
		line += "6 ";
		if (cmd6>1 )
		{
			int temp=2+rand()%9;//[2,10]
			for(int i= 0; i<temp-1;i++)
			line += "6 ";
		}
		  
	}

		line += "7 ";
		if (cmd7>0 )
		{
			int temp=2+rand()%9;//[2,10] 
			for(int i= 0; i<temp-1;i++)
			line += "7 ";
		}

    char filename[200];
	sprintf(filename,"%s%s%d%s",number.c_str(),"/",src_input++,".txt");
//	std::cout<<filename<<endl;
    std::ofstream examplefile(filename);
    if (examplefile.is_open())
    {  
         examplefile<<begin<<line<<end; 
         examplefile.close();        //�ر��ļ� 
    } 
    }}
	return 0;
}
