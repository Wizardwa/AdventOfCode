#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *array = malloc(10 * sizeof(int));
	if(array == NULL){
		fprintf(stderr, "malloc failed\n");
		return -1;
	}else{
		printf("Success!!");
	}
	free(array);
}
