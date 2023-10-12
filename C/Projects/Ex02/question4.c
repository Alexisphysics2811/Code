#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

void a() { 
    int ans=0;
	for (int i = 0; i < 101; i++) {  
		ans = ans + i; 
	}
    printf("%d\n", ans);
}

void b() { 
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if ((i+j) % 2 == 0)
            {
                printf("\u2591");
            }
            else{
                printf("\u2589");
            }
        }
        printf("\n");
    }
}

void c() {
    srand(time(NULL));
    short int i, a;
    for (i = 0; i < 101; i++)
    {
        a = a + (rand() % 20);
    }
    printf("%d\n", a/i);
}

int main(){
    a();
    b();
    c();
    return 0;
}
