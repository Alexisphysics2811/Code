#include <stdio.h>

void main() { 
    int ans=0;
	for (int i = 1; i < 101; i++) {  
		ans = ans + i; 
	}
    printf("%d\n", ans);
}