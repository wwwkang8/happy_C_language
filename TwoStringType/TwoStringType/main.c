//
//  main.c
//  TwoStringType
//
//  Created by Jeong Ho Kang on 2020/07/19.
//  Copyright © 2020 Jeong Ho Kang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    char str1[ ] = "My String"; //변수형태의 문자열
    char * str2 = "Your String"; //상수형태의 문자열
    printf("%s %s \n", str1, str2 );
    
    str2 = "Our String";// 가리키는 대상 변경
    printf("%s %s \n", str1, str2 );
    
    str1[0] = 'X'; // 문자열 변경 성공!
    str2[0] = 'X'; // 문자열 변경 실패!
    printf("%s %s \n", str1, str2 );
    
    
    return 0;
}
