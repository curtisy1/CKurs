#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char wochentag[] = "Freitag";
    int tag = 13;
    char monat[] = "Mai";
    int jahr = 1927;
    char *string; // Hier soll das Datum hineingeschrieben werden!
    char *buffer;

    sprintf(string, "%s, der %d. %s %d", wochentag, tag, monat, jahr);
    buffer = malloc(sizeof(string));

    printf("%s\n", string);

    free(buffer);

    return 0;
}
