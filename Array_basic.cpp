#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void is_Sort(int arr[],int size){
	sort(arr,arr+size);
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
bool search_element(int arr[],int size,int key){
	int b=0;
	for(int i=0;i<size;i++){
		if(arr[i]==key){
			b=1;
		 cout<<"Element is found";
          	break;
        }
        else{
        	b=0;
		}
      
	}
	if(b==0){
		cout<<"Not found";
	}
	cout<<endl;
	is_Sort(arr,size);
	
}
void reverse_array(int arr[],int size){
	for(int i=size-1;i>=0;i--){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	search_element(arr,size,7);
}
void delete_at_any_Position(int arr[],int size,int element){
	for(int i=0;i<2;i++){
		cout<<arr[i]<<" ";
	}
	for(int i=3;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	reverse_array(arr,size);
}
void insert_at_first_Position(int arr[],int size,int element){
	cout<<element<<" ";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	delete_at_any_Position(arr,size,3);
}
void insert_element_in_array(int arr[],int size,int element){
	for(int i=0;i<3;i++){
		cout<<arr[i]<<" ";
	}
	cout<<element<<" ";
	for(int i=3;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	insert_at_first_Position(arr,size,9);
	
}
int main(){
	int size;
	cin>>size;
	int arr[100];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	insert_element_in_array(arr,size,8);
}
