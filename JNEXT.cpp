#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t,n,temp,i;
    scanf("%d",&t);
    while(t--){
    	vector <int> v;
    	scanf("%d",&n);
    	for(i = 0 ; i < n; i++){
    		scanf("%d",&temp);
    		v.push_back(temp);
    	}
    	if(next_permutation(v.begin(),v.end()) == 1)
    		for( i = 0; i < n; i++)
    			printf("%d",v[i]);
    	else
    		printf("-1");
    	v.clear();
    	printf("\n");
    }
	return 0;
} 
