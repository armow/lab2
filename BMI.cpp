#include"BMI.h"
#include<string>
using namespace std;
BMI::BMI(){
	height=0,weight=0,value=0,c;
}
void BMI::setStart(float hhh,float www){
	height=hhh;
    weight=www;
}
float BMI::getStart(){
    return height,weight;
}
float BMI::getBMI(){
    return value=weight*100*100/(height*height);
}
string BMI::category(float value){
	if(value<15){
	 	c="Very severely underweight";
		return c;}
    else if(value>=15&&value<16){
		c="Severely underweight";
		return c;}
	else if(value>=16&&value<15.5){
		c="Underweight";
		return c;}
	else if(value>=18.5&&value<25){
		c="Normal";
		return c;}
	else if(value>=25&&value<30){
		c="Overweight";
        return c;}
	else if(value>=30&&value<35){
		c="Obese Class I (Moderately obese)";
		return c;}
	else if(value>=35&&value<40){
		c="Obese Class II (Severely obese)";
		return c;}
	else if(value<=40){
		c="Obese Class III (Very severely obese)";
		return c;}
}
