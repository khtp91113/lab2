#include<iostream>
#include<fstream>
#include<cstdlib>
#include<iomanip>
#include"lab2.h"
int main()
{
 ifstream in("file.in",ios::in);
 ofstream out("file.out",ios::out);
 if(!in)
 {
  cerr<<"Failed opening"<<endl;
  exit(1);
 }
  if(!out)
 {
  cerr<<"Failed opening"<<endl;
  exit(1);
 }
 float height,mass;
 float BMI_value;
 char *str;
 while(in>>height>>mass)
 {
     detail p;
     if(height==0||mass==0)
        break;
     p.setH(height);
     p.setM(mass);
     BMI_value=p.BMI(height,mass);
     str=p.category(BMI_value);
     out<<fixed<<setprecision(2)<<BMI_value<<"\t"<<str<<endl;
 }
 return 0;
}
