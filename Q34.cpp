//Strong Number
#include<iostream>
int main(){
int n;
int originalNum;
int sum = 0;
std::cout<<"Enter a Number: ";
std::cin>>n;

originalNum = n;

while( n > 0){
	int digit = n % 10;
	int fact = 1;
	for(int i = 1; i <= digit; i++){
		fact = fact * i;
	}
	sum = sum + fact;
	n = n/10;
}
if(sum == originalNum){
	std::cout<<"Strong Number";
	
}
else{

	std::cout<<"Not a Strong Number";
}
return 0;
	
}
