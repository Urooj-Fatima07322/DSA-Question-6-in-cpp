#include<iostream>
using namespace std;

void uniqueValue(int array[],int len){
	for(int i=0; i<len; i++){
		bool duplicate=false;
		
		for(int j=0; j<i; j++){
			if(array[i]==array[j]){
				duplicate=true;
				break;
			}
		}
		if(!duplicate ){
			cout<<array[i]<<" ";
		}
	}
}

int main(){
	int array[]={4, 2, 7, 8, 1, 2, 5};
	int len=sizeof(array)/sizeof(array[0]);
	uniqueValue(array,len);
	return 0;
}