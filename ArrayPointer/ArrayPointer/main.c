//
//  main.c
//  ArrayPointer
//
//  Created by Jeong Ho Kang on 2020/07/14.
//  Copyright © 2020 Jeong Ho Kang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int arr1[3] = {1 , 2, 3};
    double arr2[3] = { 1.1, 2.2, 3.3};
    
    printf("%d %g \n", *arr1, *arr2);
    
    *arr1 += 100;
    *arr2 += 120.5;
    
    printf( "%d %g \n", arr1[0], arr2[0]);
    
    int arr3[3] = { 15, 25, 35};
    int *ptr = &arr3[0]; //int *ptr = arr과 같은 문장
    
    printf("%d %d \n", ptr[0], arr3[0]);
    printf("%d %d \n", ptr[1], arr3[1]);
    printf("%d %d \n", ptr[2], arr3[2]);
    printf("%d %d \n", *ptr, *arr3);
    
    
    
    return 0;
}
