#include <iostream>
using namespace std;
 
 int main()
{
/* 
    num1, num2, num3, num4 are the digits of the first number
	enc1, enc2, enc3, enc4 are the encoded digits 
*/

int num1, num2, num3, num4, enc1, enc2, enc3, enc4,number;
	
	cout << "Enter a four digit number.\n";
		cin >> number;
			num1 = ((number - number % 1000))/1000;
			num2 = ((number % 1000) - num3)/100;
			num3 = ((number % 100) - num4)/10;
			num4 = number % 10;
	
			enc1 = (7 + num3)%10; 
			enc2 = (7 + num4)%10;
			enc3 = (7 + num1)%10;
			enc4 = (7 + num2)%10;
   
    cout << enc1 << enc2 << enc3 << enc4 << "\n";
    
return 0;

}
