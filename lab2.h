#ifndef LAB2_H_INCLUDED
#define LAB2_H_INCLUDED
using namespace std;
class detail
{
 public:
 void setH(float h);
 float getH();
 void setM(float m);
 float getM();
 float BMI(float height,float mass);
 char* category(float BMI_value);
 private:
 float height,mass;
};
#endif
