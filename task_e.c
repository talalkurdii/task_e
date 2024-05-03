#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }
    
	double num;
	FILE *fptr;
	fptr = fopen("number.txt", "r");
	if(fptr == NULL) { // display error if can't open file
        printf("Error. Not able to open the file.");
		return 1;
        }
	fscanf(fptr, "%lf", &num);
	fclose(fptr);
	
    printf("{"); 
    printf("\"name\": \"Talal Kurdi\",\n"); 
    printf("\"email\": \"talal.kurdi@student.manchester.ac.uk\",\n"); 
    printf("\"number1\": %.2f,\n", num); 
    printf("\"number2\": %.3e}\n", num);
	
	// Do not edit below here
	return 0;
}