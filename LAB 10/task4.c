#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    char *p = strchr(sentence, 'a');

    if (p != NULL)
        printf("First 'a' found at index %ld\n", p - sentence);
    else
        printf("'a' not found\n");

    if (strstr(sentence, "good") != NULL)
        printf("Word 'good' found.");
    else
        printf("Word 'good' not found.");

    return 0;
}