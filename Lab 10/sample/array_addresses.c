/*
 * The name of the array evaluates to the address of the first element
 * of the array.
 */
 #include <stdio.h>
 
 int main() {
 
	char charArray[5];

	printf("charArray: \t%p\n", charArray);
	printf("&chararray[0]: \t%p\n", &charArray[0]);
	printf("&charArray: \t%p\n", &charArray);
	
	return 0;
}