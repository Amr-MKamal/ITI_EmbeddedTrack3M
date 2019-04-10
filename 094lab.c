#include <stdio.h>
#include <stdlib.h>
#include "stdtypes.h"
struct student {
int id;
int age;
char * name
};
char* dynamic_string( char* const isis ){
char tmpname[100];

return (char*)malloc(sizeof(isis));
}

void scan_array(int* arr,int arr_size ){for (int i=0; i<arr_size;i++){scanf("%d",&arr[i]);}}
int main (void){
int size_of_arr ,sum=0; int* arr; int new_size;
printf("please enter size of arr");scanf("%d",&size_of_arr);
arr=(int*) malloc(size_of_arr* sizeof(int));
printf("please enter array");
scan_array(arr,size_of_arr);
printf("please enter new size of arr");
scanf("%d",&new_size);
realloc(arr,new_size* sizeof(int));
printf("please enter new elements");
for (int j =size_of_arr ;j<new_size; j++) {scanf("%d",&arr[j]); }
for (int i=0 ; i<new_size;i++){printf("the array is %d",arr[i]);}
printf("sum is %d",sum);}
    /*
struct student* group ; int group_size;
printf("please enter size of group");scanf("%d",&group_size);
group=(struct student*) malloc(sizeof(struct student)*group_size);

group[0].age=25 ;group[0].id=1125;group[0].name="ahmed";
group[1].age=23 ;group[1].id=1123;group[1].name="amr";

printf("second student is %s ",group[1].name);
*/

void delete_node(struct node* these ,struct node* group ){
    struct node* tmp;
    tmp=these->prev; // get the address of the previous node
tmp->next=these->next; // next of the previous node is the next of the current node
tmp=these->next; //get the address of the next node
tmp->prev=these->prev; //previous of the next node is the previous of the current node
free(these);
}

//progrqam 1
/*int size_of_arr ,sum=0; int* arr; int new_size;
printf("please enter size of arr");scanf("%d",&size_of_arr);
arr=(int*) malloc(size_of_arr* sizeof(int));
printf("please enter array");
scan_array(arr,size_of_arr);
printf("please enter new size of arr");
scanf("%d",&new_size);
realloc(arr,new_size* sizeof(int));
printf("please enter new elements");
for (int j =size_of_arr ;j<new_size; j++) {scanf("%d",&arr[j]); }
for (int i=0 ; i<new_size;i++){sum+=arr[i];}
printf("sum is %d",sum);*/
