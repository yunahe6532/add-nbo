#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <netinet/in.h>

int main(int argc, char *argv[]){
    	uint32_t f1, f2, sum;
    	FILE *fp = fopen(argv[1],"r");
	fread(&f1, sizeof(f1),1,fp);
	fp = fopen(argv[2],"r");
	fread(&f2, sizeof(f2),1,fp);

	f1 = ntohl(f1);
	f2 = ntohl(f2);
	sum = f1+f2;

    	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", f1, f1, f2, f2, sum, sum);
    
    return 0;
}
