//armstrong numbers
#include<iostream>
#include<cmath>
int main(){
	int n;
	int digit;
	int isArmst;
	int sum = 0;
	std::cout<<"Enter a Number: ";
	std::cin>>n;
	 isArmst = n;
	if(n < 0){
		n = -n;
	}
	while(n > 0){
		digit = n % 10;
		sum = sum + (digit * digit * digit);
		n = n/10;
				
	}
	if( sum == isArmst){
		std::cout<<"Its a Armstrong Number: \n";
	}
	else{
		std::cout<<"Its not a Armstrong Number: \n";
	}
	return 0;
	
}
