#include<stdio.h>
int main(){
 int gross_salary , net_salary , basic_salary , allowances , deductions ;

    printf("Enter Basic Salary:");
	scanf("%d",&basic_salary);

	printf("Enter Allowances:");
	scanf("%d",&allowances);

	printf("Enter Deductions:");
	scanf("%d",&deductions);

	gross_salary = basic_salary + allowances;
	net_salary = gross_salary - deductions;

	printf("\nGross Salary is :%d",gross_salary);
	printf("\nNet Salary is :%d",net_salary);


	printf("\n");
	getch();
}
