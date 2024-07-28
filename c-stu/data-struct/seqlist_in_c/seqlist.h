#define N 127
typedef int data_t;

/*
struct seqlist_t{
	data_t data[N];
	int last;
};

typedef struct seqlist_t seqlist;  // seqlist L;     struct seqlist_t L;
typedef struct seqlist_t *seqlink;  // seqlink p;     struct seqlist_t *p;
*/

typedef struct seqlist_t{
	data_t data[N];
	int last;
}seqlist, *seqlink;

seqlink list_create(); // 创建线性表
int list_free(seqlink L);  // 释放线性表内存
int list_clear(seqlink L);  // 清空线性表
int list_length(seqlink L);  // 求线性表的有效长度
int list_empty(seqlink L);   // 判断线性表是否是空表
data_t list_get_data(seqlink L, int idx);   // 获取线性表中的某一个值
int list_locate(seqlink L, data_t val);   // 定位某一个元素
int list_insert(seqlink L, data_t val, int pos);   // 插入某一个元素
int list_append(seqlink L, data_t val);  // 从结尾添加某一个元素
data_t list_pop(seqlink L);        // 从结尾抛出元素
data_t list_pop_idx(seqlink L, int idx);  // 抛出某个位置的一个元素
void list_show(seqlink L);    //  显示所有元素
void list_head(seqlink L);    //  显示从前显示10个元素
void list_headn(seqlink L, int n);    //  显示从前n个元素
void list_tail(seqlink L);    //  显示从后10元素
void list_tailn(seqlink L, int n);    //  显示从后n元素
seqlink list_merge(int n, seqlink arrL[]);  // 合并list
seqlink list_unrepeat(seqlink L);  // 去重list
