#include<string>
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<iomanip>
#include"BMI.h"
using namespace std;
int main(){
	ifstream filein("file.in",ios::in);
	ofstream fileout("file.out",ios::out);
	if(!filein||!fileout){
		cerr << "Failed opening" << endl;
		exit(1);
	}
	BMI bmi;
	float hhh,www;
	float v;
	while(filein >> hhh >> www){
		if(hhh==0||www==0){
			break;
		}
		bmi.setStart(hhh,www);
		bmi.getStart();
		v=bmi.getBMI();
		fileout << fixed << setprecision(2) << bmi.getBMI() << "\t" << bmi.category(v) << endl;
	}
	filein.close();
	fileout.close();
	return 0;
}
