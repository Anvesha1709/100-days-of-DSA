
#include <stdio.h>

struct Student {
    int sapid;
    char name[30];
    char subjects[5][10];
    float cgpa ;  
    
};

int main() {
    struct Student s;

    
    printf("Enter SAP ID: ");
    scanf("%d", &s.sapid);

    printf("Enter Name: ");
    scanf("%s", &s.name);

    printf("Enter 5 subjects:");
    for(int i = 0; i < 5; i++) {
        scanf("%s", &s.subjects[i]);
    }
    printf("Enter Cgpa:");
    scanf("%f" , &s.cgpa);    
      
    

    
    printf("\nStudent Details:");
    printf("\nSAP ID: %d", s.sapid);
    printf("\nCGPA: %f", s.cgpa );
    printf("\nName: %s", s.name);
    printf("\nSubjects:");
    for(int i = 0; i < 5; i++) {
        printf("%s \n", s.subjects[i]);
    }

    return 0;
}

