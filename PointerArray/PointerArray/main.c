//
//  main.c
//  PointerArray
//
//  Created by Jeong Ho Kang on 2020/07/19.
//  Copyright © 2020 Jeong Ho Kang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //int *arr1[20]; //길이가 20인 int형 포인터배열 arr1
    //double *arr2[30]; //길이가 30인 double형 포인터배열 arr2
    
    int num1 = 10, num2 = 20, num3 = 30;
    int *arr[3] = {&num1, &num2, &num3};
    
    printf("%d %p \n", *arr[0], arr[0]);
    printf("%d %p \n", *arr[1], arr[1]);
    printf("%d %p \n", *arr[2], arr[2]);
    
    //문자열을 저장하는 포인터배열
    char * strArr[3] = {"Simple", "String", "Array"};
    char * strArr2[4] = {"hello", "world", "hdfd", "dfdfd" };
    printf("%s \n", strArr[0]);
    printf("%s \n", strArr[1]);
    printf("%s \n", strArr[2]);
    
    
    
    
    
    
    return 0;
}
