#include <bits/stdc++.h>
 
using namespace std;
unsigned long long int pow1(int a,int b){
	int p;
	unsigned long long int prod = 1;
	if(b ==0)
		return prod;
	else{	
	for(p =1 ; p <= b;p++ )
		prod = prod * a;
	return prod;
	}
}
 
int main()
{
    int t,i,j = 1,temp,t1;
    long long int n,x;
    string s = "manku";
    scanf("%d",&t);
    for(i = 0; i < t; i++){
        scanf("%lld",&n);
        j = 1;
        while(((n-1)*4) >= 5*((pow1(5,j))-1))
            j++;
        temp = j;
        j--;
        n = n - (5*(pow1(5,j)-1))/4;
        while(temp--){
            if(j==0){
                x=n%10;
                if(x == 0)
                    x = 5;
                x=(x-1)%5;
                printf("%c",s[x]);
            }
            else{
                x = (n-1)/pow1(5,j);
                if(x == 0)
                    x = 5;
                x = x % 5;
               printf("%c",s[x]);
            }
            j--;
        }
        printf("\n");
    }
    return 0;
}
 
