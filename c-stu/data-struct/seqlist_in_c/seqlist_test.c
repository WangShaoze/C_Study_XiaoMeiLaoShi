#include<stdio.h>
#include "seqlist.h"

void test_insert(seqlink L);
void test_get_locate(seqlink L);
void test_pop(seqlink L);
void test_pop_idx(seqlink L);
void test_merge();
int main(int args, const char *argv[]){
	// 用于测试线性表的功能
	seqlink L;
	L = list_create();
	//test_insert(L);
	//test_get_locate(L);
	//test_pop(L);
	//test_pop_idx(L);
	test_merge();
	return 0;
}

void test_merge(){
	seqlink L1, L2, L3;

	L1 = list_create();
	list_append(L1, 23);
	list_append(L1, 10);
	list_append(L1, 40);
	list_append(L1, 89);
	L2 = list_create();
	list_append(L2, 13);
	list_append(L2, 23);
	list_append(L2, 1);
	list_append(L2, 90);
	list_append(L2, 32);
	L3 = list_create();
	list_append(L3, 11);
	list_append(L3, 25);
	list_append(L3, 19);

	printf("L1:");
	list_show(L1);
	printf("L2:");
	list_show(L2);
	printf("L3:");
	list_show(L3);


	seqlink arr2[] = {L1, L2, L3};
	L1 = list_merge(3, arr2);
	printf("L1:");
	list_show(L1);

	list_append(L1, 243);
	list_append(L1, 243);
	list_append(L1, 243);
	list_show(L1);
	printf("unrepeat L1:\n");
	list_unrepeat(L1);
	list_show(L1);

	list_free(L1);
	list_free(L2);
	list_free(L3);
}

void test_pop_idx(seqlink L){
	list_append(L, 6);
	list_append(L, 3);
	list_append(L, 5);
	list_append(L, 45);
	list_append(L, 4);
	list_append(L, 6);

	list_show(L);
	printf("pop (idx->3) from list:%d\n", list_pop_idx(L, 3));
	list_show(L);
	
	list_free(L);
}

void test_pop(seqlink L){
	list_append(L, 6);
	list_append(L, 3);
	list_append(L, 5);
	list_append(L, 4);
	list_append(L, 4);
	list_append(L, 6);

	list_show(L);
	printf("pop L:%d\n", list_pop(L));
	list_show(L);
	printf("pop L:%d\n", list_pop(L));
	list_show(L);
	printf("pop L:%d\n", list_pop(L));
	list_show(L);
	list_free(L);
}

void test_get_locate(seqlink L){
	list_append(L, 72);  
	list_append(L, 73);
	list_append(L, 74);
	list_append(L, 75);
	list_append(L, 76);
	
	list_show(L);

	printf("get data by idx -> 1:%d\n", list_get_data(L, 1));
	printf("get data by idx -> 5:%d\n", list_get_data(L, 5));
	printf("get idx val->76: idx=%d\n", list_locate(L, 76));	
	printf("get idx val->100: idx=%d\n", list_locate(L, 100));	
	
	list_free(L);
	
}

void test_insert(seqlink L){
	list_insert(L, 66, 0);  // 插入元素
	list_insert(L, 23, 1);
	list_insert(L, 76, 2);
	list_append(L, 72);  // 追加元素
	list_append(L, 73);
	list_append(L, 73);
	list_insert(L, 1, 2);
	list_insert(L, 2, 2);
	list_insert(L, 3, 2);
	list_insert(L, 4, 2);
	list_insert(L, 5, 2);
	list_append(L, 89);
	list_append(L, 78);
	list_append(L, 90);

	list_show(L);  // 显示元素
	list_head(L);  // 显示前10个元素
	list_headn(L, 6);  // 显示前n个元素

	list_tail(L);  // 显示后10个元素
	list_tailn(L, 6);  // 显示后n个元素

	
	printf("list_len:%d\n", list_length(L));  // 求线性表的长度
	printf("is empty: %d\n", list_empty(L));  // 判断线性表是不是空
	list_clear(L);  // 清空线性表
	list_show(L);
	printf("is empty: %d\n", list_empty(L));
	printf("list_len:%d\n", list_length(L));

	printf("%d\n", list_free(L)); // 释放内存
	printf("list_len:%d\n", list_length(L));
}

