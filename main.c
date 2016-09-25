//
//  main.c
//
//  Created by Reza Jatnika <rezajatnika@gmail.com> on Sun, 25 Sep 2016.
//  Copyright © 2016 Reza Jatnika. All rights reserved.
//

#include "array.h"

int main(int argc, const char *argv[])
{
    int i, j;
    ArrayInt T1, T2, T3;

    printf("Array T1\n");
    ReadArray(&T1);
    PrintArray(T1);

    printf("\nArray T2\n");
    ReadArray(&T2);
    PrintArray(T2);

    printf("\nArray T1 + T2\n");
    T3 = ArrayAddition(T1, T2);
    PrintArray(T3);
    return 0;
}
