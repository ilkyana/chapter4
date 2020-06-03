#include<stdio.h>
void main(){
int choice;
do{
int n;
	printf("Enter the number");
	scanf("%d",&n);
	int mult = 1;
	
printf ( "\n1. Factorial" ) ;
printf ( "\n2. Prime" ) ;
printf ( "\n3. Odd/Even" ) ;
printf ( "\n4. Exit" ) ;
printf ( "\nYour choice? " ) ;
scanf ( "%d", &choice ) ;
	

switch ( choice )

{
case 1 :
	
	for(int i = n ; n > 1 ; n--){
	mult = mult*i;
	}
	printf("\n Factorial of the number is %d " , mult);

	break ;
case 2 :
	
	for(int i = 2 ; i<=n/2 ; i++){
	if(n%i != 0){
	printf("\n The number is prime");		
	} else {
	printf("\n the number is not prime");
	}
			}
	break ;
case 3 :
	
	if(n%2 == 0){
	printf("The number is not odd");
	} else {
	printf("The number is odd");
	}
	break ;
case 4 :
	break ;
	}
	} while (choice != 4);

	} 




