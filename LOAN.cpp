// SAID SHAMSA ALI
// REG N.O PA107/22141/24



#include <stdio.h>
int main(int argc, char** argv)
{
	int age;
	float income;
	
	
	//AGE AND INCOME USER INPUT
	printf("Enter your age:");
	scanf("%d",&age);
	
	printf("Enter your annual income:");
	scanf("%d",&income);
	
	//LOAN QUALIFICATION
	if(age>=21,income>=21000){
		printf("CONGRATULATIONS,YOU QUALIFY FOR A LOAN!\n");
	}else{
		printf("UNFORTUNATELY WERE UNABLE TO OFFER YOU A LOAN AT THIS TIME.\n");
	}
	
	
	
	return 0;
}