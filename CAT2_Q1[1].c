/*
Structure 
author:kelvin muchoki
registration number:CT101/G/25008/24
date:07/11/24
*/
// preprocessor directive
#include <stdio.h>
#include <string.h>

struct employee {
    char name[25];        
    int id;               
    char department[20];  
    float salary;      
    char email[50];   
};

int main() {
    struct employee emp = {
        "John Doe",            
        12345,           
        "Human resources", 
        55000.50,              
        "john.doe@company.com" 
    };
    printf("the employee Details:\n");
    printf("Name is: %s\n", emp.name);
    printf("ID is: %d\n", emp.id);
    printf("the department: %s\n", emp.department);
    printf("Salary is: %.2f\n", emp.salary);
    printf("Email is: %s\n", emp.email);

    return 0;
}