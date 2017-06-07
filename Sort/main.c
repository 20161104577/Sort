//
//  main.c
//  Sort
//
//  Created by 帅气的杨同学 on 2017/6/7.
//  Copyright © 2017年 帅气的杨同学. All rights reserved.
//

#include <stdio.h>

int main() {
    int i, j, num[100];
    for(i=0;i<10;i++) {
        scanf("%d",&num[i]);
    }
    for(i=0;i<10;i++) {
        for(j=i;j<10;j++) {
            if(num[i]>num[j]) {
                num[j]=num[i]+num[j];
                num[i]=num[j]-num[i];
                num[j]=num[j]-num[i];
            }
        }
        printf("%d ",num[i]);
    }
    printf("\n");
    return 0;
}
