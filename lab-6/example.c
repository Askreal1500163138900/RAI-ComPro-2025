#include <stdio.h>
#include <string.h>

int main(){
    struct student
    {
        char name[15];
        int age;
    }student[10];
    
    // Get input
    for (int i = 0; i < 10; i++)
    {
        printf("Enter your name: ");
        scanf("%s" , &(student[i].name));
        printf("Enter your age: ");
        scanf("%d" , &student[i].age);
    }
    // Display
    for (int i = 0; i < 10; i++)
    {
        if (student[i].age > 20){
            printf("%s older than 20\n" , student[i].name);
        }
    }
    
    return 0;
}