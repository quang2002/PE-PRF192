#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() {
  	system("cls");
  	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n, i, ctr[21], j, k, max = -1000, firstmax, secondmax, count = 0;
	int c[21], char1;
	n = 7;
	for(i = 0; i < n; i++)
	{
		scanf("%d", &c[i]);
	}
  	// Fixed Do not edit anything here.
  	printf("\nOUTPUT:\n");
  	//@STUDENT: WRITE YOUR OUTPUT HERE:
	for(i = 0; i < n; i++)
    	{
        	ctr[i] = 1;
        	for(j = 0; j < n + 1; j++)
        	{
            	if (i != j)
            	{
		       		if(c[i] == c[j])
              		{
                 		ctr[i]++;
                 		for(k = j; k < n; k++)
                			c[k] = c[k+1];
                		n--;
                		j--;
               		}
            	}
        	}
    	}
    for(i = 0; i < n; i++)
    {
    	if(ctr[i] > max) max = ctr[i];
	}
	for(i = 0; i < n; i++)
    {
    	if(ctr[i] == max && c[i] % 2 == 0) count++;
	}
    if(count == 0) printf("Pew!!!");
    else
    {
        for(i = 0; i < n; i++)
        {
            if(ctr[i] == max && c[i] % 2 == 0) printf("%d ", c[i]);
        }
    }
	/*if (ctr[0] > ctr[1]){
        firstmax = ctr[0];
        secondmax = ctr[1];
    }else{
        firstmax = ctr[1];
        secondmax = ctr[0];
    }
    for(i = 2; i < n; i++){
        if(ctr[i] >= firstmax){
            secondmax = firstmax;
            firstmax = ctr[i];
        }else if (ctr[i] > secondmax){
            secondmax = ctr[i];
        }
    }
    for(i = 0; i < n; i++)
    {
    	if(ctr[i] == firstmax) 
		{
			printf("%c\n", c[i]);
			char1 = c[i];
			break;
		}
	}
	for(i = 0; i < n; i++)
    {
    	if(ctr[i] == secondmax && c[i] != char1) 
		{
			printf("%c", c[i]);
			break;
		}
	}*/
	/*for(i = 0; i < n; i++) 
	{	
		if(ctr[i] >= 2) 
		{
			printf("%c", c[i]);
			if(count != 1) printf("\n"); 
			count++;
			if(count ==  2) break;
		}
	}*/
  	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
  	printf("\n");
  	return(0);
}
