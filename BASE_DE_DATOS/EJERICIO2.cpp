#include<iostream>
using namespace std;
int main()
{
	int x,i=0,c=0;
	cout<<"Digite un numero: "; cin>>x;
	while (i<=x)
	{
		i=i+1;
		if(x%i == 0)
		{
			c=c+1;
		}
	}
	if(c==2){
		cout<<"El numero es primo";
	}
	else{
		cout<<"El numero no es primo";
	}
}