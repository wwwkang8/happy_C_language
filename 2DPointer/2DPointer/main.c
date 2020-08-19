//
//  main.c
//  2DPointer
//
//  Created by Jeong Ho Kang on 2020/08/19.
//  Copyright © 2020 Jeong Ho Kang. All rights reserved.
//

#include <stdio.h>

void ShowArr2DStyle(int (*arr)[4], int column){
    
    int i, j;
    for(i = 0; i<column; i++){
        for(j=0; j<4; j++)
            printf("%d ", arr[i][j]);
            printf("\n");
    }
    printf("\n");
    
}

int Sum2DArr(int arr[][4], int column){
    
    int i,j , sum = 0;
    for(i=0; i<column; i++){
        for(j=0; j<4; j++){
            sum += arr[i][j];
        }
        
    }
    return sum;
        
    
}

int main(int argc, const char * argv[]) {
    
    int arr1[3][2];
    int arr2[2][3];
    
    printf("arr1: %p \n", arr1);
    printf("arr1+1: %p \n", arr1+1);
    printf("arr1+2: %p \n", arr1+2);
    
    printf("arr2: %p \n", arr2);
    printf("arr2+1: %p \n", arr2+1);

    // 2차원배열 포인터 함수
    int arr3[2][4] = {1,2,3,4,5,6,7,8};
    int arr4[3][4] = {1,1,1,1,3,3,3,3,5,5,5,5};
    
    ShowArr2DStyle(arr3, sizeof(arr3)/sizeof(arr3[0]));
    ShowArr2DStyle(arr4, sizeof(arr4)/sizeof(arr4[0]));
    printf("arr3의 합: %d \n", Sum2DArr(arr3, sizeof(arr3)/sizeof(arr3[0])));
    printf("arr4의 합: %d \n", Sum2DArr(arr4, sizeof(arr4)/sizeof(arr4[0])));
    
    
    return 0;
}
