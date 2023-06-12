#include<stdio.h>
#define size 7
 int arr[size];

 void init(){
     int i;
     for(i=0;i<size;i++){
        arr[i]=-1;
     }
 }

 void insertusinglinearprobing(int value){
    int key=value % size;
    if(arr[key]==-1){
        arr[key]=value;
        printf("%d inserted at arr[%d]\n",value,key);

    }
    else{
        while(arr[key]!=-1){
            key++;
        }
        arr[key]=value;
    }
 }

 void insertusingquadraticprobing(int value){
    int i;
    int key=value % size;
    if(arr[key]==-1){
        arr[key]=value;
        printf("%d inserted at arr[%d]\n",value,key);

    }
    else{
          while(arr[key]!=-1){
        for(i=0;i<size;i++){
            key=key+(i*i);
        }
          }
    }
 }





 void print(){
    int i;
    for(i=0;i<size;i++){
        printf("arr[%d]=%d\n",i,arr[i]);
    }
 }

 int main(){
    init();
    insertusinglinearprobing(10);
    insertusinglinearprobing(4);
    insertusinglinearprobing(2);
    insertusinglinearprobing(3);

    printf("Hash table\n");
    print();
    printf("\n");
    return 0;
 }
