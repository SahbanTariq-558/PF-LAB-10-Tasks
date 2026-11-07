#include <stdio.h>
#include <string.h>
int main() {

    char fname[50];
    printf("Enter your first name: ");
    fgets(fname , 50, stdin);
    fname[strcspn(fname,"\n")] = '\0';

    char lname[50];
    printf("Enter your last name: ");
    fgets(lname, 50, stdin);
    lname[strcspn(lname,"\n")] = '\0';

    char fullname[50];

    strcpy(fullname,fname);
    strcat( fullname, " ");
    strcat(fullname , lname);

    printf("First name: %s",fname);
    printf("\nLast name: %s", lname);
    printf("\nFull name: %s", fullname);

    return 0;
}