//
//  main.c
//  FuzzBizzNezz
//
//  Created by Cody Zazulak.
//  All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int x;
    int nezz;
    int fuzz;
    int bizz;
    
    puts("Pick a number for Nezz:");
    scanf("%d",&nezz);
    puts("Pick a number for Fuzz:");
    scanf("%d", &fuzz);
    puts("Pick a number for Bizz:");
    scanf ("%d", &bizz);
    
    for (x = 1; x <= nezz; x++) {
        if ((x % fuzz == 0) && (x % bizz == 0)) {
            printf("FuzzBizz\n");
        } else if (x % fuzz == 0) {
            printf("Fuzz\n");
        } else if (x % bizz == 0)  {
            printf("Bizz\n");
        } else {
            printf("%d\n", x);
        }
    }
    
    return 0;
}
