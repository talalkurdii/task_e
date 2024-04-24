#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    double num;
    FILE *fptr;

    fptr = fopen(argv[1], "r");
    if (fptr == NULL) {
        printf("Error. Not able to open the file.\n");
        return 1;
    }

    fscanf(fptr, "%lf", &num);
    fclose(fptr);

    printf("name:  Talal Kurdi\n");
    printf("email: talal.kurdi@student.manchester.ac.uk\n");
    printf("number1: %.2lf,\n", num);
    printf("number2: %.3e\n", num);

    return 0;
}
