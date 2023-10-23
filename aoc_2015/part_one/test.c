#include <stdio.h>
#include <stdlib.h>

int main ()
{
	FILE* fptr;
	int up, down;
	int i;

	fptr = fopen("inputV", "r");
	
	char *text = malloc(7001 * sizeof(int));
	
	if(text == NULL){
		fprintf(stderr, "malloc failed\n");
		return -1;
	}else{
		while(fgets(text, sizeof(text), fptr)){
			for(i = 0; i <= text[i]; ++i){
				if(text[i] == '('){
					++up;
				}else if(text[i] == ')'){
					++down;
				}
			}
		}
		printf("\nTotal floors up: %d", up);
		printf("\nTotal floors down: %d", down);
		int possible_dir = up - down;
		int total = up + down;

		printf("\nPossible floor: %d", possible_dir);
		printf("\nTotal floors: %d", total);
	
	}
	free(text);
	fclose(fptr);	
}
