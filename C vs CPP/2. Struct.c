#include <stdio.h>

struct Employee
{
    char name[32];
    int emp_id;

    // It is not possible
    // float salary = 10000;
    // void printSomething() {
    //     printf("From function");
    // }
    // void Employee() {
    //     printf("SOMEthing");
    // }
    // static int something;
};

int main()
{
    struct Employee emp;

    return 0;
}