# include <stdio.h>
# include <string.h>

int main( )
{
    // writing in a FILE
	FILE *filePointer ;
	char a[1000] = "This is the text that is being uploaded to a file";
	filePointer = fopen("text.txt", "w") ;

	if ( filePointer == NULL )
	{
		printf( "text.txt failed." ) ;
	}
	else
	{
		printf("The file is now opened.\n") ;

		if ( strlen ( a ) > 0 )
		{
			fputs(a, filePointer) ;
			fputs("\n", filePointer) ;
		}
		fclose(filePointer) ;
		printf("Data written in text.txt");
		printf("Closed.") ;
	}

	//READING from a FILE
    FILE *filePointer2 = fopen("text.txt", "r") ;
    char b[1000];
    if ( filePointer2 == NULL )
    {
        printf("text.txt failed.") ;
    }
    else
    {
        printf("The file opens") ;
        while( fgets (b,1000, filePointer2 ) != NULL )
        {
            printf( "%s" , b ) ;
         }
        fclose(filePointer2) ;

        printf("Data read from text.txt");
        printf("Closed.") ;
    }
    return 0;
}
