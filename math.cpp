#include"math.h"
	void Math::setR(int a,int b){
		ra=a;
		rb=b;
		cout<<a<<endl;
		cout<<b<<endl;
	}
	void Math::setK(double K){
		k=K;
	}
	int Math::getRa(){
		return ra;
	}
	int Math::getRb(){
		return rb;
	}
	double Math::getK(){
		return k;
	}
	double Math::e(double a,double b){
	double i;
	cout<<"ra="<<ra<<" "<<"rb="<<rb<<endl;
	i=1/(1+pow(10,(b-a)/400));
	return i;
	}
	int Math::answer(int R,int K,double a,double E){
	double r;
	r=R+K*(a-E);
	if((int)(r-0.5)==(int)r){
	return(int)r+1;}
	else{
	return(int)r;}
	}



