//创建保存联系人数据结构
#define CAT_SECURE_NO_WARNINGS
#define NAME_MAX 100
#define SEX_MAX 10
#define TELMAX 15
#define ADDR_MAX 100


typedef struct ContactInfo
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	char tel[TELMAX];
	char addr[ADDR_MAX];
	int age;
}CInof;