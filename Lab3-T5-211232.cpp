#include <iostream>

using namespace std;

int main() 
{
	double num1,num2,num3,num4;
	cout<<"\n\n\t\tEnter first Number: "; cin>>num1;
	cout<<"\n\t\tEnter second Number: "; cin>>num2;
	cout<<"\n\t\tEnter third Number: "; cin>>num3;
	cout<<"\n\t\tEnter fourth Number: "; cin>>num4;
	cout<<endl<<endl;
	cout<<"********************************************************\n\n";
	if (num1<num2&&num1<num3&&num1<num4)
	{
		cout<<"\t\tThe smallest number= "<<num1<<endl;
	}
    if (num2<num1&&num2<num3&&num2<num4)
	{
		cout<<"\t\tThe smallest number= "<<num2<<endl;
	}
	if (num3<num2&&num3<num1&&num3<num4)
	{
		cout<<"\t\tThe smallest number= "<<num3<<endl;
	}
	if (num4<num2&&num4<num3&&num4<num1)
	{
		cout<<"\t\tThe smallest number= "<<num4<<endl;
	}
	

	
	return 0;
}
