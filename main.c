#include <stdio.h>

int main(int argc, char* argv[]){
        if(!(argc % 3)) printf("fizz");
        if(!(argc % 5)) printf("buzz");
        if(argc % 3 && argc % 5) printf("%i",argc);
        printf("\n");
        return argc == 100 ? 0 : main(++argc,0);
}
