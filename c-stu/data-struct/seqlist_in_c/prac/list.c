#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "list.h"

lk lis_cre(){
	lk l;

	// 申请内存
	l = (lk) malloc(sizeof(list));

	// 检查内存是否申请成功
	if (l==NULL){
		printf("list malloc failed\n");
		return l;
	}

	// 初始化
	memset(l, 0, sizeof(list));
	l->last=-1;
	// 返回
	return l;
}

lk lis_append(lk l, data_t val){
	if (l==NULL)
		return l;
	lis_insert(l, val, l->last+1);	
	return l;
}


int lis_insert(lk l, data_t val, int idx){
	if (l==NULL)
		return 0;
	if (idx>l->last+1 || idx <0)
		return 0;
	int i=l->last+1;
	while (i>idx){
		l->data[i] = l->data[i-1];
		i--;
	}
	l->data[idx] = val;
	l->last++;
	return 1;
}


void lis_show(lk l){
	printf("[");
	for(int i=0; i<=l->last; i++){
		if (i==l->last){
			printf("%d", l->data[i]);
			break;
		}
		printf("%d, ", l->data[i]);
	}
	printf("]\n");
}

data_t lis_pop(lk l){
	if (l==NULL)
		return 0;
	return lis_delete(l, l->last);
}

data_t lis_delete(lk l, int idx){
	if (l==NULL)
		return 0;
	data_t t;
	t = l->data[idx];
	int i=idx;
	while(i<l->last){
		l->data[i] = l->data[i+1];
		i++;
	}
	l->data[l->last] = 0;
	l->last--;
	return t;
}

data_t get(lk l, int idx){
	if (l==NULL)
		return 0;
	if (l->last<idx||idx<0)
		return 0;
	return l->data[idx];
}


int locate(lk l, data_t val){
	if (l==NULL)
		return -1;
	int i=-1;
	while (i<l->last+1){
		if (val==l->data[i])
			break;
		i++;
	}

	return i;
}

lk reverse(lk l){
	data_t *p, *q;
	p = l->data;
	q = p+l->last; 
	data_t t;
	while (p<q){
		t = *p;
		*p++ = *q;
		*q-- = t;
	}
	return l;
}


// list 释放内存
int lis_free(lk l){
	if (l==NULL)
		return 0;
	free(l);
	l=NULL;
	return 1;
}

// list 清空内容
int lis_clear(lk l){
	if (l==NULL)
		return 0;
	// 回到初始化状态
	memset(l, 0, sizeof(list));
	l->last = -1;
	return 1;
}

// 多个list合并，返回第一个list的地址
lk lis_merge(int n, lk lis[]){
	if(lis==NULL)
	       return NULL;
	lk p = lis[0];
	int first = p->last;	
	int i=1, j;
	while (i < n){
		j = 0;
		while (p->last <= first+lis[i]->last){
			p->last++;
			p->data[p->last] = lis[i]->data[j];
			j++;
		}
		first = p->last;
		i++;
	}
	return p;
}

// 去重， 将重复的元素去掉，保留一个即可
lk lis_unrepeat(lk l){

	return l;
}







