#ifndef SLL_H
#define SLL_H

//standard header
#include<stdio.h>
#include<stdlib.h>

// Macros for return values
#define SUCCESS 0
#define FAILURE -1
#define LIST_EMPTY -2

// Data type for linked list elements
typedef int data_t;

// Structure representing a node in a singly linked list
typedef struct node
{
	int data;
	struct node *link;
}Slist;

//function declaration

// Function to insert an element at the end of the linked list
int insert_at_last(Slist **head, int data);

 // Function to merge two sorted linked lists
int sorted_merge(Slist **head1, Slist **head2);

// Function to sort a linked list
int sort(Slist **head);

 // Function to print the elements of the linked list
void print_list(Slist *head);

#endif