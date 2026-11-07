#include <stdio.h>
#include <string.h>

int main() {
    char cities[5][50];
    int i, max = 0;

    for (i = 0; i < 5; i++) {
        printf("Enter city %d: ", i + 1);
        fgets(cities[i], 50, stdin);
        cities[i][strcspn(cities[i], "\n")] = '\0';
    }

    for (i = 0; i < 5; i++) {
        printf("%s\n", cities[i]);

        if (strlen(cities[i]) > strlen(cities[max]))
            max = i;
    }

    printf("Longest city: %s\n", cities[max]);
    printf("Length: %d", (int)strlen(cities[max]));

    return 0;
}