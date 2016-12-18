#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

typedef struct{
    int alice;
    int bob;
}Tuple;

Tuple CalculatePoints(int a0,int a1,int a2, int b0, int b1, int b2){
    Tuple t;
    t.alice = 0;
    t.bob = 0;
    int a[3][3] = {{a0,b0}, {a1,b1}, {a2,b2}};
    for(int i=0;i<3;i++){
        if(a[i][0]>a[i][1]){
            t.alice++;
        }else if(a[i][0]<a[i][1]){
            t.bob++;
        }
    }    
    return t;
}

int main(){
    int a0; 
    int a1; 
    int a2; 
    scanf("%d %d %d",&a0,&a1,&a2);
    int b0; 
    int b1; 
    int b2; 
    scanf("%d %d %d",&b0,&b1,&b2);
    Tuple t = CalculatePoints(a0,a1,a2,b0,b1,b2);
    printf("%d %d",t.alice, t.bob);
    return 0;
}
