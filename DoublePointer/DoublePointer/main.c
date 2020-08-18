//
//  main.c
//  DoublePointer
//
//  Created by Jeong Ho Kang on 2020/08/18.
//  Copyright © 2020 Jeong Ho Kang. All rights reserved.
//

#include <stdio.h>

void SwapIntPtr(int **p1, int **p2){
    
    int * temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    
}

int main(int argc, const char * argv[]) {
    // 포인터 변수는 종류에 상관없이 무조건 주소값을 저장하는 변수. 다만 차이가 나는 것은 포인터변수가 가리키는 대상일 뿐이다.
    
    int num1 = 10;
    int num2 = 20;
    int * ptr1, * ptr2;
    ptr1 = &num1; ptr2 = &num2;
    printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);
    
    SwapIntPtr(&ptr1, &ptr2);
    printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);
    
    
    // 포인터배열
    int a = 10, b = 5, c= 15;
    int *atr1 = &a;
    int *btr1 = &b;
    int *ctr1 = &c;
    
    int * ptrArr[] = { atr1, btr1, ctr1 };
    int **dptr = ptrArr;
    
    printf("%d %d %d \n", *(ptrArr[0]), *(ptrArr[1]), *(ptrArr[2]));
    printf("%d %d %d \n", *(dptr[0]), *(dptr[1]), *(dptr[2]));
    
    // 포인터 : 함수내에서 함수 외부에 선언된 변수에 접근하는 방법을 제시해 줍니다.
    
    
    
    
    return 0;
}
