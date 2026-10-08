//print armstrong 1 tp n
#include<iostream>
#include<cmath>
int main(){
	int n;
	int digit;

	
	std::cout<<"Enter a Number: ";
	std::cin>>n;
	
	if(n < 0){
		n = -n;
	}
	for(int i = 1; i <= n; i++){
	 int temp = i;
	int sum = 0;
	
	while(temp > 0){
		digit = temp % 10;
		sum = sum + (digit * digit * digit);
		temp = temp/10;
				
	}
	if( sum == i){
		std::cout<<"The Armstrong Numbers: "<<i<<" ";
	}
}
	
	return 0;
	
}
