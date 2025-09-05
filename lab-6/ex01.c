#include <stdio.h>
#include <string.h>

int main(){
    struct student
    {
        char firstname[50] ,lastname[50];
        int age;
        float score;
    }student[3];
    
    // Get input
    for (int i = 0; i < 3; i++)
    {
        printf("Student %d's name: ",i+1);
        scanf("%s %s" , &(student[i].firstname) , &(student[i].lastname));
        printf("Student %d's age: ",i+1);
        scanf("%d" , &student[i].age);
        printf("Student %d's score: ",i+1);
        scanf("%f" , &student[i].score);
    }
    // Display
    for (int i = 0; i < 3; i++)
    {
        printf("Student %d name is \"%s %s\", age %d , score %.2f.\n",i+1 , student[i].firstname , student[i].lastname , student[i].age , student[i].score);
    }
    
    return 0;
}