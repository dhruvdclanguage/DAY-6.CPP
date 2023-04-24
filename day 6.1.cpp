#include<iostream>
using namespace std;
class Dhruv;

class prajay {
	private:
		
		int HH;
		int MM;
		int SS;
		
	friend void Dhairya(prajay,Dhruv);	
		
};

class Dhruv {
	private:
		
		int HH;
		int MM;
		int SS;
	
	friend void Dhairya(prajay,Dhruv);
		
};

void Dhairya (prajay a , Dhruv b){	
	a.HH = 2;
	a.MM = 60;
	a.SS = 30;
	
	b.HH = 3;
	b.MM = 40;
	b.SS = 20;
	
	cout<<"prajay : "<<a.HH<<endl;
	cout<<"prajay : "<<a.MM<<endl;
	cout<<"prajay : "<<a.SS<<endl;
	
	cout<<"Dhruv : "<<b.HH<<endl;
	cout<<"Dhruv : "<<b.MM<<endl;
	cout<<"Dhruv : "<<b.SS<<endl;
	
	cout<<endl<<endl;
	
	cout<<"Time : "<<a.HH+b.HH<<"/"<<a.MM+b.MM<<"/"<<a.SS+b.SS<<endl;
	
}

int main(){	
	prajay obj1;
	Dhruv obj2;
	
	Dhairya(obj1,obj2);
	
			
	return 0 ;
}
