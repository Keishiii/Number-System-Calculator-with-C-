#include<iostream>
#include<windows.h>
#include<colacion_Plate2.h>
using namespace std;
int options;
char option;
int decimal, decimalNumber;
string hexa, hexaNumber, binaryNumber_1, octalNumber_1;
long long binary, octal, octal_1, octalNumber, binaryNumber;
int main(){
	MainMenu:
	cout<<"\t\tNUMBER SYSTEM CONVERSION"<<endl<<endl;
	main_menu();
	cout<<"\tEnter Options: ";
	cin>>options;
	switch(options){
		case 1:
			DecimalMenu:
			system("cls");
			cout<<"\t\tNUMBER SYSTEM CONVERSION"<<endl;
			cout<<"\t\t\tDecimal"<<endl<<endl;
			decimal_menu();
			cout<<"\tEnter Options: ";
			cin>>options;
			switch(options){
				case 1:
					decimal_Binary:
					system("cls");
					cout<<"\t\tNUMBER SYSTEM CONVERSION"<<endl<<endl;
					cout<<"\tDecimal - Binary"<<endl;
					cout<<"Enter Decimal Number: ";
					cin>>decimal;
					cout<<"===================================="<<endl;
					cout<<"\tQ\t\tR"<<endl;
					DecimalToBinaryProcess(decimal);
    				cout<<endl;
    				DecimalToBinary(decimal);
    				cout<<"\n===================================="<<endl;
    				cout<<"Try Again?\n < Press Y/y if Yes, otherwise press anything if No > ";
    				cin>>option;
    				if(option == 'Y' || option == 'y'){
    					goto decimal_Binary;
					}
					else{
						goto DecimalMenu;
					}
					break;
				case 2:
					decimal_Octal:
					system("cls");
					cout<<"\t\tNUMBER SYSTEM CONVERSION"<<endl<<endl;
					cout<<"\tDecimal - Octal"<<endl;
					cout<<"Enter Decimal Number: ";
					cin>>decimal;
					cout<<"===================================="<<endl;
					cout<<"\tQ\t\tR"<<endl;
					DecimalToOctalProcess(decimal);
					cout<<endl;
					DecimalToOctal(decimal);
					cout<<"\n===================================="<<endl;
					cout<<"Try Again?\n < Press Y/y if Yes, otherwise press anything if No > ";
    				cin>>option;
    				if(option == 'Y' || option == 'y'){
    					goto decimal_Octal;
					}
					else{
						goto DecimalMenu;
					}
					break;
				case 3:
					decimal_Hexa:
					system("cls");
					cout<<"\t\tNUMBER SYSTEM CONVERSION"<<endl<<endl;
					cout<<"\tDecimal - Hexa"<<endl;
					cout<<"Enter Decimal Number: ";
					cin>>decimal;
					cout<<"===================================="<<endl;
					cout<<"\tQ\t\tR"<<endl;
					DecimalToHexaProcess(decimal);
					cout<<endl;
					DecimalToHexa(decimal);
					cout<<"\n===================================="<<endl;
					cout<<"Try Again?\n < Press Y/y if Yes, otherwise press anything if No > ";
    				cin>>option;
    				if(option == 'Y' || option == 'y'){
    					goto decimal_Hexa;
					}
					else{
						goto DecimalMenu;
					}
					break;
				case 4:
					system("cls");
					goto MainMenu;
					break;
				default:
					cout<<"\tINVALID OPTION!!";
					Sleep(1000);
					system("cls");
					goto DecimalMenu;
					break;	
			}
			break;
		case 2:
			BinaryMenu:
			system("cls");
			cout<<"\t\tNUMBER SYSTEM CONVERSION"<<endl;
			cout<<"\t\t\tBinary"<<endl<<endl;
			binary_menu();
			cout<<"\tEnter Options: ";
			cin>>options;
			switch(options){
				case 1:
					binary_Decimal:
					system("cls");
					cout<<"\t\tNUMBER SYSTEM CONVERSION"<<endl<<endl;
					cout<<"\tBinary - Decimal"<<endl;
					cout<<"Enter Binary Number: ";
					cin>>binary;
					cout<<"===================================="<<endl;
					cout<<endl;
					BinaryToDecimalProcess(binary);
					cout<<"Add all the results"<<endl;
					cout<<endl;
					cout<<"Decimal = "<< BinaryToDecimal(binary)<<endl;
					cout<<"===================================="<<endl;
					cout<<"Try Again?\n < Press Y/y if Yes, otherwise press anything if No > ";
    				cin>>option;
    				if(option == 'Y' || option == 'y'){
    					goto binary_Decimal;
					}
					else{
						goto BinaryMenu;
					}
					break;
				case 2:
					binary_Octal:
					system("cls");
					cout<<"\t\tNUMBER SYSTEM CONVERSION"<<endl<<endl;
					cout<<"\tBinary - Octal"<<endl;
					cout<<"Enter Binary Number: ";
					cin>>binary;
					cout<<"===================================="<<endl;
					BinaryToOctalProcess(binary);
    				cout<<endl;
    				BinaryToOctal(binary);
    				cout<<endl;
    				cout<<"===================================="<<endl;
					cout<<"Try Again?\n < Press Y/y if Yes, otherwise press anything if No > ";
    				cin>>option;
    				if(option == 'Y' || option == 'y'){
    					
    					goto binary_Octal;
					}
					else{
						goto BinaryMenu;
					}
					break;
				case 3:
					binary_Hexa:
					system("cls");
					cout<<"\t\tNUMBER SYSTEM CONVERSION"<<endl<<endl;
					cout<<"\tBinary - Hexa"<<endl;
					cout<<"Enter Binary Number: ";
					cin>>binary;
    				cout<<"===================================="<<endl;
 					BinaryToHexaProcess(binary);
    				cout<<endl;
    				cout<<"Hexadecimal = "<<BinaryToHexa(binary);
    				cout<<endl;
    				cout<<"===================================="<<endl;
					cout<<"Try Again?\n < Press Y/y if Yes, otherwise press anything if No > ";
    				cin>>option;
    				if(option == 'Y' || option == 'y'){
    					goto binary_Hexa;
					}
					else{
						goto BinaryMenu;
					}
					break;	
				case 4:
					system("cls");
					goto MainMenu;
					break;
				default:
					cout<<"\tINVALID OPTION!!";
					Sleep(1000);
					system("cls");
					goto BinaryMenu;
					break;		
			}
			break;	
		case 3:
			OctalMenu:
			system("cls");
			cout<<"\t\tNUMBER SYSTEM CONVERSION"<<endl;
			cout<<"\t\t\tOctal"<<endl<<endl;
			octal_menu();
			cout<<"\tEnter Options: ";
			cin>>options;
			switch(options){
				case 1:
					octal_decimal:
					system("cls");
					cout<<"\t\tNUMBER SYSTEM CONVERSION"<<endl<<endl;
					cout<<"\tOctal - Decimal"<<endl;
					cout<<"Enter Octal Number: ";
					cin>>octal;
					cout<<"===================================="<<endl;
					if (!isValidOctal(octal)) {
        				cout << "Invalid octal number!" << endl;
        				cout<<"===================================="<<endl;
        				system("pause");
        				system("cls");
        				goto octal_decimal;
        				return 1;			
    				}
    				OctalToDecimalProcess(octal);
    				cout<<endl;
					OctalToDecimal(octal);
					cout<<"===================================="<<endl;
					cout<<"Try Again?\n < Press Y/y if Yes, otherwise press anything if No > ";
    				cin>>option;
    				if(option == 'Y' || option == 'y'){
    					goto octal_decimal;
					}
					else{
						goto OctalMenu;
					}
					break;
				case 2:
					octal_binary:
					system("cls");
					cout<<"\t\tNUMBER SYSTEM CONVERSION"<<endl<<endl;
					cout<<"\tOctal - Binary"<<endl;
					cout<<"Enter Octal Number: ";
					cin>>octalNumber_1;
					cout<<"===================================="<<endl;
					if (!isValidOctal_1(octalNumber_1)) {
        				cout << "Invalid octal number!" << endl;
        				cout<<"===================================="<<endl;
        				system("pause");
        				system("cls");
        				goto octal_binary;
        				return 1;
    				}
    				cout<<"Binary = "<<convertOctalToBinary(octalNumber_1);
    				cout<<"\n===================================="<<endl;
    				cout<<"Try Again?\n < Press Y/y if Yes, otherwise press anything if No > ";
    				cin>>option;
    				if(option == 'Y' || option == 'y'){
    					goto octal_binary;
					}
					else{
						goto OctalMenu;
					}
					break;
				case 3:
					octal_hexa:
					system("cls");
					cout<<"\t\tNUMBER SYSTEM CONVERSION"<<endl<<endl;
					cout<<"\tOctal - Hexa"<<endl;
					cout<<"Enter Octal Number: ";
					cin>>octalNumber_1;
					cout<<"===================================="<<endl;
					if (!isValidOctal_1(octalNumber_1)) {
        				cout << "Invalid octal number!" << endl;
        				cout<<"===================================="<<endl;
        				system("pause");
        				system("cls");
        				goto octal_hexa;
        				return 1;
    				}
    				cout<<"Hexadecimal = "<<convertOctalToHexadecimal(octalNumber_1)<<endl;;
					cout<<"===================================="<<endl;
					cout<<"Try Again?\n < Press Y/y if Yes, otherwise press anything if No > ";
    				cin>>option;
    				if(option == 'Y' || option == 'y'){
    					goto octal_hexa;
					}
					else{
						goto OctalMenu;
					}
					break;
				case 4:
					system("cls");
					goto MainMenu;
					break;
				default:
					cout<<"\tINVALID OPTION!!";
					Sleep(1000);
					system("cls");
					goto OctalMenu;
					break;	
				}
			break;	
		case 4:
			HexaMenu:
			system("cls");
			cout<<"\t\tNUMBER SYSTEM CONVERSION"<<endl;
			cout<<"\t\t\tHexadecimal"<<endl<<endl;
			hexa_menu();
			cout<<"\tEnter Options: ";
			cin>>options;
				switch(options){
					case 1:
						hexa_decimal:
						system("cls");
						cout<<"\t\tNUMBER SYSTEM CONVERSION"<<endl;
						cout<<"\tHexadecimal - Decimal"<<endl<<endl;
						cout<<"Enter hexadecimal number: ";
						cin>>hexa;
						hexaNumber = hexa;
						cout<<"===================================="<<endl;
						for (size_t i = 0; i < hexa.length(); ++i) {
       						hexa[i] = toupper(hexa[i]);
    					}
    					if (!isValidHexadecimal(hexa)) {
        					cout << "Invalid hexadecimal number!" << endl;
        					cout<<"===================================="<<endl;
        					system("pause");
        					system("cls");
        					goto hexa_decimal;
        					return 1;
    					}
    				HexaToDecimalProcess(hexaNumber);
    				cout<<"===================================="<<endl;
    				cout<<"Try Again?\n < Press Y/y if Yes, otherwise press anything if No > ";
    				cin>>option;
    				if(option == 'Y' || option == 'y'){
    					goto hexa_decimal;
					}
					else{
						goto HexaMenu;
					}
					break;
					case 2:
						hexa_binary:
						system("cls");
						cout<<"\t\tNUMBER SYSTEM CONVERSION"<<endl<<endl;
						cout<<"\tHexadecimal - Binary"<<endl;
							cout<<"Enter hexadecimal number: ";
							cin>>hexa;
							hexaNumber = hexa;
							cout<<"===================================="<<endl;
							for (size_t i = 0; i < hexa.length(); ++i) {
       							hexa[i] = toupper(hexa[i]);
    						}
    						if (!isValidHexadecimal(hexa)) {
        						cout << "Invalid hexadecimal number!" << endl;
        						cout<<"===================================="<<endl;
        						system("pause");
        						system("cls");
        						goto hexa_binary;
        						return 1;
    						}
    						HexaToBinaryProcess(hexaNumber);
    						cout<<endl;
    						cout<<"Binary = "<<HexaToBinary(hexaNumber);
    						cout<<"\n===================================="<<endl;
    						cout<<"Try Again?\n < Press Y/y if Yes, otherwise press anything if No > ";
    						cin>>option;
    						if(option == 'Y' || option == 'y'){
    							goto hexa_binary;
							}
							else{
								goto HexaMenu;
							}
							break;
						case 3:
							hexa_octal:
							system("cls");
							cout<<"\t\tNUMBER SYSTEM CONVERSION"<<endl<<endl;
							cout<<"\tHexadecimal - Octal"<<endl;
							cout<<"Enter hexadecimal number: ";
							cin>>hexa;
							hexaNumber = hexa;
							cout<<"===================================="<<endl;
							for (size_t i = 0; i < hexa.length(); ++i) {
       							hexa[i] = toupper(hexa[i]);
    						}

    						if (!isValidHexadecimal(hexa)) {
        						cout << "Invalid hexadecimal number!" << endl;
        						cout<<"===================================="<<endl;
        						system("pause");
        						system("cls");
        						goto hexa_octal;
        						return 1;
    						}
    						binaryNumber_1 = HexaToBinaryProcess_1(hexaNumber);
    						cout << "Octal = " <<BinaryToOctalProcess_1(binaryNumber_1)<< endl;
    						cout<<"\n===================================="<<endl;
    						cout<<"Try Again?\n < Press Y/y if Yes, otherwise press anything if No > ";
    						cin>>option;
    						if(option == 'Y' || option == 'y'){
    							goto hexa_octal;
							}
							else{
								goto HexaMenu;
							}
							break;
						case 4:
							system("cls");
							goto MainMenu;
							break;
						default:
							cout<<"\tINVALID OPTION!!";
							Sleep(1000);
							system("cls");
							goto HexaMenu;
							break;	
					}
					break;
		case 5:
			cout<<"\n===================================="<<endl;
			cout<<"Developer: Benny E. Colacion Jr"<<endl;
			cout<<"ID: 536329"<<endl;
			cout<<"Subject Name: CPE112L"<<endl;
			cout<<"Subject Code: 7105"<<endl;
			cout<<"===================================="<<endl;
			Sleep(500);
			cout<<"Terminating Program..."<<endl<<endl<<endl;
			Sleep(5000);
			cout<<"\t====> Exited <====\n\n";
			return 0;
			break;
		default:
			cout<<"\tINVALID OPTION!!";
			Sleep(1000);
			system("cls");
			goto MainMenu;
			break;	
	}
}
