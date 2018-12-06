#include <stdio.h> 
#include <stdlib.h> 

int main( void ) 
{ 
  FILE      *ptrFile = fopen( "index.html", "w"); 

	int M = 10;
	int N = 3;
	int REM = abs(M);
	int NABS = abs(N);
	int QUOT = 0;
  

  fprintf( ptrFile, "<HTML>\n "); 
  fprintf( ptrFile, "<HEAD> <TITLE> The DIVINT algorithm </TITLE> </HEAD>\n" ); 
  fprintf( ptrFile, "<BODY BGCOLOR=\"#110022\" TEXT=\"#FFBBAA\"> \n"); 
  fprintf( ptrFile, "<p>This file was created from a C program</p>\n"); 
  fprintf( ptrFile, "<p>The value of M is %d. </p>\n",M); 
  fprintf( ptrFile, "<p>The value of N is %d. </p>\n",N); 
  fprintf( ptrFile, "<p>The value of REM is %d. </p>\n",REM); 
  fprintf( ptrFile, "<p>The value of NABS is %d. </p>\n",NABS); 
  fprintf( ptrFile, "<p>The value of QUOT is %d. </p>\n",QUOT); 
  fprintf( ptrFile, "<p> </p>\n"); 
  fprintf( ptrFile, "<p> </p>\n"); 
  fprintf( ptrFile, "<p>While loop: </p>\n"); 

	while(REM > NABS) {
		REM = REM - NABS;
		QUOT = QUOT + 1;
		fprintf( ptrFile, "<p>The value of REM is %d. </p>\n",REM); 
		fprintf( ptrFile, "<p>The value of QUOT is %d. </p>\n",QUOT); 
	}


  fprintf( ptrFile, "</BODY>\n"); 
  fprintf( ptrFile, "</HTML>"); 
  fclose( ptrFile ); 
  
  return EXIT_SUCCESS; 
}
