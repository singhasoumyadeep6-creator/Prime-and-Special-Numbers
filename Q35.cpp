//Happy Number
#include<iostream>
int main(){
	int n;

	std::cout<<"Enter a Number: ";
	std::cin>>n;
	
	while(n != 1 && n != 4){
	
	int sum = 0;
	while(n > 0){
		int digit = n % 10;
		sum = sum + (digit * digit);
		n = n/10;
	}
	n = sum;
}
	if(n == 1){
		std::cout<<"Happy Number";
	}
	else{
		std::cout<<"Not a Happy Number";
	}
	return 0;
}
