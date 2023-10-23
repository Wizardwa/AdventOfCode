#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{	
	int floor_up = 1;
	int floor_down = -1;
	int start = 0;
	int i;
	int up;
	int down;

       char input[5];	

	printf("Direction: ");
	scanf("%s", &input);
	
	for(i = 0; i <= input[i]; ++i){
		if(input[i] == '('){
			start += 1;
			++up;
			//printf("floor up : %d\n", start);
		}else if (input[i] == ')'){	
			start += 1;
			++down;
			//printf("floor down : %d", start);
		}

	}
	printf("\nTotal floors up : %d\n", up);
	printf("Total floors down : %d\n", down);
	int total = up - down;
	int sum = up + down;
	printf("\nTotal floors: %d", sum);
	printf("\nPossible floor: %d", total);

	

}	
