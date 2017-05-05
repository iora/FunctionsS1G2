#include <stdio.h>

/*	
*	Please define your functions after main().
*	You can import standard C / C++ libraries.
*	Recommended: add description of your code.
*/

int getSum(int myArray[]); // Liza Song
int getSumOfSquares(int myArray[]); // Reaksmey Kongkea Chea
void printAsChars(int myArray[]); // Reaksmey Kongkea Chea
double getAverage(int myArray[]); // Phyrum Rithchea
int subtractAllValues(int myArray[]); // Borey Cheng
float invertAllValues(int myArray[] ); // Borey Cheng
void printGroupMemberNames(); // Phyrum Rithchea

int main(void) {
	printGroupMemberNames();

	int row[500],i;
	for(i=0; i < 500; i++){
		row[i]=i;
	}
	printf("\nThis is the sum:\n");   
	getSum(row);
	printf("\nSubtract all the elements with -1:\n"); 
	subtractAllValues(row);
	printf("\nInvert all the value:\n"); 
	invertAllValues(row);
	printf("\nThe sum of square: \n");  
	getSumOfSquares(row);
	printf("\nPrint as character:\n");  
	printAsChars(row);
	printf("\nThis is the average: \n%f", getAverage(row));  
	return 1;
}



//Phyrum Rithchea
/* Print Group Member names */
void printGroupMemberNames()
{
  printf("Phyrum Rithchea\nLiza Song\nReaksmey Kongkea Chea\nBorey Cheng\n"); // Print member names by starting with a new line
}
// lIZA SONG
int getSum(int myArray[]){
    int getSum = 0, i;
	for (i = 0; i < 500; i++) {
		getSum += myArray[i];
	}
	printf("%i ", getSum);
	return 0;
}
// BOREY CHENG
int subtractAllValues(int myArray[]) {
	int i, tm[500];
	for (i = 0; i < 500; i++) {
		tm[i] = myArray[i];
	}
	for (i = 0; i < 500; i++) {
		tm[i] = tm[i] - 1;
	}
	for (i = 0; i < 500; i++) {
		printf("%i ", tm[i]);
	}
	return 0;
}
float invertAllValues(int myArray[] ){
	int i, temp, tm[500];
	for (i = 0; i < 500; i++){
		tm[i]=myArray[i];
	}
	for ( i=0; i < 500/2; i++)
	{
		temp=tm[i];
		tm[i] =tm[499-i];
		tm[499-i] = temp;
	}
	for ( i=0; i < 500; i++)
	{
		printf("%f ", (float)tm[i]);
	}
	return 0;
}

// Reaksmey Kongkea Chea
int getSumOfSquares(int myArray[]) {
	int n = 1;
	int result = 0;
	for (int i = 0; i < 499; i++) {
		n = myArray[i] * myArray[i];
		result += n;
	}
	printf("%i", result);
	return 0;
}
// Reaksmey Kongkea Chea
void printAsChars(int myArray[]) {
	for (int i = 0; i < 500; i++) {
		printf("%c ", myArray[i]);
	}
}

//Phyrum Rithchea
/* This code is used to find the average of the array (myArray)*/
double getAverage(int myArray[]){
  double getAverage; // Average is sometimes float number.
  int sum = 0, element;
  for (element = 0; element < 500; ++element)
  {
    sum += myArray[element];
  }
  return (double)sum/500;
}
