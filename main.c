//
//  main.cpp
//  matrices
//
//  Created by Pablo Fernando Gonzalez de Lara on 23/10/17.
//  Copyright © 2017 Pablo Fernando Gonzalez de Lara. All rights reserved.
//

#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    srand(time(NULL));
    int resp;
    int i, j = 0;
    int col = 0, fil = 0;
    int matrizA [20][20];
    int matrizB [20][20];
    int min=1, max=9;
    int suma[20][20];
    
    printf("ingresa los valores de una matriz de maximo 20 numeros \n");
    printf("Ingresa el tamño de la matriz  A Y B \n");
    scanf("%d",&resp);
    col=resp;
    fil=resp;
    for (i=0; i<col; i++) {
        for (j=0; j<fil; j++) {
            matrizA[i][j]=min + rand () / (RAND_MAX / (max - min + 1 ) + 1 );
        }
    }
    for (i=0; i<col; i++) {
        for (j=0; j<fil; j++) {
            matrizB[i][j]=min + rand () / (RAND_MAX / (max - min + 1 ) + 1 );
        }
    }

    for (i=0; i<col; i++) {
        printf("\n");
        for (j=0; j<fil; j++) {
            printf("%d ",matrizA[i][j]);
        }
        printf("\n");


    }
    printf("\n");
    for (i=0; i<col; i++) {
        printf("\n");
        for (j=0; j<fil; j++) {
            printf("%d ",matrizB[i][j]);
        }
        printf("\n");
    }
    for (i=0; i<col; i++) {
        for (j=0; j<fil; j++) {
            suma[i][j]=matrizA[i][j]+matrizB[i][j];
        }
    }
    for (i=0; i<col; i++) {
        printf("\n");
        for (j=0; j<fil; j++) {
            printf("%d ",suma[i][j]);
        }
        printf("\n");
    }
        return 0;
}
