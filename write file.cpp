#include<iostream>
#include<conio.h>
using namespace std;
#include<fstream>
int main()
{
	ofstream ofs("a.txt");
	ofs<<"first line"<<endl;
	ofs<<"second line"<<endl;
	ofs<<"third line"<<endl;
	ofs.close();
	getch();
	return 0;
	
	
}
