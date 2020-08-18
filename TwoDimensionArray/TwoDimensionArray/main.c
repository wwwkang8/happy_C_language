//
//  main.c
//  TwoDimensionArray
//
//  Created by Jeong Ho Kang on 2020/07/22.
//  Copyright © 2020 Jeong Ho Kang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    
    int arr1[3][4];
    int arr2[7][9];
    
    printf("arr1 %ld \n", sizeof(arr1));
    printf("arr1 %ld \n", sizeof(arr2));
    
    int villa[4][2];
    int popu, i,j;
    
    //가구별 거주인원입력 받기
    for(i=0; i<4; i++){
        for(j=0; j<2; j++){
            printf("%d층 %d호 인구수: ", i+1, j+1);
            scanf("%d", &villa[i][j]);
        }
    }
    
    //빌라의 층별 인구수 출력하기
    for(i=0; i<4; i++){
        popu = 0;
        popu += villa[i][0];
        popu += villa[i][1];
        printf("%d층 인구수 : %d \n", i+1, popu);
    }
    
    
    return 0;
}
