//Q53: Write a program to print the following pattern:
//*
//***
//*****
//*******
//*********
//*******
//*****
//***
//*

#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 9; i += 2) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = 7; i >= 1; i -= 2) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}