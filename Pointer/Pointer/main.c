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
    
    
    
    return 0;
}
