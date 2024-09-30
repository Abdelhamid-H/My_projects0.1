#include <stdio.h>
int max( int a, int b){
 if(a > b){
    return a;
 }
else {
    return b;
}

}
int main(){
    int grand;
    grand = max(100,150);
    printf("%d",grand);
    
    return 0;
}
