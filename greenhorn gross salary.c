#include<stdio.h>

void main(){
	
	float basesal = 100;
	
	float hra;
	
	float da;
	
	float ta;
	
	hra = basesal*10/100;
	da  = basesal*5/100;
	ta  = basesal*8/100;

	
	float grosssalary;
	

	grosssalary = basesal+hra+da+ta; 
	
		
	printf("%.0f",grosssalary);
	
	
	
	
	
}
