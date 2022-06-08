#include <iostream>
#include <cmath>
#include <iomanip>
#include <conio.h>
using namespace std;
void Charge();
void Charge2();
void Stars();
void Error();
int main()
{
	int choice;
	REPEAT:
		cout<<"\t\t";
		Stars();
		cout<<"\n\t\t\t E-levy Calculator\n";
		cout<<"\t\t";
		Stars();
		cout<<"\n\t E-levy is 1.5% on all daily transactions above 100cedis\n";
		cout<<"\n1. Input 1 and hit Enter if you have already made transactions above GHC100 today\n";
		cout<<"\n2. Input 2 and hit Enter if no transactions have been today\n";
		if(cin>>choice)
		
		while((choice==0)||(choice==1)||(choice==2)||(choice>=3))
		{
			if (choice==1)
			{
				system("cls");
				Charge();
				goto REPEAT;
			}
			else if (choice==2)
			{
				system("cls");
				Charge2();
				goto REPEAT;
			}
			else if ((choice==0)||(choice>-3))
			{
				system("cls");
				Error();
				goto REPEAT;
			}
			return 0;
		}
}


	void Charge()
	{	
	double amount;
	double transact;
	double sum;
	double total;
	double levy = 0.015;
	double tot;
	cout<<"How much have you transacted/sent today?\n";
	cin>>amount;
	cout<<"How much would you like to transact/send?\n";
	cin>>sum;
	 if((amount>100)&&(sum>0))
	{
		cout<<fixed;
		cout<<setprecision(4);
		total=amount+sum;
		tot=total-100;
		transact = sum*levy;
		cout<<"E-levy is: GHC"<<transact<<endl;
		cout<<"Your total transaction charge is: GHC"<<transact+sum<<endl;
	}
	else if ((amount>0)&&(sum>=100))
	{
		cout<<fixed;
		cout<<setprecision(4);
		total=amount+sum;
		tot=total-100;
		transact = tot*levy;
		cout<<"E-levy is: GHC"<<transact<<endl;
		cout<<"Your total transaction charge is: GHC"<<transact+sum<<endl;
	}
	
	else if((amount>=0)&&(sum<100))
	{
		cout<<"N0 E-levy applies\n";
	}
	
}
void Stars()
{
	int i;
	for(i=1;i<=30;i++)
	cout<<"*";
}
void Error()
{
	cout<<"Wrong Input....................\n\n";
	cout<<"Please input again\n\n";
	main();
}
void Charge2()
{	
	double amount;
	double levy = 0.015;
	double tot;
	double transact;
	cout<<"E-levy is 1.5% on all transactions above 100cedis\n\n";
	cout<<"Enter amount to transact/send:\n";
	cin>>amount;
	
	if(amount>100)
	{
		cout<<fixed;
		cout<<setprecision(4);
		tot=amount-100;
		transact = tot*levy;
		cout<<"E-levy is: GHC"<<transact<<endl;
		cout<<"Your total transaction charge is: GHC"<<transact+amount<<endl;
	}
	else if(amount<=100)
	{
		cout<<"No E-levy applies\n";
	}
	else
	{
		Error();
	}
}

