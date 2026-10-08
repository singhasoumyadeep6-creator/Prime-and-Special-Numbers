//LCM of two numbers
#include<iostream>
int main(){
	int a, b;
	int rem;
	int gcd;
	int lcm;
	std::cout<<"Enter Two Numners: ";
	std::cin>>a>>b;
	
	int x = a;
	int y = b;
	
	while(y != 0){
		rem = x % y;
		x = y;
		y = rem;
	}
	 gcd = x;
     lcm = (a * b)/ gcd;
	std::cout<<"LCM = "<<lcm;
	return 0;
}
