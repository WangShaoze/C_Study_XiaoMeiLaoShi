#include<stdio.h>
#include "list.h"

void test_append_insert();
void test_pop_delete();
void test_get_locate();
void test_reverse();
void test_free_clear();
void test_merge();

int main(int args, const char *argv[]){
	// 测试
	//test_append_insert();
	//test_pop_delete();
	//test_get_locate();
	//test_reverse();
	//test_free_clear();
	test_merge();
	return 0;
}

void test_merge(){
	lk l, l1, l2;
	l = lis_cre();
	lis_append(l, 12);
	lis_append(l, 11);
	lis_append(l, 10);
	lis_insert(l, 56, 1);
	lis_insert(l, 55, 1);
	lis_insert(l, 54, 1);
	lis_show(l);

	l1 = lis_cre();
	lis_append(l1, 12);
	lis_append(l1, 11);
	lis_append(l1, 10);
	lis_insert(l1, 56, 1);
	lis_insert(l1, 55, 1);
	lis_insert(l1, 54, 1);
	lis_show(l1);

	l2 = lis_cre();
	lis_append(l2, 1);
	lis_append(l2, 13);
	lis_append(l2, 90);
	lis_show(l2);

	lk arr[] = {l, l1, l2};   // 定义一个指针数组
	l = lis_merge(3, arr);  // 合并两个数组
	lis_show(l);
}

void test_free_clear(){
	lk l;
	l = lis_cre();
	lis_append(l, 12);
	lis_append(l, 11);
	lis_append(l, 10);
	lis_insert(l, 56, 1);
	lis_insert(l, 55, 1);
	lis_insert(l, 54, 1);
	lis_show(l);
	
	lis_clear(l);  // 清空线性表
	lis_show(l);

	lis_free(l);  // 释放线性表内存
	lis_show(l);
}

void test_reverse(){
	lk l;
	l = lis_cre();
	lis_append(l, 12);
	lis_append(l, 11);
	lis_append(l, 10);
	lis_insert(l, 56, 1);
	lis_insert(l, 55, 1);
	lis_insert(l, 54, 1);
	lis_show(l);
	
	reverse(l);
	lis_show(l);	
}

void test_get_locate(){
	lk l;
	l = lis_cre();
	lis_append(l, 12);
	lis_append(l, 11);
	lis_append(l, 10);
	lis_insert(l, 56, 1);
	lis_insert(l, 55, 1);
	lis_insert(l, 54, 1);
	lis_show(l);
	
	printf("list->idx->4:%d\n", get(l, 4));	
	printf("list->val->55->idx:%d\n", locate(l, 55));	
}

void test_pop_delete(){
	lk l;
	l = lis_cre();
	lis_append(l, 12);
	lis_append(l, 11);
	lis_append(l, 10);
	lis_insert(l, 56, 1);
	lis_insert(l, 55, 1);
	lis_insert(l, 54, 1);
	lis_show(l);
	
	lis_pop(l);
	lis_show(l);

	lis_delete(l, 1);
	lis_show(l);
}

void test_append_insert(){
	lk l;
	l = lis_cre();
	lis_append(l, 12);
	lis_append(l, 11);
	lis_append(l, 10);
	lis_insert(l, 56, 1);
	lis_insert(l, 55, 1);
	lis_insert(l, 54, 1);
	lis_show(l);
}
