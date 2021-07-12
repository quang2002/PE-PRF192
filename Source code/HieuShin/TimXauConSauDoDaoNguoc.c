#include <stdio.h>
#include <string.h> 

int main() 
{
	char o[256], p[256], * ptr = o;
	scanf("%256[^\n]%*c", o);
	scanf("%256[^\n]%*c", p);
	
	int lenp = strlen(p), i;
	while (ptr = strstr(ptr, p)) 
    {		
		for (i = lenp - 1; i >= 0; --i) 
        {
            *ptr = p[i];
            ptr++;
	    }
    }
	puts(o);
}