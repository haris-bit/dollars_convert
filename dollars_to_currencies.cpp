#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	cout<<"Currency Convertor"<<endl;
	int a = 1;
	char op;
	while(a==1){
	
	double dollars;
	double ruppees;
	double jamaica;
	double pounds;
	double euros;
	double can_dollar;
	double riyal;

	cout<<"Enter your dollars:"<<endl;
	cin>>dollars;
	ruppees = dollars * 166.69;
	jamaica = dollars * 143.45;
	pounds = dollars * 0.80;
	euros = dollars * 0.88;
	can_dollar = dollars * 1.36;
	riyal = dollars * 3.75; 
	cout<<"Your Pakistani Rupees: "<<ruppees<<" Rs"<<endl;
	cout<<"Your Jamaican Dollars: "<<jamaica<<" Dollars"<<endl;
	cout<<"Your Pounds Streling: "<<pounds<<" Pounds"<<endl;
	cout<<"Your European Euros: "<<euros<<" Euros"<<endl;
	cout<<"Your Canadian Dollars: "<<can_dollar<<" Canadian Dollars"<<endl;
	cout<<"Your Saudian Riyals: "<<riyal<<" Riyals"<<endl;
	
	cout<<endl<<endl;
	cout<<"Would you like to loop again(y/n)?"<<endl;
	cin>>op;
	if(op=='y'|op=='Y'){
		a=1;
	}
	else{
		a=0;
	}	
}
	return 0;
}
