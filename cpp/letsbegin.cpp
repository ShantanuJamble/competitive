#include<iostream>
using namespace std;
int arr[4]={7,5,3,2};
int search(long long i){
	return(i==arr[0]||i==arr[1]||i==arr[2]||i==arr[3]||i==1||i==0);
}
int main(){

	long long x,rem,qot,cnt;
	int t;
	cin>>t;
	while(t--){
		cin>>x;
		cnt=0;
		while(x){
			//cout<<"One";
			if(search(x)){
				cnt+=1;
				break;
			}
			for(int i=0;i<4&&x!=0;i++){
				if(x%arr[i]==0&&x<arr[i]){
					break;
				}
				cnt+=x/arr[i];
				x%=arr[i];
				
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
