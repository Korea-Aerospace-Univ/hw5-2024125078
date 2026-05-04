#include <stdio.h>

int main(void)
{
    int N, A=900, B=750, C=200;
    //N: 금액, Excharge: 잔돈, 물건 A, 물건 B, 물건 C
    int i=0, j=0, k=0;
    bool count=false;
    scanf("%d", &N);
    //금액 입력
    
    for(i=1;i<=N/A; i++){ //A의 최대 구매 개수 = N을 A 가격으로 나누니
        for(j=2; j<=N/B; j+=2){ //B의 최대 구매 개수
            for(k=1; k<=N/C ; k++){ //C의 최대 구매 개수
                if(k<i || k<j) {
                // C 상품의 수량은 A 상품의 수량보다 작거나 B 상품의 수량보다 작다.
                    if(A*i + B*j + C*k == N) { //구매한 가격이 N과 같으면 printf 출력
                        printf("%d %d %d\n", i, j, k);
                        count=true;
                    }
                }
            }
        }
    }

    if(!count) printf("none\n");
    
    return 0;
}
