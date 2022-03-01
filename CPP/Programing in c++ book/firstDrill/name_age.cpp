#include "std_lib_facilities.h"

int main (){
	
	string name="???";
	int age=18;
	
	cout<<"enter your name and age\n";
	cin>>name>>age;
	
	int age_in_months=0;
	age_in_months=age*12;
	
	cout<<name<<"  ("<<age<<")\n";
	cout<<name<<"   "<<"age in months"<<age_in_months <<"\n";
	
	
	string cname="???";
	double cage=18.0;
	
	cout<<"enter your name and age\n";
	cin>>cname>>cage;
	
	double cage_in_months=0;
	cage_in_months=cage*12;
	
	cout<<cname<<"  ("<<cage<<")\n";
	cout<<cname<<"   "<<"age in months"<<cage_in_months <<"\n";
	
	
	
}