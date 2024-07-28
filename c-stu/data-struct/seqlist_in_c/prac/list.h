#define N 125

typedef int data_t;

typedef struct list_t{
	data_t data[N];
	int last;
}list, *lk;

// 创建
lk lis_cre();

// append 追加元素
lk lis_append(lk l, data_t val);

// insert元素
int lis_insert(lk l, data_t val, int idx);

// 显示所有元素
void lis_show(lk l);

// pop 元素，抛出最后一个元素
data_t lis_pop(lk l);

// delete 根据下标抛出元素
data_t lis_delete(lk l, int idx);

// 获取元素
data_t get(lk l, int idx);

// 定位元素
int locate(lk l, data_t val);

// 反转
lk reverse(lk l);

// list 释放内存
int lis_free(lk l);

// list 清空内容
int lis_clear(lk l);

// 多个list合并，返回第一个list的地址
lk lis_merge(int n, lk lis[]);

// 去重， 将重复的元素去掉，保留一个即可
lk lis_unrepeat(lk l);





