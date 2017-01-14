// # Author: Muhammad Fathir Irhas - 30/11/2016 - OpenKattis

#include <stdio.h>
#include <string.h>


char stream[1000000001];
int main(){
    int n, m, i, sold, j;
    while(1){
        scanf("%d %d", &n, &m);
        if (!n && !m) break;
        memset(stream, 0, sizeof(stream));
        sold = 0;
        for(i=0;i<n+m;i++){
            scanf("%d", &j);
            if(stream[j]) sold++;
            else{
                stream[j] = 1;
            }
        }
        printf("%d\n", sold);
    }
    return 0;
}
