# include <stdio.h>
# include <string.h>

int main( )
{

	FILE *filePointer ;
    FILE * fptr;
    char fn[50];
    char str[] = "Basics Filehanling\n";
	char dataToBeWritten[50]
		= "Basics of File Handling";
    FILE *fptr1;
    FILE * file_pointer;
    char buffer[30], c;
    file_pointer = fopen("fprintf_test.txt", "r");
    fgets(buffer, 50, file_pointer);
    printf("%s\n", buffer);
    fptr1 = fopen("fprintf_test.txt", "w"); // "w" defines "writing mode"
        /* write to file */
    fprintf(fptr1, "Basic File handling\n");
    for (i = 0; str[i] != '\n'; i++) {
                /* write to file using fputc() function */
                fputc(str[i], fptr);
            }
	filePointer = fopen("filename.c", "w") ;
	if ( filePointer == NULL )
	{
		printf( "filename.c file failed to open." ) ;
	}
	else
	{

		printf("The file is now opened.\n") ;
		if ( strlen ( dataToBeWritten ) > 0 )
		{
			fputs(dataToBeWritten, filePointer) ;
			fputs("\n", filePointer) ;
		}
		fclose(filePointer) ;

		printf("Data successfully written in file filename.c\n");
		printf("The file is now closed.") ;
	}
	fclose(fptr);
    fclose(fptr1);
	return 0;
}
