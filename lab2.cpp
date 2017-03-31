#include<iostream>
#include<fstream>
#include<math.h>
#include<string>
#include<cstdlib>
#include"math.h"
using namespace std;

int main(){
Math mth1,mth2,mth3,mth4;
int x,y,Ra,Rb;
double k,Ea,Eb,a;
const float i=10;
char data[100] ;
string str;
ifstream inFile("file.in",ios::in);
inFile.getline(data,sizeof(data));
 sscanf(data,"%lf %d %d",&k,&Ra,&Rb);
ofstream outFile("file.out",ios::out);
outFile<<Ra<<" "<<Rb<<endl;
while(inFile.getline(data,sizeof(data))){
	sscanf(data,"%lf",&a);
    mth1.setR(Ra,Rb);
	mth2.setK(k);
	Ea=mth4.e(Ra,Rb);
	Ra=mth3.answer(Ra,k,a,Ea);
	Eb=mth4.e(Rb,Ra);
	Rb=mth3.answer(Rb,k,1-a,Ea);
	outFile<<Ra<<" "<<Rb<<endl;
	
	}
}

