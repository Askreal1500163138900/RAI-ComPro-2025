#include <stdio.h>

int main(){
    struct student
    {
        char name[20];
        int age;
    };
    struct student std[10];
    struct student *std_ptr;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter student: %d name " , i+1);
        scanf("%s" , std[i].name);
        printf("Enter student: %d age " , i+1);
        scanf("%d" , std[i].age);
    }
    
    // printf("\nStudent Information:\n");
    for (int i = 0; i < 10; i++) {
        if (std[i].age > 20){
            printf("Student %d: Name = %s, Age = %d\n", i + 1, std[i].name, std[i].age);
        }
    }


    
}