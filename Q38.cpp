//Check whether two numbers are Co-prime
#include<iostream>
int main(){
	int a, b;
	int rem;
	std::cout<<"Enter Two Number: ";
	std::cin>>a>>b;
	
	int x = a;
	int y = b;
	
	while(y != 0){
		rem = x % y;
		x = y;
		y = rem;
	}
	if(x == 1){
		std::cout<<"Co-prime";
	}
	else{
		std::cout<<"Not Co-prime";
	}
	return 0;
}
