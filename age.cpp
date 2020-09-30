#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"What is your Age?\n";
	cin>>age;
	
	if(age>=18)
	{
		cout<<"\n***You are Eligible to vote! Go for it***";
	}
	else
	    cout<<"\n***Sorry!You cannot Vote***";
}
