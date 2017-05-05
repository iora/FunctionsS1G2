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
	printf("\nSubtract all the elements with -1:\n"); //working
	subtractAllValues(row);
	printf("\nInvert all the value:\n");   //working
	invertAllValues(row);
	return 1;
}



//Phyrum Rithchea
/* Print Group Member names */
void printGroupMemberNames()
{
  printf("Phyrum Rithchea\nLiza Song\nReaksmey Kongkea Chea\nBorey Cheng\n"); // Print member names by starting with a new line
}


}
// BOREY CHENG
int subtractAllValues(int myArray[]){
	int i;
	for ( i=0 ; i < 500; i++){
		myArray[i]-1;
	}
	for ( i=0 ; i < 500; i++){
		printf("%i ", myArray[i]);
	}
	return 0;
}
// BOREY CHENG
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
	for (int i = 0; i < 500; i++) {
		n = myArray[i] * myArray[i];
		result += n;
	}
	return result;
}
// Reaksmey Kongkea Chea
void printAsChars(int myArray[]) {
	for (int i = 0; i < 500; i++) {
		printf("%c\n ", myArray[i]);
	}
}

//Phyrum Rithchea
/* Print Group Member names */
void printGroupMemberNames()
{
  printf("Phyrum Rithchea\nLiza Song\nReaksmey Kongkea Chea\nBorey Cheng\n"); // Print member names by starting with a new line
  return 0;
}

//Phyrum Rithchea
/* This code is used to find the average of the array (myArray)*/
double getAverage(int myArray[]);
{
  float getAverage; // Average is sometimes float number.
  int sum = 0, n = 500, element;
  for (element = 0, element < n, ++element)
  {
    sum += myArray[element];
  }
  getAverage = sum / n;
  return getAverage;
}
