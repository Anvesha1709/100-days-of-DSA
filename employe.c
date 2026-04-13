
#include <stdio.h>

struct Employee {
    char name[50];
    float salary;
};

int main() {
    struct Employee emp[5];
    int i, a = 0;

    for (i = 0; i < 5; i++) {
        printf("Enter name of employee %d: ", i +1 );
        scanf("%s", emp[i].name);

        printf("Enter salary of employee %d: ", i +1);
        scanf("%f", &emp[i].salary);
    }

    for (i = 1; i < 5; i++) {
        if (emp[i].salary > emp[a].salary) {
            a = i;
        }
    }

    printf("\nEmployee with highest salary:\n");
    printf("Name: %s\n", emp[a].name);
    printf("Salary: %f\n", emp[a].salary);

    return 0;
}

   
