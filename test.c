//Suvam....

#include<stdio.h>
int main(){

    char ch;
    printf("Enter your character: ");
    scanf("%c", &ch);

    if (ch>='A' && ch <= 'Z'){
        printf("Its Upper Case. \n");
    }
    else if(ch>='a' && ch <= 'z')
        printf("Its Lower Case \n");
    return 0;

}

//End..................