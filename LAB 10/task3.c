#include <stdio.h>
#include <string.h>

int main(){
    char pass[20];
    printf("Enter your lab password: ");
    fgets(pass , sizeof(pass), stdin);
    pass[strcspn(pass, "\n")] = '\0';

    char correctpass[] = "lab10pass";

    int res = strcmp(pass,correctpass);
    if (res == 0)
    {
        printf("Access granted");
    } else {
        printf("Access denied");
    }
    printf("\n");
    int characters = strncmp(pass , correctpass, 3);
    if (characters == 0){
        printf("First 3 characters match");
    } else {
        printf("First 3 characters don't match");
    }

    return 0;
    
}