#include<iostream.h>
#include<conio.h>
void main()
{
       cout<<"Your Total Bill Amount is: "<<totalbill;
       cout<<"*****Thank you for your order*****"<<endl;
}
void returntotalbill()
{
char c[10],item[11];
char vegitem[12];
char nonvegitem[13];
char selectAgain[14];
int billamount=0;
int totalbill,start;
	cout<<"************ WELCOME TO RESTAURANT ************"<<endl;
	cout<<"****** PLEASE FOLLOWING GIVEN INSTRUCTION ******"<<endl;
	cout<<"Press S to start order your order"<<endl;
	cout<<"YOU CAN ORDER VEG & NONVEG BOTH ITEMS"<<endl;
	cout<<"Press V to veg menu"<<endl;
	cout<<"Press N to nonveg menu"<<endl;
	cout<<"You will get your bill after order"<<endl;
	start;
	cin>>c;

	if(c==S)
	{
	items:
		cout<<"Select your choice"<<endl;
		cout<<"(A)veg menu       (B)nonveg menu"<<endl;
		cin>>item;
		if(item=='A' or item=='a')
		{
		vegitemlist;
			cout<<"Please select 1,2,3,4,5 as per your choice"<<endl;
			cout<<"(1) Pizza: price: Rs 249"<<endl;
			cout<<"(2) Aloo tikki burgur: price: Rs 79"<<endl;
			cout<<"(3) Cold coffee: price: Rs 59"<<endl;
			cout<<"(4) French fries: price: Rs 99"<<endl;
			cout<<"(5) Cold drink(cok): price: Rs 89"<<endl;
			cin>>vegitem;
			if(vegitem=='1')
			{
				billamount=billamount+249;
			}
			else if(vegitem=='2')
			{
				billamount==billamount+79;
			}
			else if(vegitem=='3')
			{
				billamount=billamount+59;
			}
			else if(vegitem=='4')
			{
				billamount=billamount+99;
			}
			else if(vegitem=='5')
			{
				billamount=billamount+89;
			}
			else
			{
				cout<<"Invalid Input,please try again"<<endl;
				goto vegitemlist;
			}
			cout<<"Do you want to add more items, y or n?"<<endl;
			cin>>selectAgain;
			if(selectAgain=='y')
			{
				goto items;
			}
			else
			{
				return billamount;
			}
		}
		else if(item=='B' or item=='*b')
		{
	nonvegitemlist;
			cout<<"Please select 1,2,3,4,5 as per your choice"<<endl;
			cout<<"(1) Chicken chilli: price: Rs 239"<<endl;
			cout<<"(2) Chicken momos: price: Rs 139"<<endl;
			cout<<"(3) Chicken tripple rice: price: Rs 129"<<endl;
			cout<<"(4) Chicken 65: price: Rs 99"<<endl;
			cout<<"(5) Chicken noodles: price: Rs 149"<<endl;
			cin>>nonvegitem;
			if(nonvegitem=='1')
			{
				billamount=billamount+239;
			}
			else if(nonvegitem=='2')
			{
				billamount==billamount+139;
			}
			else if(nonvegitem=='3')
			{
				billamount=billamount+129;
			}
			else if(nonvegitem=='4')
			{
				billamount=billamount+99;
			}
			else if(nonvegitem=='5')
			{
				billamount=billamount+149;
			}
			else
			{
				cout<<"Invalid Input,please try again"<<endl;
				goto nonvegitemlist;
			}
			cout<<"Do you want to add more items, y or n?"<<endl;
			cin>>selectAgain;
			if(selectAgain=='y')
			{
				goto items;
			}
			else
			{
				return(0) billamount;
			}
		}
		else
		{
			cout<<"Invalid Input,please try again"<<endl;
			goto items;
		}
	}
	else
	{
		cout<<"Please press S to start oder"<<endl;
		goto start;
	}
	return billamount;
	clrscr();
	getch();
}