//
//  main.c
//  ConstPointer
//
//  Created by Jeong Ho Kang on 2020/07/20.
//  Copyright © 2020 Jeong Ho Kang. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    /* 포인터 변수가 참조하는 대상의 변경을 허용하지 않는 const 선언 */
    int num = 20;
    const int *ptr = &num;
    //*ptr = 30; // 컴파일 에러. ptr이 가리키는 변수에 저장된 값을 변경하는 것을 허용하지 않는다.
    num = 50; // 컴파일 성공
    
    /* 포인터 변수의 상수화 */
    int num1 = 20;
    int num2 = 30;
    int * const ptr2 = &num1; //포인터 변수 ptr이 상수라는 뜻은 한번 주소값이 저장되면, 그 값의 변경 불가.
    // 한번 가리키기 시작한 변수를 끝까지 가리켜야 한다.
    // ptr2 = &num2; //컴파일 에러. 한번 가리키는 변수를 끝까지 가리키고 변경할 수 없다.
    *ptr2 = 40; // 컴파일 성공. 그 안의 값은 변경 가능하다
    
    
    
    
    
    
    return 0;
}
