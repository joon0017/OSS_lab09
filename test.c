#include <stdio.h>

int cal_result(int count){
    int result=0;
    for(int i=1;i<=count;i++){
        result=result+i;
    }
    return result;
}

int main(){
    int count = 0;
    int result = 0;
    printf("ī��Ʈ���� ��� ���ڸ� ���մϴ�. ���ڸ� �Է��ϼ���!(0����): ");
    scanf("%d",&count);
    result=cal_result(count);
    printf("%d",result);
    return 0;
}