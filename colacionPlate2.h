#include<iostream>
#include<windows.h>
#include<cmath>
using namespace std;
//Menus
void main_menu(){
	string menu[5] = {"[1]Decimal","[2]Binary","[3]Octal","[4]Hexadecimal","[5]Exit"};
	for(int i = 0; i<5; i++){
		cout<<menu[i]<<endl;
	}
}
void decimal_menu(){
	string Decimal_Menu[4] = {"1] Binary", "2] Octal", "3] Hexadecimal", "4] Back"};
	for(int i = 0; i<4; i++){
		cout<<Decimal_Menu[i]<<endl;
	}
}
void binary_menu(){
	string Binary_menu[4] = {"1] Decimal", "2] Octal", "3] Hexadecimal", "4] Back"};
	for(int i = 0; i<4; i++){
		cout<<Binary_menu[i]<<endl;
	}
	}
void octal_menu(){
	string Octal_menu[4] = {"1] Decimal", "2] Binary", "3] Hexadecimal", "4] Back"};
	for(int i = 0; i<4; i++){
		cout<<Octal_menu[i]<<endl;
	}
}
void hexa_menu(){
	string Hexa_menu[4] = {"1] Decimal", "2] Binary", "3] Octal", "4] Back"};
	for(int i = 0; i<4; i++){
		cout<<Hexa_menu[i]<<endl;
	}
}
//Solving process
void DecimalToBinaryProcess(int decimal){
	int decimal_quotient, remainder, binary = 0, i = 1;
	decimal_quotient = decimal;
	while (decimal_quotient != 0) {
    	remainder = decimal_quotient % 2;
    	decimal_quotient = decimal_quotient / 2;
    	binary = binary + (remainder * i);
    	i = i * 10;
    	Sleep(200);
    	cout <<"\t"<< decimal_quotient<< "/2 \t\t"<< "." << remainder << endl;
   }
}
void DecimalToOctalProcess(int decimal){
	int octal_quotient, remainder, octal = 0, i = 8;
	octal_quotient = decimal;
	while(octal_quotient !=0 ){
		remainder = octal_quotient % 8;
		octal_quotient = octal_quotient / 8;
		octal = octal + (remainder * i);
		i = i * 10;
		Sleep(200);
		cout <<"\t"<< octal_quotient<< "/8 \t\t"<< "." << remainder << endl;
	}
}
void DecimalToHexaProcess(int decimal) {
    int hexa_quotient, remainder;
    char hexa[100];
    int i = 0;
    hexa_quotient = decimal;
    while (hexa_quotient != 0) {
        remainder = hexa_quotient % 16;
        if (remainder < 10) {
            hexa[i] = remainder + 48;
        } else {
            hexa[i] = remainder + 55;
        }
        hexa_quotient = hexa_quotient / 16;
	}
	hexa_quotient = decimal;
    i = 1;
    while (hexa_quotient != 0) {
        remainder = hexa_quotient % 16;
        Sleep(200);
        if (remainder < 10) {
            cout << "\t" << hexa_quotient << "/16 \t\t" << remainder << endl;
        } else {
            cout << "\t" << hexa_quotient << "/16 \t\t" << char(remainder + 55) << endl;
        }
        hexa_quotient = hexa_quotient / 16;
        i++;
    }
}
int BinaryToDecimalProcess(long long binary) {
    int decimalNumber = 0, i = 0;;
    for(binary; binary!= 0; i++) {
        int remainder = binary % 10;
		binary = binary /10;
		decimalNumber += remainder * pow(2,i);
		Sleep(200);
		cout<<"\t"<<remainder<<" * 2^"<<i<<" = "<<remainder*pow(2,i)<<endl;
    }
    return decimalNumber;
}
int BinaryToOctalProcess(long long binary) {
    int octal = 0, octalDigit = 0, count = 0;
     while (binary != 0) {
        int digit = binary % 10;
        octal += digit * pow(2, count);
        count++;
        binary /= 10;
        if (count == 3 || binary == 0) {
            for (int i = count - 1; i >= 0; i--) {
                int digit = (octal >> i) & 1;
                cout << digit;
            }
            cout << " = " << octal << endl;
            octalDigit = octalDigit * 10 + octal;
            octal = 0;
            count = 0;
        }
    Sleep(200);
    }
}
int BinaryToHexaProcess(long long binary) {
    int hexadecimal = 0, hexadecimalDigit = 0, count = 0;
    while (binary != 0) {
        int digit = binary % 10;
        hexadecimal += digit * pow(2, count);
        count++;
        binary /= 10;
        if (count == 4 || binary == 0) {
            for (int i = count - 1; i >= 0; i--) {
                int digit = (hexadecimal >> i) & 1;
                cout << digit;
            }
            if (hexadecimal < 10) {
                cout << " = " << hexadecimal << endl;
            } else {
                cout << " = " << char(hexadecimal + 55) << endl;
            }
            hexadecimalDigit = hexadecimalDigit * 10 + hexadecimal;
            hexadecimal = 0;
            count = 0;
        }
    Sleep(200);
    }
}
int OctalToDecimalProcess(long long octal){
	long long octalQuotient = octal;
    int decimal = 0;
    int position = 0;
    while (octalQuotient != 0) {
        int digit = octalQuotient % 10;
        int power = pow(8, position);
        int value = digit * power;
        decimal += value;
        cout << "\t" << digit << " * 8^" << position << " = " << value << endl;
        octalQuotient /= 10;
        position++;
        Sleep(200);
    }
    cout<<"Add all the results"<<endl;
}
void OctalToBinaryProcess_1(long long octal_1) {
    while (octal_1 != 0) {
        int digit = octal_1 % 10;
        cout << digit << " = ";
        for (int i = 2; i >= 0; --i) {
            cout << ((digit >> i) & 1);
        }
        cout << endl;
        octal_1 /= 10;
        Sleep(200);
    }
}
int BinaryToHexaProcess_1(long long binaryNumber) {
    int hexadecimal = 0, hexadecimalDigit = 0, count = 0;
    while (binaryNumber != 0) {
        int digit = binaryNumber % 10;
        hexadecimal += digit * pow(2, count);
        count++;
        binaryNumber /= 10;
        if (count == 4 || binaryNumber == 0) {
            for (int i = count - 1; i >= 0; i--) {
                int digit = (hexadecimal >> i) & 1;
                cout << digit;
            }
            if (hexadecimal < 10) {
                cout << " = " << hexadecimal << endl;
            } else {
                cout << " = " << char(hexadecimal + 55) << endl;
            }
            hexadecimalDigit = hexadecimalDigit * 10 + hexadecimal;
            hexadecimal = 0;
            count = 0;
        }
    	Sleep(200);
    }
}
string hexToBinary(char hexDigit) {
    switch (hexDigit) {
        case '0': return "0000";
        case '1': return "0001";
        case '2': return "0010";
        case '3': return "0011";
        case '4': return "0100";
        case '5': return "0101";
        case '6': return "0110";
        case '7': return "0111";
        case '8': return "1000";
        case '9': return "1001";
        case 'A': return "1010";
        case 'B': return "1011";
        case 'C': return "1100";
        case 'D': return "1101";
        case 'E': return "1110";
        case 'F': return "1111";
        default: return "";
    }
}
void HexaToBinaryProcess(const string& hexaNumber) {
    for (int i = 0; i < hexaNumber.length(); i++) {
        char hexDigit = toupper(hexaNumber[i]);
        string binary = hexToBinary(hexDigit);
        cout << hexDigit << " = " << binary << endl;
        Sleep(200);
    }
}
//Decimal to Binary/Octal/Hexadecimal
void DecimalToBinary(int decimal){
	int binary[32], i = 0;
	while(decimal>0){
		binary[i] = decimal % 2;
		decimal = decimal/2;
		i++;
	}
    cout<<"Binary = ";
   	for(int j = i-1; j>=0; j--){
   		cout<<binary[j];
	   }
}
void DecimalToOctal(int decimal){
	int octal[100], i = 0;
	while(decimal != 0){
		octal[i] = decimal % 8;
		decimal = decimal / 8;
		i++;
	}
	cout<<"Octal = ";
	for(int j = i-1; j>=0; j--){
		cout<<octal[j];
	}
}
void DecimalToHexa(int decimal){
	char hexaDecimal[100], i=0;
	while(decimal != 0){
		int remainder = decimal % 16;
		if(remainder < 10){
			hexaDecimal[i] = remainder + '0';
		}
		else{
			hexaDecimal[i] = remainder + 55;
		}
		decimal = decimal / 16;
		i++;
	}
	cout<<"Hexadecimal = ";
	for(int j = i-1; j>=0; j--){
		cout<<hexaDecimal[j];
	}
}
//Binary to Decimal/Octal/Hexadecimal
int BinaryToDecimal(long long binary){
	int decimalNumber = 0, i = 0;
	while(binary != 0){
		int remainder = binary % 10;
		binary = binary /10;
		decimalNumber += remainder * pow(2,i);
		i++;
	}
	return decimalNumber;
}
void BinaryToOctal(long long binary){
	int octalNumber = 0, decimalNumber = 0, i = 0;
	while (binary != 0){
		int remainder = binary % 10;
		decimalNumber += remainder * pow(2,i);
		i++;
		binary /= 10;
	}
	i = 1;
	while(decimalNumber != 0){
		octalNumber += (decimalNumber % 8)*i;
		decimalNumber /= 8;
		i *= 10;
	}
	cout<<"Octal = "<<octalNumber;
}
string BinaryToHexa(long long binary){
	string hexaDecimalNumber = " ";
	int i = 0;
	long long remainder = 0;
	while (binary != 0){
		remainder += (binary % 10) * pow(2,i);
		i++;
		if(i == 4 || binary /10 == 0){
			if(remainder<10){
				hexaDecimalNumber = char(remainder + '0') + hexaDecimalNumber;
			}
			else{
				hexaDecimalNumber = char(remainder - 10 + 'A') + hexaDecimalNumber;
			}
			remainder = 0;
			i = 0;
		}
		binary /= 10;
	}
	return hexaDecimalNumber;
}
//Octal to Decimal/Binary/Hexadecimal
bool isValidOctal_1(const string& octalNumber_1) {
    for (int i = 0; i < octalNumber_1.length(); i++) {
        char digit = octalNumber_1[i];
        if (digit < '0' || digit > '7') {
            return false;
        }
    }
    return true;
}
string octalToBinary(char octalDigit) {
    switch (octalDigit) {
        case '0': return "000";
        case '1': return "001";
        case '2': return "010";
        case '3': return "011";
        case '4': return "100";
        case '5': return "101";
        case '6': return "110";
        case '7': return "111";
        default: return "";
    }
}
string binaryToHex(const string& binaryDigit) {
    if (binaryDigit == "0000") return "0";
    else if (binaryDigit == "0001") return "1";
    else if (binaryDigit == "0010") return "2";
    else if (binaryDigit == "0011") return "3";
    else if (binaryDigit == "0100") return "4";
    else if (binaryDigit == "0101") return "5";
    else if (binaryDigit == "0110") return "6";
    else if (binaryDigit == "0111") return "7";
    else if (binaryDigit == "1000") return "8";
    else if (binaryDigit == "1001") return "9";
    else if (binaryDigit == "1010") return "A";
    else if (binaryDigit == "1011") return "B";
    else if (binaryDigit == "1100") return "C";
    else if (binaryDigit == "1101") return "D";
    else if (binaryDigit == "1110") return "E";
    else if (binaryDigit == "1111") return "F";
    else return "";
}
string convertOctalToBinary(const string& octalNumber_1) {
    string binaryNumber;
    cout << "Octal To Binary\n";
    for (int i = 0; i < octalNumber_1.length(); i++) {
        char octalDigit = octalNumber_1[i];
        string binaryDigit = octalToBinary(octalDigit);
        cout << octalDigit << " = " << binaryDigit << endl;
        binaryNumber += binaryDigit;
        Sleep(200);
    }
    return binaryNumber;
}
string convertOctalToHexadecimal(const string& octalNumber_1) {
    string binaryNumber;
    cout << "Octal --> Binary\n";
    for (int i = 0; i < octalNumber_1.length(); i++) {
        char octalDigit = octalNumber_1[i];
        string binaryDigit = octalToBinary(octalDigit);
        cout << octalDigit << " = " << binaryDigit << endl;
        binaryNumber += binaryDigit;
        Sleep(200);
    }
    string hexadecimalNumber;
    cout << "Binary --> Hexadecimal\n";
    int padding = 4 - (binaryNumber.length() % 4);
    string paddedBinary = string(padding, '0') + binaryNumber;
    for (int i = 0; i < paddedBinary.length(); i += 4) {
        string binaryChunk = paddedBinary.substr(i, 4);
        string hexDigit = binaryToHex(binaryChunk);
        cout << binaryChunk << " = " << hexDigit << endl;
        hexadecimalNumber += hexDigit;
        Sleep(200);
    }
    return hexadecimalNumber;
}
bool isValidOctal(long long octal) {
    while (octal != 0) {
        int digit = octal % 10;
        if (digit > 7) {
            return false;
        }
        octal /= 10;
    }
    return true;
}
int OctalToDecimal(long long octal){
	int decimal = 0, count = 0;
	while (octal != 0) {
        int digit = octal % 10;
        decimal += digit * pow(8, count);
        count++;
        octal /= 10;
    }
    cout << "Decimal = " << decimal << endl;
}
long long OctalToBinary_1(long long octalNumber)
{
    int decimalNumber = 0, i = 0;
    long long binaryNumber = 0;
    while(octalNumber != 0)
    {
        decimalNumber += (octalNumber%10) * pow(8,i);
        ++i;
        octalNumber/=10;
    }
    i = 1;
    while (decimalNumber != 0)
    {
        binaryNumber += (decimalNumber % 2) * i;
        decimalNumber /= 2;
        i *= 10;
    }
    return binaryNumber;
}
string BinaryToHexa_1(long long binaryNumber){
	string hexaDecimalNumber = " ";
	int i = 0;
	long long remainder = 0;
	while (binaryNumber != 0){
		remainder += (binaryNumber % 10) * pow(2,i);
		i++;
		if(i == 4 || binaryNumber /10 == 0){
			if(remainder<10){
				hexaDecimalNumber = char(remainder + '0') + hexaDecimalNumber;
			}
			else{
				hexaDecimalNumber = char(remainder - 10 + 'A') + hexaDecimalNumber;
			}
			remainder = 0;
			i = 0;
		}
		binaryNumber /= 10;
	}
	return hexaDecimalNumber;
}
//Hexadecimal to Decimal/Binary/Octal
bool isValidHexadecimal(string hexa) {
    for (size_t i = 0; i < hexa.length(); ++i) {
        char c = toupper(hexa[i]);
        if (isdigit(c) || (toupper(c) >= 'A' && toupper(c) <= 'F')) {
            continue;
        } else {
            return false;
        }
    }
    return true;
}
int hexToDecimal(char hexDigit) {
    if (hexDigit >= '0' && hexDigit <= '9') {
        return hexDigit - '0';
    } else if (hexDigit >= 'A' && hexDigit <= 'F') {
        return hexDigit - 'A' + 10;
    } else if (hexDigit >= 'a' && hexDigit <= 'f') {
        return hexDigit - 'a' + 10;
    }
    return -1; 
}
void HexaToDecimalProcess(const string& hexaNumber) {
    int decimalNumber = 0;
    int power = hexaNumber.length() - 1;

    for (int i = 0; i < hexaNumber.length(); i++) {
        char hexDigit = hexaNumber[i];
        int decimalDigit = hexToDecimal(hexDigit);

        int term = decimalDigit * static_cast<int>(pow(16, power));
        cout << hexDigit << " * 16^" << power << " = " << term << endl;

        decimalNumber += term;
        power--;
        Sleep(200);
    }
	cout<<"Add all the results"<<endl;
    cout << "Decimal = " << decimalNumber << endl;
}
string HexaToBinary(const string& hexaNumber) {
    string binaryNumber;
    for (int i = 0; i < hexaNumber.length(); i++) {
        char hexDigit = toupper(hexaNumber[i]);
        string binaryDigit = hexToBinary(hexDigit);
        binaryNumber += binaryDigit;
    }
    return binaryNumber;
}
string HexaToBinaryProcess_1(const string& hexaNumber) {
    string binaryNumber_1;
    cout << "Hexa To Binary\n";
    for (int i = 0; i < hexaNumber.length(); i++) {
        char hexDigit = toupper(hexaNumber[i]);
        string binaryDigit = hexToBinary(hexDigit);
        cout << hexDigit << " = " << binaryDigit << endl;
        binaryNumber_1 += binaryDigit;
        Sleep(200);
    }
    return binaryNumber_1;
}
string BinaryToOctalProcess_1(const string& binaryNumber_1) {
    string octalNumber;
    cout << "Binary = " << binaryNumber_1 << " --> Octal\n";
    int padding = 3 - (binaryNumber_1.length() % 3);
    string paddedBinary = string(padding, '0') + binaryNumber_1;
    for (int i = 0; i < paddedBinary.length(); i += 3) {
        string binaryChunk = paddedBinary.substr(i, 3);
        string octalDigit;
        if (binaryChunk == "000") octalDigit = "0";
        else if (binaryChunk == "001") octalDigit = "1";
        else if (binaryChunk == "010") octalDigit = "2";
        else if (binaryChunk == "011") octalDigit = "3";
        else if (binaryChunk == "100") octalDigit = "4";
        else if (binaryChunk == "101") octalDigit = "5";
        else if (binaryChunk == "110") octalDigit = "6";
        else if (binaryChunk == "111") octalDigit = "7";
        cout << binaryChunk << " = " << octalDigit << endl;
        octalNumber += octalDigit;
        Sleep(200);
    }
    return octalNumber;
}

