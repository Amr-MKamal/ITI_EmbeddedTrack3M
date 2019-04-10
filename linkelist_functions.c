#include <stdio.h>
#include <stdlib.h>
#include "stdtypes.h"
int n_st=0;
//linkedlist here is grouped together in array of structures unsorted and deleting a node doesn't decrease the size of array
// these structure needs to be rearranged either by cancelling the array and using  malloc or by sorting and decreasing size
struct node {
int id;
int age;
struct node *next;
struct node *prev;
};
//function to create a list of a size nodes , // to be added it to create any node
void * create_strcut(int num_node){return malloc(sizeof(struct node)*num_node);}
//function to link the nodes
void link_nodes(struct node* th, int num_node){
    //first and last
th[0].prev=NULL;
th[0].next=th+1;
th[num_node-1].next=NULL;
th[num_node-1].prev=th+(num_node-2);
for(int i=1 ; i<num_node-1;i++){
    th[i].prev=th+(i-1);
    th[i].next=th+(i+1);}

}
//function to add a node in a place
int get_size_dynamiclsit(struct node* list){int i=0 ;while(list[i].next!=NULL){i++;} return i;}
struct node* insert_node (struct node* n_new ,struct node* group , int plc){
    struct node* tmp;
int new_size=n_st+1; //adds a node to the place
group=realloc(group,sizeof(struct node)*new_size);
// if plc doesn't equal 0
if(plc==0){
    n_new->next=group+plc;
    n_new->prev=NULL;
    group[plc].prev=n_new;}
else if(plc==new_size-1) {
group[plc-1].next=n_new;
n_new->next=NULL;
n_new->prev=group+plc-1;
}
else {
group[plc-1].next=n_new;
group[plc].prev=n_new;
n_new->next=group+plc;
n_new->prev=group+plc-1;}
tmp=group+new_size;
tmp=n_new;
return group;
}
//shift by first element to get to the required
struct node* get_node(struct node* first , int postion){
    struct node* tmp=first;
for( int i=0 ; i<postion ; i++){tmp=tmp->next;}
return tmp;
}
struct node* get_node_bk(){

}
void delete_node(struct node* these ,struct node* group ){
    struct node* tmp;
    tmp=these->prev; // get the address of the previous node
tmp->next=these->next; // next of the previous node is the next of the current node
tmp=these->next; //get the address of the next node
tmp->prev=these->prev; //previous of the next node is the previous of the current node
these=NULL;
free(these);
}
int main (void){
   struct node* group ;
struct node ahmed;
struct node* test;
printf("enter the current number of nodes ");scanf("%d",&n_st);
 group = (struct node*)create_strcut(n_st); //create linked list
 link_nodes(group,n_st); //link the list
 group=insert_node(&ahmed,group,5);
printf("the address ahmed= ( %d ) which is the address of previous node which is %d ", &ahmed,group[5].prev);
ahmed.id=3;
test=get_node(group,5);
printf("ahmed id is %d after inserting him in address ",test->id);
delete_node(test,group);
test=get_node(group,5);
printf("ahmed id is %d after inserting him in address ",test->id);
}

