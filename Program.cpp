#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
#include <conio.h>
#include <windows.h>
using namespace std;
const int FirstCOLS = 4;
const int FirstROWS = 5;
const int CoachCOLS = 6;
const int CoachROWS = 5;
void show(); 
void con();
void hotel();
void sheba();
void book();
void menu();
void availflights();
void food();
void special_offers();
void seatChart(double FirstArray[FirstROWS][FirstCOLS], double Coach1Array [CoachROWS][CoachCOLS], 
double Coach2Array[CoachROWS][CoachCOLS]);
void registe();
void displayMenu(double, double FirstArray[FirstROWS][FirstCOLS], double Coach1Array[CoachROWS][CoachCOLS],
double Coach2Array[CoachROWS][CoachCOLS]);
using namespace std;
int main()
{
	int a,e,ftype;
	char b,c,d,s,z;
	double choice = 0;

const int FIRSTCLASS = 1,
FIRSTCOACH= 2,
SECONDCOACH = 3,
DISPLAYSEAT = 4,
EXIT = 5;


double FirstArray[FirstROWS][FirstCOLS];
double Coach1Array[CoachROWS][CoachCOLS]; 
double Coach2Array[CoachROWS][CoachCOLS];
	do
	{
		
		system("color 8B");
 cout<<"\n\n\n\n\n\n\n\n\n\n\t\t     WELCOME TO AIRWAYS RESERVATION SYSTEM";
 Sleep(2500);
 system ("cls");
 cout<<"\n\n\n\n\n\n\n\t\t          Developed by :";
 Sleep(500);
  
  Sleep(500);
  cout<<"\n\n\n\t\t                         Kidist Workeye";
 Sleep(3000);
 system("cls");
        system("cls");
		cout<<"\n\n\n\nWELCOME TO ETHIOPIAN AIRLINES";
		cout<<"\n\n\t01. AVAILABLE FLIGHTS";
		cout<<"\n\n\t02. BOOK A FLIGHT";
		cout<<"\n\n\t03. SHEBA MILES";
		cout<<"\n\n\t04. HOTEL RESERVATION";
		cout<<"\n\n\t05. SPECIAL OFFERS";
		cout<<"\n\n\t06. EXIT";
		cout<<"\n\n\tSelect Your Option (1-6) ";
		cin>>a;
		system("cls");
		switch(a)
		{
		case 1:
		    cout<<"\n\n\n\t\t\t AVAILABLE FLIGHTS";
			availflights();
			break;
		case 2:
		    cout<<"\n\n\n\t\t\t BOOK A FLIGHT";
			book();
			break;
		case 3:
		    sheba();
			break;
		case 4:
		    cout<<"\n\n\n\t\t\t HOTEL RESERVATION";
			hotel();
			break;
		case 5:special_offers();
			break;
			
		 case 6:
			cout<<"\n\n\tGoodbye\n";
			return 1;
			break;
		 default :cout<<"\a";
		}
		cin.ignore();
		cin.get();
	}while(a!='3');
	return 0;
}
int exit()
{
cout<<"\n\n\tGoodbye\n";
			return 0;
			
}
void menu()
{
int a,e,ftype;
	char b,c,d;
	double choice = 0;
double FirstArray[FirstROWS][FirstCOLS];
double Coach1Array[CoachROWS][CoachCOLS]; 
double Coach2Array[CoachROWS][CoachCOLS];
do
	{
		system("cls");
		cout<<"\n\n\n\nWELCOME TO ETHIOPIAN AIRLINES";
		cout<<"\n\n\t01. AVAILABLE FLIGHTS";
		cout<<"\n\n\t02. BOOK A FLIGHT";
		cout<<"\n\n\t03. SHEBA MILES";
		cout<<"\n\n\t04. HOTEL RESERVATION";
		cout<<"\n\n\t05. SPECIAL OFFERS";
		cout<<"\n\n\t06. EXIT";
		cout<<"\n\n\tSelect Your Option (1-6) ";
		cin>>a;
		system("cls");
		switch(a)
		{
		case 1:
		    cout<<"\n\n\n\t\t\t AVAILABLE FLIGHTS";
			availflights();
			break;
		case 2:
		    cout<<"\n\n\n\t\t\t BOOK A FLIGHT";
			book();
			break;
		case 3:
		    sheba();
			break;
		case 4:
		    cout<<"\n\n\n\t\t\t HOTEL RESERVATION";
			hotel();
			break;
		case 5:special_offers();
			break;
			
		 case 6:
			cout<<"\n\n\tGoodbye\n";
			exit(1);
			break;
		 default :cout<<"\a";
		}
		cin.ignore();
		cin.get();
	}while(a!='3');
	
}
void special_offers()
{
int s,z,w;
cout<<"\n\n\n\t\t\t SPECIAL OFFERS";
			cout<<"\n 1. May";
			cout<<"\n 2. June";
			cout<<"\n 3. July";
			cout<<"\n 4. August  ";
			cin>>s;
			switch (s)
			{
			case 1: cout<<"\n\n\t\tYOU HAVE CHOOSEN MAY";
			        cout<<"\n May 02 - 09 ------- ";
					cout<<" \n      Pay for your flight, we pay for your Hotel as you go to Madrid";
					cout<<"\n May 23 - 30 -------";
					cout<<"\n        Go see Adwa with a +1 for half the price";
					cout<<"\n1. Madrid ";
					cout<<"\n2. Adwa ";
					cin>>z;
					switch(z)
					{
					case 1: cout<<"\n FLIGHT UNAVAILABLE";
					menu();break;
					case 2: cout<<"\n FLIGHT FULL ";
					menu();break;
					}break;
			case 2: cout<<"\n June 06 - 23 -------- ";
			        cout<<"\n  There is nothing better than having a glass of wine in Vince, go there?";
			        cout<<"\n FLIGHT AVAILABLE ";
					cout<<"\n\n 1. Book";
					cout<<"\n 2. Go back ";
					cin>>w;
					switch(w)
					{
					case 1: registe();break;
					case 2: menu();break;
					}
					break;
					
			case 3: cout<<"\n July 05 - 30 ---------";
			        cout<<"\n It's Summer, why not go to the Bahamas and spend unforgetable time there";
			        cout<<"\n FLIGHT AVAILABLE ";
					cout<<"\n\n 1. Book";
					cout<<"\n 2. Go back";
					cin>>w;
					switch(w)
					{
					case 1: registe();break;
					case 2: menu();break;
					}
					break;
					
			case 4: cout<<"\n August 23-27 --------- ";
			        cout<<"   \nIt is the Japanesse Cherry Blossm season, see the captivating scene with your own eyes";
			        cout<<"\n FLIGHT AVAILABLE ";
					cout<<"\n\n 1. Book";
					cout<<"\n 2. Go back";
					cin>>w;
					switch(w)
					{
					case 1: registe();break;
					case 2: menu();break;
					}
					break;
			}
}
 
void sheba()
{
int a,m,y,r;
string b,c,d;
cout<<"\n\n\n\n\t\t\t SHEBA MILES";
cout<<"\n1. Previous Member ";
cout<<"\n2. Create Account ";
cin>>a;
switch(a)
{
case 1: cout<<"\n Email: ";
        cin>>b;
		cout<<"\n Password : ";
		cin>>r;
		if(r==2)
		{
		cout<<"\n Account Accessed";
		cout<<"\n You have 23,564 points";
		cout<<"\n 1. Redeem points";
		cout<<"\n 2. Book flight and get points";
		cout<<"\n 3. Exit";
		cin>>y;
		switch(y)
		{
		case 1: cout<<"\nWith your points";
		        cout<<"\n You can fly anywhere";
				cout<<"\n Book flight";
				book();break;
		case 2: book();break;
		case 3: exit (1);break;
		}
		}
		
		else
		{
		cout<<"Acess Denied";
		exit(1);
		}break;
		
case 2: cout<<"Enter your Email"<<endl;
		cin>>c;
		cout<<"Password : ";
		cin>>d;
		cout<<"Account Created";
		cout<<"\n 1. BOOK FLIGHT";
		cout<<"\n 2. Exit";
		cin>>m;
		switch(m)
		{
		case 1: book();break;
		case 2: exit(1);break;
		}break;
default: cout<<"NOT AN OPTION";
}
}
void hotel()
{
int a,d,e,c;
string lname,fname,b,bnk;
cout<<"\n\t\t Flight number ";
cin>>b;
cout<<"\n1. Sheraton Hotel";
cout<<"\n2. Hilton";
cout<<"\n3. Intercontinental Hotel";
cout<<"\n4. Elili Hotel"<<endl;
cin>>a;
switch(a)
{

case 1: 
        cout<<"\n\t\t First Name  ";
        cin>>fname;
        cout<<"\n\t\t Last Name  ";
        cin>>lname; 
		cout<<"\nChoose room type";
		cout<<"\n 1. Presediential Suite";
		cout<<"\n 2. Executive Suite";
		cout<<"\n 3. Bunglo"<<endl;
		cin>>c;
		switch(c)
		{
		case 1: cout<<"\n\n\n\t\t Predendiential Suites";
		        cout<<"\n\n\n\n\n\t\t AVAILABLE";
				cout<<"\n Price : 2,300ETB/NIGHT";
				cout<<"\n1. Book";
				cout<<"\n2. Cancel"<<endl;
				cin>>e;
				
				switch(e)
				{
				case 1: cout<<"\nEnter Bank Account number ";
                        cin>>bnk;
                        cout<<"\nSuccessful!!!";
						break;
				case 2: exit(1);
				default: cout<<"\nNOT AN OPTION";break;
				}	 	 
		break;
				
		
		case 2: cout<<"\n\n\n\t\t Executive Suites";
		        cout<<"\n\n\n\n\n\t\t AVAILABLE";
				cout<<"\n Price : 1,000ETB/NIGHT";
				cout<<"\n1. Book";
				cout<<"\n2. Cancel"<<endl;
				cin>>e;
				switch(e)
				{
				case 1: cout<<"\nEnter Bank Account number ";
                        cin>>bnk;
                        cout<<"\nSuccessful!!!";break;
				case 2: exit(1);
				default: cout<<"\nNOT AN OPTION";break;
				}	 	 
		break;
		
		
		case 3:  cout<<"\n\n\n\t\t BUNGLO";
		        cout<<"\n\n\n\n\n\t\t AVAILABLE";
				cout<<"\n Price : 800ETB/NIGHT";
				cout<<"\n1. Book";
				cout<<"\n2. Cancel"<<endl;
				cin>>e;
				switch(e)
				{
				case 1: cout<<"\nEnter Bank Account number ";
                        cin>>bnk;
                        cout<<"\nSuccessful!!!";break;
				case 2: exit(1);
				default: cout<<"\nNOT AN OPTION";break;
				}	 	 
	    break;
		}break;
case 2: cout<<"\n\n\n\t\t HILTON HOTEL";
        cout<<"\n\t\t First Name  ";
        cin>>fname;
        cout<<"\n\t\t Last Name  ";
        cin>>lname; 
		cout<<"\nChoose room type";
		cout<<"\n 1. Presediential Suite ";
		cout<<"\n 2. Executive Suite";
		cout<<"\n 3. Bunglo"<<endl;
		cin>>c;
		switch(c)
		{
		case 1: cout<<"\n\n\n\t\t Predendiential Suites";
		        cout<<"\n\n\n\n\n\t\t UNAVAILABLE";
				break;
		case 2: cout<<"\n\n\n\t\t Executive Suites";
		        cout<<"\n\n\n\n\n\t\t AVAILABLE";
				cout<<"\n Price : 8000ETB/NIGHT";
				cout<<"\n1. Book";
				cout<<"\n2. Cancel"<<endl;
				cin>>e;
				if(e==1)
				{
				cout<<"\nEnter Bank Account number";
cin>>bnk;
cout<<"Successful!!!";
				}
				else if(e==2)
				{
				exit(1);
				}
				else
				{
				cout<<"\nNOT AN OPTION";
				}break;
		case 3:  cout<<"\n\n\n\t\t BUNGLO";
		        cout<<"\n\n\n\n\n\t\t All rooms are available";
				cout<<"\n Price : 600ETB/NIGHT";
				cout<<"\n1. Book";
				cout<<"\n2. Cancel"<<endl;
				cin>>e;
				if(e==1)
				{
				cout<<"\nEnter Bank Account number ";
cin>>bnk;
cout<<"Successful!!!";
				}
				else if(e==2)
				{
				exit(1);
				}
				else
				{
				cout<<"\nNOT AN OPTION";
				}break;
		}break;
case 3: cout<<"\n\n\n\t    INTERCONTINENTAL HOTEL";
        cout<<"\n\t\t First Name  ";
        cin>>fname;
        cout<<"\n\t\t Last Name  ";
        cin>>lname; 
		cout<<"\nChoose room type";
		cout<<"\n 1. Presediential Suite";
		cout<<"\n 2. Bunglo"<<endl;
		cin>>c;
		switch(c)
		{
		case 1: cout<<"\n\n\n\t\t Predendiential Suites";
		        cout<<"\n\n\n\n\n\t\t AVAILABLE";
				cout<<"\n Price : 2,300ETB/NIGHT";
				cout<<"\n1. Book";
				cout<<"\n2. Cancel"<<endl;
				cin>>e;
				if(e==1)
				{
				cout<<"\nEnter Bank Account number ";
cin>>bnk;
cout<<"Successful!!!";
				}
				else if(e==2)
				{
				exit(1);
				}
				else
				{
				cout<<"\nNOT AN OPTION";
				}break;
		case 2: cout<<"\n\n\n\t\t BUNGLO";
		        cout<<"\n\n\n\n\n\t\t All rooms are available";
				cout<<"\n Price : 800ETB/NIGHT";
				cout<<"\n1. Book";
				cout<<"\n2. Cancel"<<endl;
				cin>>e;
				if(e==1)
				{
				cout<<"\nEnter Bank Account number ";
cin>>bnk;
cout<<"Successful!!!";
				}
				else if(e==2)
				{
				exit(1);
				}
				else
				{
				cout<<"\nNOT AN OPTION";
				}break;
		}break;
case 4: cout<<"\n\n\n\t\t ELILI HOTEL";
        cout<<"\n\n\n\t\t First Name  ";
        cin>>fname;
        cout<<"\n\t\t Last Name  ";
        cin>>lname; 
		cout<<"\nChoose room type";
		cout<<"\n 1. Executive Suite";
		cout<<"\n 2. Bunglo"<<endl;
		cin>>c;
		switch(c)
		{
		
		case 1: cout<<"\n\n\n\t\t Executive Suites";
		        cout<<"\n\n\n\n\n\t\t Three rooms are available";
				cout<<"\n Price : 1,000ETB/NIGHT";
				cout<<"\n1. Book";
				cout<<"\n2. Cancel"<<endl;
				cin>>e;
				if(e==1)
				{
				cout<<"\nEnter Bank Account number ";
cin>>bnk;
cout<<"Successful!!!";
				}
				else if(e==2)
				{
				exit(1);
				}
				else
				{
				cout<<"\nNOT AN OPTION";
				}break;
		case 2:  cout<<"\n\n\n\t\t BUNGLO";
		        cout<<"\n\n\n\n\n\t\t All rooms are available";
				cout<<"\n Price : 800ETB/NIGHT";
				cout<<"1. Book";
				cout<<"2. Cancel"<<endl;
				cin>>e;
				if(e==1)
				{
				cout<<"\nEnter Bank Account number ";
                cin>>bnk;
                cout<<"\nSuccessful!!!";
				
				}
				else if(e==2)
				{
				exit(1);
				}
				else
				{
				cout<<"\nNOT AN OPTION";
				}break;
		}break;
default: cout<<"\nNOT AN OPTION";break;
}


}
void availflights()
{
int ftype,fltype,fitype,c,a;
cout<<"\n 1. Local Flights     ";
cout<<"\n 2. International Flights     ";
cin>>ftype;
switch(ftype)
{
case 1:system("cls");
       cout<<"\n\n\n\t\t\t\t    LOCAL FLIGHTS";
       cout<<"\n\n\n\tNumber"<<setw(10)<<"From"<<setw(15)<<"To"<<setw(10)<<"            Date"<<setw(15)<<" Time"<<setw(15);
	   cout<<"\n\t__________"<<setw(10)<<"____________________"<<setw(10)<<"______________"<<setw(10)<<"__________________"<<setw(15)<<endl;
	   cout<<"\n\t  01"<<setw(15)<<"Addis Ababa"<<setw(13)<<" Mekele"<<setw(15)<<"        12/05/2018"<<setw(15)<<" 12:30 PM  "<<setw(15);
	   cout<<"\n\t  02"<<setw(15)<<"Adama      "<<setw(12)<<"Jimma"<<setw(15)<<"         12/05/2018"<<setw(15)<<"06:25 AM  "<<setw(15);
	   cout<<"\n\t  03"<<setw(15)<<"Addis Ababa"<<setw(12)<<"Awasa"<<setw(15)<<"         12/05/2018"<<setw(15)<<"11:50 AM  "<<setw(15);
	   cout<<"\n\t  04"<<setw(15)<<"Addis Ababa"<<setw(16)<<"Bahir Dar"<<setw(15)<<"   12/05/2018"<<setw(15)<<"07:35 PM  "<<setw(15);
	   cout<<"\n\t  05"<<setw(15)<<"Mekele     "<<setw(19)<<"  Addiss Ababa"<<setw(12)<<"12/05/2018"<<setw(15)<<"04:20 PM  "<<setw(15);
	   cout<<"\n\t  06"<<setw(15)<<"Addis Ababa"<<setw(12)<<" Jimma"<<setw(15)<<"         12/05/2018"<<setw(15)<<"09:40 AM  "<<setw(15);
	   cout<<"\n\t  07"<<setw(15)<<"Awasa      "<<setw(18)<<"Addis Ababa"<<setw(13)<<" 12/05/2018"<<setw(15)<<"10:00 PM  "<<setw(15);
	   cout<<"\n\t  08"<<setw(15)<<"Addis Ababa"<<setw(13)<<"Mekele"<<setw(15)<<"        12/05/2018"<<setw(15)<<"02:30 PM  "<<setw(15);
	   cout<<"\n\t  09"<<setw(15)<<"Bahir Dar  "<<setw(18)<<"Addis Ababa"<<setw(13)<<" 12/05/2018"<<setw(15)<<"02:05 PM  "<<setw(15);
	   cout<<"\n\t  10"<<setw(15)<<"Addis Ababa"<<setw(12)<<"Jimma"<<setw(15)<<"         12/05/2018"<<setw(15)<<"04:10 AM  "<<setw(15);
	   cout<<"\n\n\n 1.Book Flight     ";
	   cout<<"\n 2.Main Menu       ";
	   cin>>a;
	   switch (a)
	   {
	   case 1: book();break;
	   case 2: menu();break;
	   default: cout<<"NOT AN OPTION";break;
	   }
	   system("cls");
	   break;
	   
case 2:system("cls");
       cout<<"\n\n\n\n\t\t\t  INTERNATIONAL FLIGHTS";	  
       cout<<"\n\n\n\n\tNumber"<<setw(10)<<"From"<<setw(15)<<"To"<<setw(17)<<"            Date"<<setw(16)<<"     Time"<<setw(15);
	   cout<<"\n\t__________"<<setw(10)<<"____________________"<<setw(10)<<"______________"<<setw(10)<<"____________________"<<setw(15)<<endl;
	   cout<<"\n\t  01"<<setw(15)<<"Bruselles"<<setw(17)<<"    Singapore"<<setw(17)<<"    12/05/2018"<<setw(15)<<"12:30 PM  "<<setw(15);
	   cout<<"\n\t  02"<<setw(19)<<"Alegris      "<<setw(11)<<"  Bangkok"<<setw(19)<<"     12/05/2018"<<setw(15)<<"06:25 AM  "<<setw(15);
	   cout<<"\n\t  03"<<setw(15)<<"Hong Konk"<<setw(18)<<"   Manchester"<<setw(16)<<"     12/05/2018"<<setw(15)<<"11:50 AM  "<<setw(15);
	   cout<<"\n\t  04"<<setw(15)<<"St. Louis"<<setw(19)<<"  Addis Ababa"<<setw(15)<<"   12/05/2018"<<setw(15)<<"07:35 PM  "<<setw(15);
	   cout<<"\n\t  05"<<setw(20)<<"Stockholm     "<<setw(11)<<"  Santiago"<<setw(18)<<"12/05/2018"<<setw(15)<<"04:20 PM  "<<setw(15);
	   cout<<"\n\t  06"<<setw(13)<<"Toronto"<<setw(21)<<"    Addis Ababa"<<setw(15)<<"     12/05/2018"<<setw(15)<<"09:40 AM  "<<setw(15);
	   cout<<"\n\t  07"<<setw(18)<<"Munich      "<<setw(10)<<"     London"<<setw(20)<<" 12/05/2018"<<setw(15)<<"10:00 PM  "<<setw(15);
	   cout<<"\n\t  08"<<setw(17)<<"Addis Ababa"<<setw(6)<<"      Cairo"<<setw(21)<<"    12/05/2018"<<setw(15)<<"02:30 PM  "<<setw(15);
	   cout<<"\n\t  09"<<setw(14)<<"Sydney  "<<setw(17)<<"      Istanbul"<<setw(18)<<" 12/05/2018"<<setw(15)<<"02:05 PM  "<<setw(15);
	   cout<<"\n\t  10"<<setw(20)<<"Rio de Janeiro"<<setw(5)<<"   Lima"<<setw(22)<<"     12/05/2018"<<setw(15)<<"04:10 AM  "<<setw(15);
	   cout<<"\n\n 1.Book Flight   ";
	   cout<<"\n 2.Main Menu     ";
	   cin>>a;
	   switch (a)
	   {
	   case 1: book();break;
	   case 2: menu();break;
	   default: cout<<"NOT AN OPTION";break;
	   }
	   system("cls");
	   break;
default:"NOT AN OPTION";
}
}

void food()
{
int a,b;
string c;
system ("cls");
cout<<"\n\n\n FOOD PLAN";
cout<<"\n1. Vegan";
cout<<"\n2. Vegeterian";
cout<<"\n3. Neither";
cin>>a;
cout<<"\n\n\nAny Food Alergies?";
cout<<"\n1. YES";
cout<<"\n2. NO";
cin>>b;
switch(b)
{
case 1: cout<<"\n\n\n What is your Alergy?";
        cin>>c;break;
case 2: cout<<"\n Your Record has been saved";break;
}
system ("cls");
}

void book()
{
int ftype,fltype,fitype,c;
cout<<"\n Press one for Local Flights";
cout<<"\n Press two for International Flights";
cin>>ftype;
switch(ftype)
{
case 1: cout<<"\n\n\n\t\t\t\t LOCAL FLIGHTS";
       cout<<"\n\n\n\tNumber"<<setw(10)<<"From"<<setw(15)<<"To"<<setw(10)<<"            Date"<<setw(15)<<" Time"<<setw(15);
	   cout<<"\n\t__________"<<setw(10)<<"____________________"<<setw(10)<<"______________"<<setw(10)<<"__________________"<<setw(15)<<endl;
	   cout<<"\n\t  01"<<setw(15)<<"Addis Ababa"<<setw(13)<<" Mekele"<<setw(15)<<"        12/05/2018"<<setw(15)<<" 12:30 PM  "<<setw(15);
	   cout<<"\n\t  02"<<setw(15)<<"Adama      "<<setw(12)<<"Jimma"<<setw(15)<<"         12/05/2018"<<setw(15)<<"06:25 AM  "<<setw(15);
	   cout<<"\n\t  03"<<setw(15)<<"Addis Ababa"<<setw(12)<<"Awasa"<<setw(15)<<"         12/05/2018"<<setw(15)<<"11:50 AM  "<<setw(15);
	   cout<<"\n\t  04"<<setw(15)<<"Addis Ababa"<<setw(16)<<"Bahir Dar"<<setw(15)<<"   12/05/2018"<<setw(15)<<"07:35 PM  "<<setw(15);
	   cout<<"\n\t  05"<<setw(15)<<"Mekele     "<<setw(19)<<"  Addiss Ababa"<<setw(12)<<"12/05/2018"<<setw(15)<<"04:20 PM  "<<setw(15);
	   cout<<"\n\t  06"<<setw(15)<<"Addis Ababa"<<setw(12)<<" Jimma"<<setw(15)<<"         12/05/2018"<<setw(15)<<"09:40 AM  "<<setw(15);
	   cout<<"\n\t  07"<<setw(15)<<"Awasa      "<<setw(18)<<"Addis Ababa"<<setw(13)<<" 12/05/2018"<<setw(15)<<"10:00 PM  "<<setw(15);
	   cout<<"\n\t  08"<<setw(15)<<"Addis Ababa"<<setw(13)<<"Mekele"<<setw(15)<<"        12/05/2018"<<setw(15)<<"02:30 PM  "<<setw(15);
	   cout<<"\n\t  09"<<setw(15)<<"Bahir Dar  "<<setw(18)<<"Addis Ababa"<<setw(13)<<" 12/05/2018"<<setw(15)<<"02:05 PM  "<<setw(15);
	   cout<<"\n\t  10"<<setw(15)<<"Addis Ababa"<<setw(12)<<"Jimma"<<setw(15)<<"         12/05/2018"<<setw(15)<<"04:10 AM  "<<setw(15);
	   cout<<"\n ENTER THE NUMBER ASSIGNED TO THE FLIGHT YOU WANT";
	   cin>>fltype;
	   switch(fltype)
	   {
	   case 1:system("cls");
	          cout<<"\n\t\t\tET21 ----- From ADD to MKL";
	          registe();    
			  system("cls");break; 
	   case 2: system("cls");
	          cout<<"\n\t\t\tET78 ----- From ADA to JIM";
	          registe(); 
			  
			  system("cls");break; 
	   case 3: system("cls");
	          cout<<"\n\t\t\tET57 ----- From ADD to AWA";
	          registe(); 
			  
			  system("cls"); break;
	   case 4: system("cls");
	          cout<<"\n\t\t\tET49 ----- From ADD to BHD";
	          registe(); 
			  system("cls"); break;
	   case 5: system("cls");
	          cout<<"\n\t\t\tET26 ----- From MKL to ADD";
	          registe(); 
			  system("cls"); break;
	   case 6: system("cls");
	          cout<<"\n\t\t\tET04 ----- From ADD to JIM";
	          registe(); 
			  system("cls");break; 
	   case 7: system("cls");
	          cout<<"\n\t\t\tET89 ----- From AWA to ADD";
	          registe(); 
			  system("cls"); break;
	   case 8: system("cls");
	          cout<<"\n\t\t\tET35 ----- From ADD to MKL";
	          registe(); 
			  system("cls"); break;
	   case 9: system("cls");
	          cout<<"\n\t\t\tET34 ----- From BHR to ADD";
	          registe(); 
			  system("cls"); break;
	   case 10: system("cls");
	          cout<<"\n\t\t\tET63 ----- From ADD to JIM";
	          registe(); 
			  system("cls"); break;
		default: cout<<"NOT AN OPTION";break;
			  
	         } 
break;
case 2: cout<<"INTERNATIONAL FLIGHTS";	   
       cout<<"\n\n\n\n\t\t\t  INTERNATIONAL FLIGHTS";	   
       cout<<"\n\n\n\n\tNumber"<<setw(10)<<"From"<<setw(15)<<"To"<<setw(17)<<"            Date"<<setw(16)<<"     Time"<<setw(15);
	   cout<<"\n\t__________"<<setw(10)<<"____________________"<<setw(10)<<"______________"<<setw(10)<<"____________________"<<setw(15)<<endl;
	   cout<<"\n\t  01"<<setw(15)<<"Bruselles"<<setw(17)<<"    Singapore"<<setw(17)<<"    12/05/2018"<<setw(15)<<"12:30 PM  "<<setw(15);
	   cout<<"\n\t  02"<<setw(19)<<"Alegris      "<<setw(11)<<"  Bangkok"<<setw(19)<<"     12/05/2018"<<setw(15)<<"06:25 AM  "<<setw(15);
	   cout<<"\n\t  03"<<setw(15)<<"Hong Konk"<<setw(18)<<"   Manchester"<<setw(16)<<"     12/05/2018"<<setw(15)<<"11:50 AM  "<<setw(15);
	   cout<<"\n\t  04"<<setw(15)<<"St. Louis"<<setw(19)<<"  Addis Ababa"<<setw(15)<<"   12/05/2018"<<setw(15)<<"07:35 PM  "<<setw(15);
	   cout<<"\n\t  05"<<setw(20)<<"Stockholm     "<<setw(11)<<"  Santiago"<<setw(18)<<"12/05/2018"<<setw(15)<<"04:20 PM  "<<setw(15);
	   cout<<"\n\t  06"<<setw(13)<<"Toronto"<<setw(21)<<"    Addis Ababa"<<setw(15)<<"     12/05/2018"<<setw(15)<<"09:40 AM  "<<setw(15);
	   cout<<"\n\t  07"<<setw(18)<<"Munich      "<<setw(10)<<"     London"<<setw(20)<<" 12/05/2018"<<setw(15)<<"10:00 PM  "<<setw(15);
	   cout<<"\n\t  08"<<setw(17)<<"Addis Ababa"<<setw(6)<<"      Cairo"<<setw(21)<<"    12/05/2018"<<setw(15)<<"02:30 PM  "<<setw(15);
	   cout<<"\n\t  09"<<setw(14)<<"Sydney  "<<setw(17)<<"      Istanbul"<<setw(18)<<" 12/05/2018"<<setw(15)<<"02:05 PM  "<<setw(15);
	   cout<<"\n\t  10"<<setw(20)<<"Rio de Janeiro"<<setw(5)<<"   Lima"<<setw(22)<<"     12/05/2018"<<setw(15)<<"04:10 AM  "<<setw(15);
	   cout<<"\n ENTER THE NUMBER ASSIGNED TO THE FLIGHT YOU WANT";
	   cin>>fitype;
	   switch(fitype)
	   {
	   case 1:system("cls");
	          cout<<"\n\t\t\tET45 ----- From BRS to SNG";
	          registe(); 
			  system("cls");break; 
	   case 2: system("cls");
	          cout<<"\n\t\t\tET87 ----- From ALG to BKK";
	          registe(); 
			  system("cls");break; 
	   case 3: system("cls");
	          cout<<"\n\t\t\tET24 ----- From HKK to MAN";
	          registe(); 
			  system("cls"); break;
	   case 4: system("cls");
	          cout<<"\n\t\t\tET44 ----- From STL to ADD";
	          registe(); 
			  system("cls"); break;
	   case 5: system("cls");
	          cout<<"\n\t\t\tET78 ----- From STK to SAN";
	          registe(); 
			  system("cls"); break;
	   case 6: system("cls");
	          cout<<"\n\t\t\tET09 ----- From YZZ to ADD";
	          registe(); 
			  system("cls");break; 
	   case 7: system("cls");
	          cout<<"\n\t\t\tET34 ----- From MCH to LON";
	          registe(); 
			  system("cls"); break;
	   case 8: system("cls");
	          cout<<"\n\t\t\tET23 ----- From ADD to CAR";
	          registe(); 
			  system("cls"); break;
	   case 9: system("cls");
	          cout<<"\n\t\t\tET67 ----- From SYN to IST";
	          registe(); 
			  system("cls"); break;
	   case 10: system("cls");
	          cout<<"\n\t\t\tET11 ----- From RIO to LIM";
	          registe(); 
			  system("cls"); break;
		default: cout<<"NOT AN OPTION";break;
	   }break;
	default: cout<<"NOT AN OPTION";break;
}	       
}

void registe()
{ 
const int FIRSTCLASS = 1,
FIRSTCOACH= 2,
SECONDCOACH = 3,
DISPLAYSEAT = 4,
EXIT = 5;


double FirstArray[FirstROWS][FirstCOLS];
double Coach1Array[CoachROWS][CoachCOLS]; 
double Coach2Array[CoachROWS][CoachCOLS],choice;
string fname,lname,pnum,bnk,pdoi,dob,email,pass,add;
int a,b,t,w;
int r=3453;
cout<<"\n\n\n\nFill out the following  ";
cout<<"\n\t\t Enter your Email  ";
cin>>email;
cout<<"\n\t\t Enter a Password  ";
cin>>pass;
cout<<"\n\t\t First Name  ";
cin>>fname;
cout<<"\n\t\t Last Name  ";
cin>>lname;
cout<<"\n\t\t Date of Birth  ";
cin>>dob;
cout<<"\n\t\t Address ";
cin>>add;
cout<<"\n\t\t Passport Number  ";
cin>>pnum;
cout<<"\n\t\t Date of Passport issue  ";
cin>>pdoi;
cout<<"\n\t\t Bank Account Number";
cin>>bnk; 
cout<<"\n\n\n\n\t\t\t\tYou have entered ";
cout<<"\n\tName : "<<fname<<setw(2)<<lname;
cout<<"\n\tDate of Birth : "<<setw(1)<<dob;
cout<<"\n\tPassport Number :"<<setw(2)<<pnum;
cout<<"\n\tDate of Passport Issue :"<<pdoi;
cout<<"\n\tBank Account :"<<bnk;
cout<<"\n 1. Correct";
cout<<"\n 2. Re-enter";
cin>>a;
switch(a)
{
case 1:
system("cls");
displayMenu(choice, FirstArray,Coach1Array,Coach2Array);
food();
	  cout<<"                           AIRLINE TICKET                                 "<<endl;
  cout<<"|Ticket No. 1234"<<"                                Reference No. 0009"<<"\t  "<<endl;
  cout<<"|_________________________________________________________________________"<<endl;
  cout<<"|Resevation No. :"<<r<<"                                                     "<<endl;
  cout<<"|__________________________________________________________________________"<<endl;
  cout<<"|Passenger Information :                                                  "<<endl;
  cout<<"|Name :"<<lname<<"/"<<fname<<"                                            "<<endl;
  cout<<"|Passport Number :" <<pnum<<"                                             "<<endl;
  cout<<"|Address :"<<add<<"                                                       "<<endl;
  cout<<"|_________________________________________________________________________"<<endl;
     cout<<"|flight Information :                                                     "<<endl;
  cout<<"|12 MAY 2018                                                              "<<endl;
  cout<<"|BOING 747                                                                "<<endl;
  cout<<"|_________________________________________________________________________"<<endl;
  cout<<"|*BAGGAGE allowed 40 Kilos                                                "<<endl;
  cout<<"|*contact Airline to Confirm baggage allowance                            "<<endl;
  cout<<"|_________________________________________________________________________"<<endl;
  
	  cout<<"\n1. CORRECT";
	  cout<<"\n2. Not correct";
	  cin>>w;    
system("cls");

break;
case 2: registe();break;
default:cout<<"NOT AN OPTION";break;
}
cout<<"\n1. Go back";
cout<<"\n2. EXIT";
cin>>t;
switch(t)
{
case 1: menu();break;
case 2: exit(1);break;
default:cout<<"Not an option";break;
}
}
void displayMenu(double, double FirstArray[FirstROWS][FirstCOLS], double Coach1Array[CoachROWS][CoachCOLS],
double Coach2Array[CoachROWS][CoachCOLS])
{


int CHOICE;

int row, col,con; 
int fccrow, fcccol; 
int scrow, sccol; 

const int FIRSTCLASS = 1,
FIRSTCOACH = 2,
SECONDCOACH = 3,
DISPLAYSEAT = 4,
EXIT = 5;

double firstprice;
double coach1price;
double coach2price;
system ("cls");
cout << "\n\n\n\t\tPlease pick from the following options: 1-5" << endl;
cout << "\n\n\n\t\t======================================" << endl;

cout << "1. First Class" << endl;
cout << "2. First Coach Class" << endl;
cout << "3. Second Coach Class" << endl;
cout << "4. Display Available seating" << endl;
cout << "5. Exit\n" << endl;
cin >> CHOICE;
system("cls");
switch (CHOICE)
{
case FIRSTCLASS :
cout << "You have chosen: First Class" << endl;
for(row=0;row<5;row++)
{
for(col=0;col<2;col++)
{
cout<<"      "<<"#   #"<<"        ";
}
cout<<endl;
}
cout<< endl;
cout << "\nNow please pick which row you would like to sit in: (1-5) ";
cin >> row;

if (row > 5)
{
cout << "\nYou have entered an invalid row number, please enter in between 1-5 ";
cin >> row;
}
cout<<"You have choosen row "<<row<<"\n\t\t #   #        #    #   ";
cout << "\nPlease pick which seat you would like to sit in, please enter between 1-4 ";
cin >> col;

if (col > 4)
{
cout << "\nYou have entered an invalid seat number, please enter between 1-4 ";
cin >> col;
}
cout<<"\n The price of the seat is 23,000ETB";
cout<<"\n Choose 1 to RESERVE \n Choose 2 to CANCEL";
cin>>con;
switch(con)
{
case 1: cout<<"Procced to payment";break;
case 2: cout<<"Leave";break;
}
break;

case FIRSTCOACH:
cout << "You have chosen: First Coach Class" << endl;
for(row=0;row<8;row++)
{
for(col=0;col<2;col++)
{
cout<<"       "<<"###"<<"         ";
}
cout<<endl;
}

cout << "\nNow please pick which row you would like to sit in: ";
cin >> row;

cout<<"You have choosen row "<<row<<"###         ###";
cout<< "\nPlease pick which seat you would like to sit in, please enter between 1-8: ";
cin >> col;
if (col > 8)
{
cout << "You have entered an invalid seat number, please enter between 1-8";
cin >> col;
}
cout<<"\nThe price of the seat is 15,000ETB";
cout<<"\n Choose 1 to RESERVE \n Choose 2 to CANCEL";
cin>>con;
switch(con)
{
case 1: cout<<"Procced to payment";break;
case 2: cout<<"Leave";break;
}
break;

case SECONDCOACH:
cout << "You have chosen: Second Coach Class" << endl;
for(row=0;row<10;row++)
{
for(col=0;col<2;col++)
{
cout<<"          "<<"####"<<"     ";
}
cout<<endl;
}
cout << "\nNow please pick which row you would like to sit in, please choose between 1-10 ";
cin >> row;
if (row > 10)
{
cout << "\nYou have entered an invalid row number, please enter in between 1-10 ";
cin >> row;
}
cout<<"\nYou have choosen row "<<row;
cout<<"\n\t\t####        ####";
cout << "\nPlease pick which seat you would like to sit in: ";
cin >> col;


if (col > 4)
{
cout << "You have entered an invalid seat number, please enter between 1-4";
cin >> col;
}
cout<<"\nThe price of the seat is 10,000ETB";
cout<<"\n Choose 1 to RESERVE \n Choose 2 to CANCEL";
cin>>con;
switch(con)
{
case 1: cout<<"Procced to payment";break;
case 2: cout<<"Leave";break;
}
break;


case DISPLAYSEAT:

seatChart(FirstArray, Coach1Array, Coach2Array);
break;

case EXIT:

cout << "You have chosen to Exit the program" << endl;
cout << "Thank you for using my program, have a good day!" << endl;
exit(1);
break;

default: cout << "You have entered in an invalid choice, please pick between 1-5" << endl;


}

}


void seatChart(double FirstArray[FirstROWS][FirstCOLS], double Coach1Array[CoachROWS][CoachCOLS],
double Coach2Array[CoachROWS][CoachCOLS])
{
int col,row,a,choice;
cout << "This is the Seating Chart" << endl;
cout << "========================= \n" << endl;


cout << "\n\n\n \t\t First Class is seats 1-4, Rows 1-5\n" << endl;

for(row=0;row<5;row++)
{
for(col=0;col<2;col++)
{
cout<<"          "<<"#   #"<<"        ";
}
cout<<endl;
}

cout << "\nFirst Coach Class are seats 1-6, Rows 1-8:" << endl;

for(row=0;row<8;row++)
{
for(col=0;col<2;col++)
{
cout<<"          "<<"###"<<"         ";
}
cout<<endl;
}

cout << endl;

cout << "\nSecond Coach Class are seats 1-8, Rows 1-10" << endl;

for(row=0;row<10;row++)
{
for(col=0;col<2;col++)
{
cout<<"          "<<"####"<<"     ";
}
cout<<endl;
}

cout << endl;

cout<<"1.Go back";
cin>>a;
if(a==1)
{
displayMenu(choice, FirstArray,Coach1Array,Coach2Array);
}

else
{
cout<<"NOT AN OPTION";
}

}


