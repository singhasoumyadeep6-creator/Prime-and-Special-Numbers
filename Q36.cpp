// GCD/HCF of two numbers
#include<iostream>
int main(){
	int a, b;
	std::cout<<"Enter Two Numbers: ";
	std::cin>>a >>b;
	
	while(b != 0){
		int rem = a % b;
		a = b;
		b = rem;
	}
	std::cout<<"GCD = "<<a;
	return 0;
}
