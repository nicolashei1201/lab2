 #include<iostream>
 #include<fstream>
 #include<math.h>
 #include<string>
 #include<cstdlib>
 using namespace std;
 class Math{
 public:
 	void setR(int a,int b);
 	void setK(double K);
 	int getRa();
 	int getRb();
 	double getK();
 	double e(double a,double b);
 	int answer(int R,int K,double a,double E);
 private:
 int ra;
 int rb;
 double k;
 };
