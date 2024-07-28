#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "seqlist.h"

seqlink list_create(){
	// 申请内存 malloc
	seqlink L;

	L = (seqlink) malloc(sizeof(seqlist));
	if (L==NULL){
		printf("list malloc failed\n");          // 内存声请失败
		return L;
	}

	// 初始化 initialize
	memset(L, 0, sizeof(seqlist));
	L->last = -1;

	// 返回
	return L;
}


/*
 * 释放线性表内存
 * para L: list
 * @ret int   0-> False 1-> True
 * */
int list_free(seqlink L){
	if (L==NULL){
		return 0;
	}
	free(L);
	L= NULL;
	return 1;
}
/*
 * 清空线性表 Clear the list
 * para L: list
 * @ret int   0-> successful -1-> failed
 * */
int list_clear(seqlink L){
	if (L==NULL){
		return -1;
	}
	memset(L, 0, sizeof(seqlist));
	L->last = -1;
	return 0;
}


/*
 * 线性表长度 
 * para L: list
 * @ret int >-1 -> length, =-1 -> error 
 * */
int list_length(seqlink L){
	if (L==NULL){
		return -1;
	}
	return (L->last+1);
}

/*
 * 线性表是否为空 Is the list empty? 
 * para L: list
 * @ret int  1->true 0->false 
 * */
int list_empty(seqlink L){
	if (L->last == -1)
		return 1;
	else
		return 0;
}

/*
 * 获取某一个位置上的值
 * para L: list
 * para idx: posistion || index    idx <- [0,L->last]
 * @ret data_t: if idx not in [0, L->last], return 0, else return tthe value of idx <- L->data.
 * */
data_t list_get_data(seqlink L, int idx){
	if (idx>L->last || idx<0)
		return 0;
	return L->data[idx];
}

/*
 * Locate the value in the L->data
 * para L: list
 * pata val: the value needed locate
 * @ret int: not exsit -> -1, exist -> idx
 * */
int list_locate(seqlink L, data_t val){
	for (int i=0; i<list_length(L); i++){
		if (L->data[i]==val)
			return i;
	}
	return -1;
}

/*
 * 在线性表中插入元素
 * para L: list
 * para val: data_t
 * para pos: index
 * @ret int  1->successful 0->error 
 * */
int list_insert(seqlink L, data_t val, int pos){
	// full
	if (L->last == N-1){
		printf("list if full\n");
		return 0;
	}
	//check para 0<=pos<=last+1  ||  pos <- [0, last+1]
	if (pos>L->last+1||pos<0)
		return 0;
	//move
	int i=L->last+1;
	while (i>=pos){
		L->data[i] = L->data[i-1];
		i--;
	}
	//update last ----> store para val
	L->data[pos] = val; 
	L->last++;
	return 0;
}

/*
 * add a val in the end of sequence.
 * para L: list
 * para val: data_t
 * @ret int  1->successful 0->error 
 * */
int list_append(seqlink L, data_t val){
	// full
	if (L->last == N-1){
		printf("list if full\n");
		return 0;
	}
	L->data[L->last+1] = val; 
	L->last++;
	return 0;
}

/*
 * pop the end value of the L-data and return the poped value
 * para L: seqlist
 * @ret data_t: the poped value
 * */
data_t list_pop(seqlink L){
	data_t t;
	t = L->data[L->last];
	L->data[L->last] = 0;
	L->last--;
	return t;
}

/*
 * pop the value of idx-position of the L-data and return the poped value
 * para L: seqlist
 * para idx: position 
 * @ret data_t: the poped value
 * */
data_t list_pop_idx(seqlink L, int idx){
	if (idx>L->last || idx <0)
		return 0;
	data_t t;
	t = L->data[idx];
	int i=idx+1;
	while(i<=L->last){
		L->data[i-1] = L->data[i];
		i++;
	}
	L->data[L->last] = 0;
	L->last--;
	return t;
}

/*显示所有元素*/
void list_show(seqlink L){
	int i=0;
	printf("[");
	while (i<=L->last){
		printf("%d", L->data[i]);
		if(i!=L->last)
			printf(", ");
		i++;
	}
	printf("]\n");
}

/*显示前10个元素*/
void list_head(seqlink L){
	int i=0;
	printf("[");
	while (i<=L->last){
		if (i==10)
			break;
		printf("%d", L->data[i]);
		if (L->last>9){
			if (i<9)
				printf(", ");
		}else	
			if (i<L->last)
				printf(", ");
		i++;
	}
	printf("]\n");
}

/*显示前n个元素*/
void list_headn(seqlink L, int n){
	int i=0;
	printf("[");
	while (i<=L->last){
		if (i==n)
			break;
		printf("%d", L->data[i]);
		if (L->last>n-1){
			if (i<n-1)
				printf(", ");
		}else	
			if (i<L->last)
				printf(", ");
		i++;
	}
	printf("]\n");
}

/*显示后10个元素*/
void list_tail(seqlink L){
	int i=L->last>=9?L->last-9:0;  // 不足10个的从0开始，大于等于10个的只要后面10个
	printf("[");
	while (i<=L->last){
		printf("%d", L->data[i]);
		if (i!=L->last)
			printf(", ");
		i++;
	}
	printf("]\n");
}

/*显示后n个元素*/
void list_tailn(seqlink L, int n){
	int i=L->last>=n-1?L->last-(n-1):0;  // 不足n个的从0开始，大于等于n个的只要后面n个
	printf("[");
	while (i<=L->last){
		printf("%d", L->data[i]);
		if (i!=L->last)
			printf(", ");
		i++;
	}
	printf("]\n");
}


seqlink list_merge(int n, seqlink arrL[]){
	int i=1;
	int j=0;
	seqlink first = arrL[0];
	int last_f = first->last;
	while (i<n){
		seqlink p = arrL[i];
		while (first->last < last_f+p->last+1){
			first->data[first->last+1] = p->data[j];
			j++;
			first->last++;
		}
		last_f = first->last;
		j=0;
		i++;
	}
	return arrL[0];
}
seqlink list_unrepeat(seqlink L){
	int i, j;
	i = 1;
	while (i<=L->last){
		j = i-1;
		while (j>=0){
			if (L->data[i] != L->data[j])
				j--;
			else{
				list_pop_idx(L, i);
				break;
			}
		}	
		if (j<0)
			i++;
	}
	return L;
}


