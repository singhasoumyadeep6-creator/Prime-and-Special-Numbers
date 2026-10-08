//Perfect Number
#include<iostream>
int main(){
	int n;
	int sum = 0;
	std::cout<<"Enter The Number: ";
	std::cin>>n;
	
 for ( int i = 1; i < n; i++){
 	if(n % i == 0){
 		sum = sum + i;
	 
 }
}
if(sum == n){
	std::cout<<"It's a Perfect Number\n";
}
else{
	std::cout<<"It's not a Perfect Number\n";
}
return 0;
}
