
//My name is Ahsan Ali. BSCS Section(D)

#include <iostream>
using namespace std;
int main()  
{
	int a,b;
	char choice;
	while(true)
	{
		cout<<"Enter a=";
		cin>>a;
		cout<<"Enter b=";
		cin>>b;
		cout<<"Use choice=";
		cin>>choice;
		if(choice=='+')
		cout<<"the sum of "<<a<<" and "<<b<<"="<<a+b<<endl;
		else
		if(choice=='-')
		cout<<"the substraction of "<<a<<" and "<<b<<"="<<a-b<<endl;  
	    else
	    if(choice=='*')
	    cout<<"the product of "<<a<<" and "<<b<<"="<<a*b<<endl;
	    else
	    if(choice=='/')
	    cout<<"the division of "<<a<<" and "<<b<<"="<<a/b<<endl;
	    else
	    if(choice=='%')
	    cout<<"the % of "<<a<<" and "<<b<<"="<<a%b<<endl;
	    else
	    break;
	}
	cout<<"Math Error";
	}
 
