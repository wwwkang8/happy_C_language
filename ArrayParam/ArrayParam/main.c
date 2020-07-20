//
//  main.c
//  ArrayParam
//
//  Created by Jeong Ho Kang on 2020/07/19.
//  Copyright © 2020 Jeong Ho Kang. All rights reserved.
//

#include <stdio.h>

void ShowArrayElem(int *param, int len){
    int i;
    for(i=0; i<len; i++){
        printf("%d ", param[i]);
        
    }
    printf("\n");
}

void AddArrayElem(int param[], int len, int add){
    int i;
    for(i=0; i<len; i++){
        param[i] += add;
    }
}

void AddArrayElem2(int param2[], int len, int add){
    int j;
    for(j=0; j<len; j++){
        param2[j] += add;
    }
}

int main(int argc, const char * argv[]) {
    
    int arr[3] = {1,2,3};
    AddArrayElem(arr, sizeof(arr)/sizeof(int), 1);
    ShowArrayElem(arr, sizeof(arr)/sizeof(int));
    
    AddArrayElem(arr, sizeof(arr)/sizeof(int), 2);
    ShowArrayElem(arr, sizeof(arr)/sizeof(int));
    
    AddArrayElem(arr, sizeof(arr)/sizeof(int), 3);
    ShowArrayElem(arr, sizeof(arr)/sizeof(int));
    
    
    return 0;
}
