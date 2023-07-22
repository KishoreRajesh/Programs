// C program for generating a
// random number in a given range.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 int userIn;
 int computerChoice;

// Generates and prints 'count' random
// numbers in range [lower, upper].
void printRandoms(int lower, int upper,
							int count)
{
	int i;
	for (i = 0; i < count; i++) {
	    computerChoice = (rand() %
		(upper - lower + 1))+lower;
		printf("%d\n ", computerChoice );
	}

}
void userPrints(){
    printf( "Enter 1 for siccors,2 for rock and 3 for paper :" );
    scanf( "%d",&userIn );
    
}

void check(){
    if(userIn==1 && computerChoice==2){
        printf( "PC wins..." );
    }else if(userIn==computerChoice){
        printf( "Draw" );
     }else if(userIn==2 && computerChoice == 1){
        printf( "user Wins...." );
      }else if(userIn ==3 && computerChoice ==1){
          printf( "PC wins..." );
       }else if(userIn == 1 && computerChoice == 3){
           printf( "user Wins ...." );
        }else if(userIn == 2 && computerChoice ==3){
            printf( "PC wins...." );
         }else if(userIn == 3 && computerChoice == 2){
             printf( "user Wins...." ); 
          }
    
}
// Driver code
int main()
{
	int lower = 1, upper = 3, count = 1;

	// Use current time as
	// seed for random generator
	srand(time(0));

    userPrints();
	printRandoms(lower, upper, count);
	check();

	return 0;
}
