#include <cstdio>

using namespace std;

int main(){
    int input[4][4];

    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            scanf("%d",&input[i][j]);

        }
    }

    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            if(j==0){
                printf("%d",input[j][i]);
            }else{
                printf(" %d",input[j][i]);
            }
        }
        printf("\n");
    }
    return 0;
}