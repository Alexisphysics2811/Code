#include <stdio.h> 

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

int main(){
    a();
    b();
    return 0;
}
