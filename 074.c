#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct two_int {
 int element;
 int howmuch;
};
 struct two_int most_pop(int* arr) {
    struct two_int mp ; int how_much[5]={0,0,0,0,0}; int max_tmp=0;
for ( int i =0 ; i<5 ; i++){
    for ( int j=i+1 ; j<5;j++){if (arr[i]==arr[j]){how_much[i]++;}}}
    // find max in how much
  mp.howmuch=how_much[get_max(how_much,5)]+1;

  mp.element=arr[get_max(how_much,5)];
  return mp;
    }
int get_max ( int * arr , int arr_size){
    int max_tmp=arr[0]; int max_tmpindex=0;
 for ( int m=1 ; m<arr_size ;m++){if ( arr[m]>max_tmp){max_tmp= arr[m];max_tmpindex=m;}}
 return max_tmpindex;
}

void swap (int *x , int *y){*x=*x+*y;*y=*x-*y;*x=*x-*y;}
void scan_array(int* arr,int arr_size ){for (int i=0; i<arr_size;i++){scanf("%d",&arr[i]);}}
void print_array(int* arr,int arr_size ){for (int i=0; i<arr_size;i++){printf(" \n %d",arr[i]);}}
void rotate_step(int * arr , int arr_size){ //shift array lift and add an element
    int temp=arr[0];
    for (int i=0 ; i<=arr_size-2; i++){swap(&arr[i],&arr[i+1]);} //one left shift
    arr[arr_size-1]=temp;}
void add_arr(char *arr1 , char *arr2,char *arr3){
 int i=0 ; int j=0;
 while (arr1[i]!='\0'){ arr3[i]=arr1[i] ;i++;}
 while (arr2[j]!='\0'){ arr3[i+j]=arr2[j] ;j++;}
 arr3[i+j]='\0';
 }
int manual_stcmp ( char* arr1 , char* arr2){
int j=1; int i=0;
while ((arr1[i]==arr2[i]) && (arr1[i]!='\0') && (arr2[i]!='\0')){ i++;}
if (arr1[i]==arr2[i]){j=0;}
return j;
}
int main (void){


/*	int in_arr[5]={0,1,2,3,4} ; int ou_arr[5]={90,80,70,60,50}; int i ;
	for (i=0 ; i<5 ; i++){swap(&in_arr[i],&ou_arr[4-i]);}
	print_array(in_arr,5); print_array(ou_arr,5);
	ptr=rotate_step;
	printf("please enter the array");
	scan_array(in_arr,5);
	printf("please enter number of steps");
	scanf("%d",&n_steps);
	for(i=0;i<n_steps;i++){rotate_step(in_arr,5);}
	print_array(in_arr,5); */

}
