//
//  main.c
//  c-learning
//
//  Created by 杜晔 on 2019/9/30.
//  Copyright © 2019 杜晔. All rights reserved.
//
//
//#include <stdio.h>
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello, World!\n");
//    return 0;
//}

#include <stdio.h>
//void func(void);
int main(void)
{
    float weight,value;
    printf("输入你的体重？");
    scanf("%f",&weight);
    value = 200*weight;
    printf("你值%.2f块钱。",value);
    return 0;

}

