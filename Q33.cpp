//All Perfect Number 1 to N
#include<iostream>
int main(){
	int n;
  
    
    std::cout<<"Enter a Number: ";
    std::cin>>n;
    
    for(int num = 1; num <= n; num++){
    	int sum = 0;
       for(int i = 1; i< num; i++){
       	
       	if(num % i == 0){
       		sum = sum + i;
		   }
	   }
	   if(sum == num){
	   	std::cout<<num<<" ";
	   }	
	}
	return 0;
}


