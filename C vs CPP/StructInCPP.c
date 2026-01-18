#include <stdio.h>

struct Employee
{
    char name[32];
    int emp_id;
    float salary = 2000;
    static int something;

    void printSomething()
    {
        printf("From function");
    }

    Employee()
    {
        printf("SOMETHING");
    }
};

int main()
{
    Employee emp;

    return 0;
}
