#include <stdio.h>

struct Employee{
    float salary;
    float bonus;
    float deductions;
};

int main() {
    struct Employee employees[3];
    for (int i = 0; i < 3; ++i) {
        printf("Enter informations of employee %d:\n",i);
        printf("Enter salary: ");
        scanf("%f",&employees[i].salary);
        printf("Enter bonus: ");
        scanf("%f",&employees[i].bonus);
        printf("Enter deductions: ");
        scanf("%f",&employees[i].deductions);
    }
	
    float total;
    for (int x = 0;x < 3; ++x) {
        total += employees[x].salary + employees[x].bonus - employees[x].deductions;
    }  
    printf("\nTotal value supplied by finance: %.2f\n",total);

    return 0;
}
