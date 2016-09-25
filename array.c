//
//  array.c
//
//  Created by Reza Jatnika <rezajatnika@gmail.com> on Sun, 25 Sep 2016.
//  Copyright © 2016 Reza Jatnika. All rights reserved.
//

#include <string.h>
#include "array.h"

// Constructor
// MakeEmpty returns T as an empty array
void MakeEmpty(ArrayInt *T)
{
    SetNeff(T, 0);
}

// NumOfElement returns number of active element in the array
// and returns 0 if array is empty
int NumOfElement(ArrayInt T)
{
    return T.Neff;
}

// MaxNumberOfElement returns maximal element that the array can
// contain (element container maximum)
int MaxNumberOfElement(ArrayInt T)
{
    return IdxMax - IdxMin;
}

// GetFirstIndex returns the first element index
int GetFirstIndex(ArrayInt T)
{
    return IdxMin;
}

// GetLastIndex returns the last active element index
int GetLastIndex(ArrayInt T)
{
    return IdxMin + NumOfElement(T);
}

// GetElement returns T.TI[i]
ElementType GetElement(ArrayInt T, int i)
{
    return T.TI[i];
}

// SetELement sets T.TI[i] = v
void SetElement(ArrayInt *T, int i, ElementType v)
{
    (*T).TI[i] = v;
}

// SetNeff sets active element
void SetNeff(ArrayInt *T, int N)
{
    (*T).Neff = N;
}

void ReadArray(ArrayInt *T)
{
    int i, v;
    printf("Enter Neff: ");
    scanf("%d", &v);

    SetNeff(T, v);
    for (i = GetFirstIndex(*T); i < GetLastIndex(*T); i++) {
        printf("TI[%d] = ", i);
        scanf("%d", &(*T).TI[i]);
    }
}

// PrintArray prints T with format: [e1,e2,...,en] if T is not empty
void PrintArray(ArrayInt T)
{
    int i;
    char separator[2] = "";
    if (T.Neff == 0) {
        printf("[].\n");
    } else {
        printf("[");
        for (i = GetFirstIndex(T); i < GetLastIndex(T); i++) {
            printf("%s%d", separator, GetElement(T, i));
            strcpy(separator, ",");
        }
        printf("]\n");
    }
}

// ArrayAddition returns new T = T1 + T2
// T1.Neff and T2.Neff is equal
ArrayInt ArrayAddition(ArrayInt T1, ArrayInt T2)
{
    int i;
    ArrayInt T;

    T.Neff = T1.Neff;
    for (i = GetFirstIndex(T1); i < GetLastIndex(T1); i++) {
        T.TI[i] = GetElement(T1, i) + GetElement(T2, i);
    }
    return T;
}
