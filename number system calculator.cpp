#include<iostream>
#include<windows.h>
#include<conversion.h>
#include<conio.h>
#include<vector>
using namespace std;


int main()
{
	Menu1:
	char select;
	cout<<"\t\tNumber System Calculator\n"<<endl;
	cout<<"\tMenu"<<endl;
	cout<<"[A] Decimal"<<endl;
	cout<<"[B] Binary"<<endl;
	cout<<"[C] Octal"<<endl;
	cout<<"[D] Hexadecimal"<<endl;
	cout<<"[E] Exit"<<endl;
	cout<<endl;
	cout<<"Option: ";
	cin>>select;

//Decimal to Binary/Octal/Hexadecimal
	switch(select)
	{
		case 'A':
		case 'a':
		char select2;
		system("cls");
		Menu:
		cout<<"\tDecimal\n"<<endl;
		string menu2[4] = {"[A] Decimal to Binary", "[B] Decimal to Octal", "[C] Decimal to Hexadecimal", "[D] Back"};
		for(int i = 0; i<4; i++)
		{
			cout<<menu2[i]<<endl;
		}
		cout<<"Option: ";
		select2 = getche();
		if(select2 == 'A'||select2 == 'a')
		{
				start:
				int binary = 0;
				int option;
				system("cls");
				cout<<"\tDecimal to Binary\n"<<endl;
				cout<<"Enter a Decimal number to convert: ";    
    			cin>>n;   
    			decimal(binary);
    			cout<<endl<<endl;
    			cout<<"====================================================================="<<endl;
    			cout<<"[Y] means Yes [N] means No [T] means go back to Menu"<<endl;
    			cout<<"====================================================================="<<endl<<endl;
    			cout<<"Wanna Try Again? [Y] [N] [T]: ";
    			option = getche();
    			if(option == 'Y'||option == 'y')
    			{
    				system("cls");
    				goto start;
				}
				else if(option == 'T'||option =='t')
				{
					system("cls");
					goto Menu;
				}
				else
				{
					cout<<endl<<endl;
					cout<<"Creator's Name: Keishi"<<endl<<endl;
					cout<<"GOODBYE"<<endl;
					return 0;
				}
		}
		else if(select2 == 'B'||select2 == 'b')
		{
			char option;
			start2:
			int Octal2 = 0;
			system("cls");
			cout<<"\tDecimal to Octal\n"<<endl;
			cout<<"Enter a Decimal number to convert: ";    
    		cin>>n2;
    		octal(Octal2);
    		cout<<endl<<endl;
    		cout<<"====================================================================="<<endl;
    		cout<<"[Y] means Yes [N] means No [T] means go back to Menu"<<endl;
    		cout<<"====================================================================="<<endl<<endl;
    		cout<<"Wanna Try Again? [Y] [N] [T]: ";
    		option = getche();
    		if(option == 'Y'||option == 'y')
    		{
    			system("cls");
    			goto start2;
			}
			else if(option == 'T'||option =='t')
			{
				system("cls");
				goto Menu;
			}
			else
			{
				cout<<endl<<endl;
				cout<<"Creator's Name: Keishi"<<endl<<endl;
				cout<<"GOODBYE"<<endl;
				return 0;
			}
		}
		else if(select2 == 'C'||select2 == 'c')
		{
			char option;
			start3:
			int Hexa = 0; 
			system("cls");
			cout<<"\tDecimal to Hexadecimal\n"<<endl;
			cout<<"Enter a Decimal number to convert: ";
			cin>>n3;
			hexa(Hexa);
			cout<<endl<<endl;
    		cout<<"====================================================================="<<endl;
    		cout<<"[Y] means Yes [N] means No [T] means go back to Menu"<<endl;
    		cout<<"====================================================================="<<endl<<endl;
    		cout<<"Wanna Try Again? [Y] [N] [T]: ";
    		option = getche();
    		if(option == 'Y'||option == 'y')
    		{
    			system("cls");
    			goto start3;
			}
			else if(option == 'T'||option =='t')
			{
				system("cls");
				goto Menu;
			}
			else
			{
				cout<<endl<<endl;
				cout<<"Creator's Name: Keishi"<<endl<<endl;
				cout<<"GOODBYE"<<endl;
				return 0;
			}
		}
		else
		{
			system("cls");
			goto Menu1;
		}
	}
	
	
	
//Binary to Decimal/Octal/Hexadecimal	
	switch(select)
	{
	
		case 'B':
		case 'b':
		Menu2:
		char select3;
		system("cls");
		cout<<"\tBinary\n"<<endl;
		string menu3[4] = {"[A] Binary to Decimal", "[B] Binary to Octal", "[C] Binary to Hexadecimal", "[D] Back"};
		for(int i = 0; i<4; i++)
		{
			cout<<menu3[i]<<endl;
		}
		cout<<"Option: ";
		select3 = getche();
		if(select3 == 'A'||select3 == 'a')
		{
			start4:
			char option;
		
			system("cls");
			cout<<"\tBinary to Decimal\n"<<endl;
			cout<<"Enter a Binary number to convert: ";    
    		cin>>n4;
    		cout<<"Decimal: "<<dec(n4)<<endl;
    		cout<<"====================================================================="<<endl;
    		cout<<"[Y] means Yes [N] means No [T] means go back to Menu"<<endl;
    		cout<<"====================================================================="<<endl<<endl;
    		cout<<"Wanna Try Again? [Y] [N] [T]: ";
    		option = getche();
    		if(option == 'Y'||option == 'y')
    		{
    			system("cls");
    			goto start4;
			}
			else if(option == 'T'||option =='t')
			{
				system("cls");
				goto Menu2;
			}
			else
			{
				cout<<endl<<endl;
				cout<<"Creator's Name: Keishi"<<endl<<endl;
				cout<<"GOODBYE"<<endl;
				return 0;
			}
		}
		else if(select3 == 'B'||select3 == 'b')
		{
			char option;
			start5:
			system("cls");
			cout<<"\tBinary to Octal\n"<<endl;
			cout<<"Enter a Binary number to convert: ";    
    		cin>>n5;
    		cout<<"Octal: "<<octa(n5)<<endl;
    		cout<<"====================================================================="<<endl;
    		cout<<"[Y] means Yes [N] means No [T] means go back to Menu"<<endl;
    		cout<<"====================================================================="<<endl<<endl;
    		cout<<"Wanna Try Again? [Y] [N] [T]: ";
    		option = getche();
    		if(option == 'Y'||option == 'y')
    		{
    			system("cls");
    			goto start5;
			}
			else if(option == 'T'||option =='t')
			{
				system("cls");
				goto Menu2;
			}
			else
			{
				cout<<endl<<endl;
				cout<<"Creator's Name: Keishi"<<endl<<endl;
				cout<<"GOODBYE"<<endl;
				return 0;
			}
		}
		else if(select3 == 'C'||select3 == 'c')
		{
			int binaryTohexa = 0;
			char option;
			start6:
			system("cls");
			cout<<"\tBinary to Hexa\n"<<endl;
			cout<<"Enter a Binary number to convert: ";    
    		cin>>n6;
    		hex(binaryTohexa);
    		cout<<endl<<endl;
    		cout<<"====================================================================="<<endl;
    		cout<<"[Y] means Yes [N] means No [T] means go back to Menu"<<endl;
    		cout<<"====================================================================="<<endl<<endl;
    		cout<<"Wanna Try Again? [Y] [N] [T]: ";
    		option = getche();
    		if(option == 'Y'||option == 'y')
    		{
    			system("cls");
    			goto start6;
			}
			else if(option == 'T'||option =='t')
			{
				system("cls");
				goto Menu2;
			}
			else
			{
				cout<<endl<<endl;
				cout<<"Creator's Name: Keishi"<<endl<<endl;
				cout<<"GOODBYE"<<endl;
				return 0;
			}
		}
		else
		{
			system("cls");
			goto Menu1;
		}
	}

//Octal to Decimal/Binary/Hexadeecimal
	switch(select)
	{
		case 'C':
		case 'c':
				Menu3:
				char select4;
				system("cls");
				cout<<"\tOctal\n"<<endl;
				string menu3[4] = {"[A] Octal to Decimal", "[B] Octal to Binary", "[C] Octal to Hexadecimal", "[D] Back"};
				for(int i = 0; i<4; i++)
				{
					cout<<menu3[i]<<endl;
				}
				cout<<"Option: ";
				select4 = getche();
				if(select4 == 'A'||select4 == 'a')
				{
					char option;
					start7:
					system("cls");
					cout<<"\tOctal to Decimal\n"<<endl;
					cout<<"Enter a Octal number to convert: ";    
    				cin>>n7;
    				cout<<"Decimal: "<<octalTodecimal(n7)<<endl<<endl;
    				cout<<"====================================================================="<<endl;
    				cout<<"[Y] means Yes [N] means No [T] means go back to Menu"<<endl;
    				cout<<"====================================================================="<<endl<<endl;
    				cout<<"Wanna Try Again? [Y] [N] [T]: ";
    				option = getche();
    				if(option == 'Y'||option == 'y')
    				{
    					system("cls");
    					goto start7;
					}
					else if(option == 'T'||option =='t')
					{
					system("cls");
					goto Menu3;
					}
					else
					{
						cout<<endl<<endl;
						cout<<"Creator's Name: Keishi"<<endl<<endl;
						cout<<"GOODBYE"<<endl;
						return 0;
					}
				}
				
				else if(select4 == 'B'||select4 == 'b')
				{
					char option;
					start8:
					system("cls");
					cout<<"\tOctal to Binary\n"<<endl;
					cout<<"Enter a Octal number to convert: ";    
    				cin>>n8;
    				cout<<"Binary:  "<<octalTobinary(n8)<<endl<<endl;
    				cout<<"====================================================================="<<endl;
    				cout<<"[Y] means Yes [N] means No [T] means go back to Menu"<<endl;
    				cout<<"====================================================================="<<endl<<endl;
    				cout<<"Wanna Try Again? [Y] [N] [T]: ";
    				option = getche();
    				if(option == 'Y'||option == 'y')
    				{
    					system("cls");
    					goto start8;
					}
					else if(option == 'T'||option =='t')
					{
					system("cls");
					goto Menu3;
					}
					else
					{
						return 0;
					}
				}
				else if(select4 == 'C'||select4 == 'c')
				{
					char option;
					start9:
					system("cls");
					cout<<"\tOctal to Hexadecimal\n"<<endl;
					cout<<"Enter a Octal number to convert: ";    
    				cin>>n9;
    				octalTohexa(n9);
    				if(chk!=0)
    				{
        				cout<<"Hexadecimal: ";
        				chk = 0;
        				for(a=a; a>=0; a--)
        				{
           					 if(hexnum[a]=='0' && chk==0)
           					{
           			    		chk++;
                				continue;
            				}
            				else
               					 cout<<hexnum[a];
        				}
    				}
    				else
    				{
        				cout<<"\nInvalid Octal Digit!";
    					cout<<endl;
    					goto start9;
    				}
    				cout<<endl;
					cout<<"====================================================================="<<endl;
    				cout<<"[Y] means Yes [N] means No [T] means go back to Menu"<<endl;
    				cout<<"====================================================================="<<endl<<endl;
    				cout<<"Wanna Try Again? [Y] [N] [T]: ";
    				option = getche();
    				if(option == 'Y'||option == 'y')
    				{
    					system("cls");
    					goto start9;
					}
					else if(option == 'T'||option =='t')
					{
					system("cls");
					goto Menu3;
					}
					else
					{
						cout<<endl<<endl;
						cout<<"Creator's Name: Keishi"<<endl<<endl;
						cout<<"GOODBYE"<<endl;
						return 0;
					}
				}
				else
				{
					system("cls");
					goto Menu1;
				}
				
	}
	
//Hexadecimal to Decimal/binary/octal
	switch(select)
	{
		case 'D':
			case 'd':
				int hexadecTobin = 0;
				Menu4:
				char select5;
				system("cls");
				cout<<"\tHexadecimal\n"<<endl;
				string menu3[4] = {"[A] Hexa to Decimal", "[B] Hexa to Binary", "[C] Octal to Hexadecimal", "[D] Back"};
				for(int i = 0; i<4; i++)
				{
					cout<<menu3[i]<<endl;
				}
				cout<<"Option: ";
				select5 = getche();
				if(select5 == 'A'||select == 'a')
				{
					char option;
					start10:
					system("cls");
					cout<<"\tHexa to Decimal\n"<<endl;
					cout<<"Enter a Hexadecimal number to convert: ";    
    				cin>>n10;
    				hexaTodecimal(hexadecTobin);
    				cout<<"====================================================================="<<endl;
    				cout<<"[Y] means Yes [N] means No [T] means go back to Menu"<<endl;
    				cout<<"====================================================================="<<endl<<endl;
    				cout<<"Wanna Try Again? [Y] [N] [T]: ";
    				option = getche();
    				if(option == 'Y'||option == 'y')
    				{
    					system("cls");
    					goto start10;
					}
					else if(option == 'T'||option =='t')
					{
					system("cls");
					goto Menu3;
					}
					else
					{
						cout<<endl<<endl;
						cout<<"Creator's Name: Keishi"<<endl<<endl;
						cout<<"GOODBYE"<<endl;
						return 0;
					}
				}
				
				else if(select5 == 'B'||select5 == 'b')
				{
					char option;
					int hexadecTobinNum = 0;
					start11:
					system("cls");
					cout<<"\tHexa to Binary\n"<<endl;
					cout<<"Enter a Hexadecimal number to convert: ";    
    				cin>>n11;
    				hexaTobinary(hexadecTobinNum);
    				cout<<"====================================================================="<<endl;
    				cout<<"[Y] means Yes [N] means No [T] means go back to Menu"<<endl;
    				cout<<"====================================================================="<<endl<<endl;
    				cout<<"Wanna Try Again? [Y] [N] [T]: ";
    				option = getche();
    				if(option == 'Y'||option == 'y')
    				{
    					system("cls");
    					goto start11;
					}
					else if(option == 'T'||option =='t')
					{
					system("cls");
					goto Menu3;
					}
					else
					{
						cout<<endl<<endl;
						cout<<"Creator's Name: Keishi"<<endl<<endl;
						cout<<"GOODBYE"<<endl;
						return 0;
					}
				}
				else if(select5 == 'C'||select5 == 'c')
				{
					char option;
					int hexadecToOctalNum = 0;
					start12:
					system("cls");
					cout<<"\tHexa to Octal\n"<<endl;
					cout<<"Enter a Hexadecimal number to convert: ";    
    				cin>>n12;
    				hexaTooctal(hexadecToOctalNum);
    				cout<<"====================================================================="<<endl;
    				cout<<"[Y] means Yes [N] means No [T] means go back to Menu"<<endl;
    				cout<<"====================================================================="<<endl<<endl;
    				cout<<"Wanna Try Again? [Y] [N] [T]: ";
    				option = getche();
    				if(option == 'Y'||option == 'y')
    				{
    					system("cls");
    					goto start12;
					}
					else if(option == 'T'||option =='t')
					{
					system("cls");
					goto Menu3;
					}
					else
					{
						cout<<endl<<endl;
						cout<<"Creator's Name: Keishi"<<endl<<endl;
						cout<<"GOODBYE"<<endl;
						return 0;
					}
				}
				else
				{
					system("cls");
					goto Menu1;
				}
	}
	switch(select)
	{
		case 'E':
			case 'e':
				cout<<endl<<endl;
				cout<<"Creator's Name: Keishi"<<endl<<endl;
				cout<<"GOODBYE"<<endl;
				return 0;
	}
	

}



