#include <stdio.h>
int main(){
int i;
int t =4;
int x,y,z;
int k = 0;


x = 1;
y = 1;
z= 1;
for (i=0; i<t; i++){
    k= k+(x+y+z);

}
printf("k = %d", k);
return 0;
}
