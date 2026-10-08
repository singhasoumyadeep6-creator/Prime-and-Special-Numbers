//check a prime or not
#include<iostream>
int main(){
	int n;
	 int count = 0;
	
    std::cout<<"Enter a Number: ";
    std::cin>>n;
    
    for(int i = 1; i<= n; i++){
	if(n % i == 0){
	
    	count++;
    }
	}
	if(count == 2){
		std::cout<<"It's a Prime\n";
	}
	else{
		std::cout<<"It's not a Prime\n";
	}
	return 0;
}

