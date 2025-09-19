#include <stdio.h> 
#include <string.h>
#include<ctype.h>

int find_vowel(char txt[50]){
    int num = 0;
    for (int i = 0; i < (sizeof(txt) / sizeof(txt[0])) ; i++){
        if(tolower(txt[i]) == 'a' || tolower(txt[i]) == 'e' || tolower(txt[i]) == 'i' || tolower(txt[i]) == 'o' || tolower(txt[i]) == 'u'){
            num += 1;
        }
    }
    return num;
}
int main(){
    char txt[50];
    printf("Input : ");
    fgets(txt,20,stdin);;
    printf("Output: Number of vowels: %d" , find_vowel(txt));
}