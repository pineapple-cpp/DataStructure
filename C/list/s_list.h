// s_list.c - 2021年 八月 30日
// 最简单的单向链表

#ifndef S_LIST_H_
#define S_LIST_H_

#include <stdio.h>
#include <stdlib.h>

#define MAX_TITLE 50
#define MAX_AUTHOR 50

typedef struct book {
	char title[MAX_TITLE];
	char author[MAX_AUTHOR];
	double price;
} Item;

typedef struct node {
	Item item;
	struct node *next;
} Node;

typedef Node *List;

void list_init(List *pl);

void list_append(List *pl, Item *pi);

void list_delete(List *pl, Item *pi);

void list_insert(List list, Item *pi, Item *pos);

void list_clean(List *pl);

unsigned int list_count(List list);

void list_for_each (List list, void(*pf)(Item *));

#endif // S_LIST_H_