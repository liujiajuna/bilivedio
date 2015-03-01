#include<string>
#include<iostream>
#include"VideoFolder.h"
using namespace std;

int main()
{
	string test="F:\\dl\\880746";
	VideoFolder vf1(test);

	cout<<vf1.title()<< " "<<vf1.size()<<endl;


}