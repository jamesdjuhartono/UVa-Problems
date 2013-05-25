#include<iostream>
#include<stdio.h>
#include<map>

using namespace std;

int main(void){
    int TC, N, num;
    int maxi, start;
    map<int,int> mapper;

    scanf("%d",&TC);

    while(TC--){
        maxi = start = 0;
        scanf("%d", &N);
        mapper.clear();
        for(int i = 0; i < N; i++){
            scanf("%d",&num);

            if(mapper.find(num) == mapper.end()){
                mapper[num] = i;
            } else if(start<=mapper[num]){
                start = mapper[num]+1;
            } else{
                mapper[num] = i;
            }

            maxi = max(maxi,i-start+1);
        }
        printf("%d\n",maxi);
    }
    return 0;
}
