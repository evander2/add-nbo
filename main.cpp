#include "add.h"


int main(int argc, char* argv[]) {
	const int size = 4;
	
	FILE* file1 = fopen(argv[1], "rb");
	FILE* file2 = fopen(argv[2], "rb");
	unsigned char str1[10];
       	unsigned char str2[10];
	
	size_t n1, n2;
	n1 = fread(str1, sizeof(unsigned char), size, file1);
	n2 = fread(str2, sizeof(unsigned char), size, file2);

	fclose(file1);
	fclose(file2);
	
	uint32_t a = num(str1);
	uint32_t b = num(str2);
	uint32_t res;
	
	res = add(a, b);


	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n",a, a, b, b, res, res);
	
}
