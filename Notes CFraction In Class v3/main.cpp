#include "CFraction.h"

int main()

{
	//3 constructors
	CFraction a(1,2), b(2,3), c;
	CFraction d = b;//this line doesnt call assignment operatory, assignment op only called when assigning two obj, in this case d has not been constructed so it is not yet an obj -- MUST CONSTRUCT 2 OBJ TO CALL BOTH OBJ
	CFraction e = 3; 
	c = a; //creates shallow copy
	
	e = a;
	a +=e;
	c = e+b;

/*
	if(a==e) //how to call the non-member function?  if(operator==(a,b))
		cout << "a=e" << endl;
	if(b!=a)
		cout << "a!=e" << endl;
*/	

	cout<<"(1,2) a: " << a << endl;
	cout<<"(2,3) b: " << b << endl;
	cout<<"(c=a) c: " << c << endl;
	cout<<"(d=b) d: " << d << endl;
	cout<<"(e=3) e: " << e << endl;



	string exit;
	getline(cin,exit);
	//exit normal
	return 0;
}