#include <stdio.h>
int main(int argc, char *argv[]){

    if (argc != 2) {
        printf("Error. Expected 1 filename.");
        return 1;
    }
	
	// Enter your code under here to read the filename from the command line
	
	
	
	// Read number from file - do not edit
	double num;
	FILE *fptr;
	fptr = fopen(argv[1], "r");
	fscanf(fptr, "%lf", &num);
	fclose(fptr);
	

	// Enter your code from Lab D to print JSON output (with name, email, number1, number2) goes under here
    
    
    if (fptr == NULL ){
        printf("Error. Cannot open requested file.");
        return 1;
    }
    
    
    printf("{"); 
    printf("\"name\": \"Talal Kurdi\",\n"); 
    printf("\"email\": \"talal.kurdi@student.manchester.ac.uk\",\n"); 
    printf("\"number1\": %.2f,\n", num); 
    printf("\"number2\": %.3e}\n", num);
	
	

	// Do not edit below here
	return 0;
}