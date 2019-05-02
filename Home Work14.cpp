//
//  main.cpp
//  Home Work 14
//
//  Created by 何宗愷 on 2019/4/11.
//  Copyright © 2019 何宗愷. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    printf("請輸入三邊長:");
    float A,B,C;
    scanf("%f",&A);
    scanf("%f",&B);
    scanf("%f",&C);
    if ((A+B)<C || (A+C)<B || (B+C)<A)
    {
        printf("這不是三角形\n");
    }
    else if ((A*A+B*B==C*C) || (A*A+C*C==B*B) || (B*B+C*C==A*A) )
    {
        printf("為直角三角形\n");
    }
    else if ((A*A+B*B>C*C) || (A*A+C*C>B*B) || (B*B+C*C>A*A) )
    {
        printf("為鈍角三角形\n");
    }
    else
    {
        printf("為銳角三角形\n");
    }
    return 0;
}
