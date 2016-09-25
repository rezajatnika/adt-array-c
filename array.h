#ifndef ARRAY_H
#define ARRAY_H

#include <stdio.h>

// General constants
#define IdxMax 100
#define IdxMin 0
#define IdxUndef -999
#define boolean unsigned char
#define true  1
#define false 0

typedef int ElementType;

typedef struct {
    ElementType TI[IdxMax];
    int Neff;
} ArrayInt;

// Constructor
// MakeEmpty returns T as an empty array (T.Neff = 0)
void MakeEmpty(ArrayInt *T);

// NumberOfElement returns number of active element in the array
// and returns 0 if array is empty
int NumOfElement(ArrayInt T);

// MaxNumberOfElement returns maximal element that the array can
// contain (element container maximum)
int MaxNumberOfElement(ArrayInt T);

// GetFirstIndex returns the first element index
int GetFirstIndex(ArrayInt T);

// GetLastIndex returns the last active element index
int GetLastIndex(ArrayInt T);

// GetElement returns T.TI[i]
ElementType GetElement(ArrayInt T, int i);

// SetELement sets T.TI[i] = v
void SetElement(ArrayInt *T, int i, ElementType v);

// SetNeff sets active element
void SetNeff(ArrayInt *T, int N);

// ReadArray sets input Neff and each element
void ReadArray(ArrayInt *T);

// PrintArray prints T with format: [e1,e2,...,en] if T is not empty
void PrintArray(ArrayInt T);

// IsEmpty returns true if NumberOfElement(T) = 0
boolean IsEmpty(ArrayInt T);

// IsFull returns true if NumberOfElement(T) is equal to MaxNumberOfElement(T)
boolean IsFull(ArrayInt T);

// ArrayAddition returns new T = T1 + T2
// T1.Neff and T2.Neff is equal
ArrayInt ArrayAddition(ArrayInt T1, ArrayInt T2);

// IsEq returns true if T1 == T2 both Neff and its element value
boolean IsEq(ArrayInt T1, ArrayInt T2);

#endif
