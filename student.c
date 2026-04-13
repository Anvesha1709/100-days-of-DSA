#include <stdio.h>


struct student {
    int sapid;
    char name[50];
    float cgpa;
};


void printStudent(struct student s) {
    printf("SAP ID : %d\n", s.sapid);
    printf("Name   : %s\n", s.name);
    printf("CGPA   : %f\n", s.cgpa);
}

int main() {
    struct student s1;

  
    printf("Enter SAP ID: ");
    scanf("%d", &s1.sapid);

    printf("Enter Name: ");
    scanf("%s", s1.name);

    printf("Enter CGPA: ");
    scanf("%f", &s1.cgpa);

 
    printStudent(s1);

    return 0;
}
