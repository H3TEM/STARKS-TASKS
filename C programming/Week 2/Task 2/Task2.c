#include <stdio.h>

int main(){

	int x, in_id, id = 12345678, in_pass, pass = 12345600;
			
	printf("Please enter your ID : ");
	scanf("%d",&in_id);
	
	if (in_id == id){
		
		for(x=1;x<=3;x++){
			printf("Please enter your password : ");
			scanf("%d",&in_pass);
			
			if (in_pass == pass){
				printf("Welcome!");
				break;
			}
			
			else if (x==3){
				printf("No more tries");
				break;
			}
			
			else
				printf("Try again!\n");

		}
	}	
	else 
		printf("You are not registered");
	
}