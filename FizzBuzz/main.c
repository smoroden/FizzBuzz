//
//  main.c
//  FizzBuzz
//
//  Created by Zach Smoroden on 2016-04-13.
//  Copyright © 2016 Zach Smoroden. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    for (int i = 1; i <= 100; i++){
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        } else if (i % 3 == 0) {
            printf("Fizz\n");
        } else if (i % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }
    return 0;
}
