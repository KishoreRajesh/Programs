#include<stdio.h>
#include<math.h>

void seperate(int,int);
void intToChar(int[],int);

int main(){
	int userIn, i, rem, rev, temp, count =0; 
	printf( "----------------CONVERTING NUMBER TO WORDS---------------------\n" );
	printf( "\nEnter a number :" );
	scanf( "%d",&userIn );
	printf( "\n---------------------------------------------------------------\n" );
	temp = userIn;
	while(temp != 0){
		rem = temp % 10;
		temp /= 10;
		count++;
	}
	printf( "\nRESULT :" );
	seperate(count,userIn);
	printf( "\n\n----------------------------------------------------------------\n" );
}

void seperate (int count,int userIn){
	int arr[count];
	int temp = userIn, rem =0;
	int i = count;
	while(temp != 0 ){
		rem = temp % 10;
		arr[i-1] = rem;
		temp /= 10;
		i--;
	}
	intToChar(arr,count);
}

void intToChar(int arr[],int count){
	for(int i=0;i<count;i++){
		if(arr[i] == 1){
			printf( "one " );
		}else if(arr[i]==2){
			printf( "two " );
		 }else if(arr[i] == 3){
		 	 printf( "three " );
		  }else if(arr[i] == 4){
		  	  printf( "four " );
		   }else if(arr[i] == 5){
		   	   printf( "five " );
		    }else if(arr[i] == 6){
		    	printf( "six " );
		 	 }else if(arr[i] == 7){
		 	 	 printf( "seven " );
			  }else if(arr[i] == 8){
			  	  printf( "Eight " );
			   }else if(arr[i] == 9){
			   	   printf( "Nine " );
			    }
	}	
}