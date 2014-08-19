#include <stdio.h>

/** FizzBuzz Assignment :
 * Write a program that prints the numbers from 1 to 100. But for multiples of
 * three print "Fizz" instead of the number and for the multiples of five print
 * "Buzz". For numbers which are multiples of both three and five print "FizzBuzz"
 */

int main(int argc, char* argv[]){
        if(!(argc % 3)) printf("Fizz");
        if(!(argc % 5)) printf("Buzz");
        if(argc % 3 && argc % 5) printf("%i",argc);
        printf("\n");
        return argc == 100 ? 0 : main(++argc,0);
}
