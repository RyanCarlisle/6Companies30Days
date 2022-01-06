/*Find max 10 numbers in a list having 10M entries.*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int i;
    int arr[10000000];
	for(i = 0; i < 10000000; i++){
        cin>>arr[i];
    }

    priority_queue<int, vector<int>, greater<int>> pq;
    for(i = 0; i < 10; i++){
        pq.push(arr[i]);
    }

    for(i = 10; i < 10000000; i++){
        if(pq.top() < arr[i]){
            pq.pop();
            pq.push(arr[i]);
        }
    }

    while(!pq.empty()){
        cout<<pq.top()<<"\n";
        pq.pop();
    }
	return 0;
}