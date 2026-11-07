#include <stdio.h>
#include <string.h>

int main(){
    char name[50];

    printf("Enter your full name: ");
    fgets(name, 50,stdin);
    name[strcspn(name , "\n")] = '\0';

    printf("%zu",strlen(name));

    char copy[50];
    strcpy(copy , name);
    printf("\ncopy: %s",copy);

    printf("\nSize for the array: %zu",sizeof(name));

    return 0;
}