#include "lab2.h"
void detail::setH(float h)
{
     height=h;
}
float detail::getH()
{
    return height;
}
void detail::setM(float m)
{
     mass=m;
}
float detail::getM()
{
    return mass;
}
float detail::BMI(float height,float mass)
{
  return mass*10000/(height*height);
}
char* detail::category(float BMI_value)
{
     char*c;
     if(BMI_value<15)
        c="Very severely underweight";
     else if(BMI_value>=15&&BMI_value<16)
        c="Severely underweight";
     else if(BMI_value>=16&&BMI_value<18.5)
        c="Underweight";
     else if(BMI_value>=18.5&&BMI_value<25)
        c="Normal";
     else if(BMI_value>=25&&BMI_value<30)
        c="Overweight";
     else if(BMI_value>=30&&BMI_value<35)
        c="Obese Class I(Moderately obese)";
     else if(BMI_value>=35&&BMI_value<40)
        c="Obese Class II(Severely obese)";
     else
        c="Obese Class III(Very severely obese)";
     return c;
}

