#include <stdio.h>

void main() { 
    int ans=0;
	for (int i = 0; i < 101; i++) {  
		ans = ans + i; 
	}
    printf("%d\n", ans);
}