//
//  main.c
//  Pointer
//
//  Created by Jeong Ho Kang on 2020/07/16.
//  Copyright © 2020 Jeong Ho Kang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int arr[3] = {11, 22, 33};
    int *ptr = arr; //int * ptr =&arr[0] 과 같은 문장
    
    printf("%d %d %d \n", *ptr, *(ptr+1), *(ptr+2));
    
    printf("%d ", *ptr); ptr++; //11
    printf("%d ", *ptr); ptr++; //22
    printf("%d ", *ptr); ptr--; //33
    printf("%d ", *ptr); ptr--; // 22
    printf("%d ", *ptr); printf("\n"); //11
    
    
    //문제1
    int arrTest[5] = {1,2,3,4,5};
    int *ptr2 = arrTest;
    
    *(ptr2+1) = *(ptr2+1) + 2;
    *(ptr2+2) = *(ptr2+2) + 2;
    *(ptr2+3) = *(ptr2+3) + 2;
    *(ptr2+4) = *(ptr2+4) + 2;
    
    printf("%d %d %d %d %d", arrTest[0], arrTest[1], arrTest[2], arrTest[3], arrTest[4]);
    
    //문자열을 선언하는 방식 1) 배열을 통해 선언 2) char형 포인터로 선언
    char str1[ ] = "My String"; //배열 길이는 자동으로 계산. 문자열 변경 가능
    char *str2 = "Your String"; //포인터를 기반으로 문자열 선언. 첫문자 Y의 주소값이 반환된다
    
    // char str1[]은 그 자체로 문자열 전체를 저장하고 있는 배열
    // char *str2는 메모리상에 자동으로 저장된 문자열의 첫번째 문자를 단순히 가리키고 있는 포인터 변수
    
    
    
    return 0;
}
