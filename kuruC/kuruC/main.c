//
//  main.c
//  kuruC
//
//  Created by 蔡 ミンソク on 2016. 10. 31..
//  Copyright © 2016년 蔡 ミンソク. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    printf("Hello");
    printf("World\n");
    printf("\n\n");
    printf("Windows 2000\tMicrosoft\n");
    printf("Mac OS X\tApple\n");
    
    printf("%d+%d=%d\n", 100, 200, 100+200);
    
    printf( "%f\n", 10.0 + 3.0);
    printf( "%f\n", 10.0 - 3.0);
    printf( "%f\n", 10.0 * 3.0);
    printf( "%f\n", 10.0 / 3.0);
    
    printf( "%d\n", 0x5D);
    printf( "%d\n", 023);
    printf( "%d\n", 0x5D + 023 * 3);
    
    return 0;
}
