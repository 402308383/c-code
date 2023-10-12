#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

// 定义攻击系统结构
struct AttackSystem {
    float attackCooldown;
    float currentCooldown;
    bool canAttack;
    clock_t lastAttackTime;
};

// 初始化攻击系统
void InitializeAttackSystem(struct AttackSystem* attackSystem, float cooldown) {
    attackSystem->attackCooldown = cooldown;
    attackSystem->currentCooldown = 0.0f;
    attackSystem->canAttack = true;
    attackSystem->lastAttackTime = 0;
}

// 更新攻击系统状态
void UpdateAttackSystem(struct AttackSystem* attackSystem) {
    // 获取当前时间
    clock_t currentTime = clock();

    // 更新当前冷却时间
    if (!attackSystem->canAttack) {
        float deltaTime = (float)(currentTime - attackSystem->lastAttackTime) / CLOCKS_PER_SEC;
        attackSystem->currentCooldown -= deltaTime;

        // 当冷却时间小于等于0时，允许再次攻击
        if (attackSystem->currentCooldown <= 0) {
            attackSystem->canAttack = true;
        }
    }

    // 检测是否触发攻击
    if (attackSystem->canAttack) {
        //if (/* 检测是否触发攻击的条件，例如键盘输入 */) {
            // 执行攻击操作
         //   Attack(attackSystem);
       // }
    }
}

// 执行攻击操作
void Attack(struct AttackSystem* attackSystem) {
    // 执行攻击操作，例如发射子弹、造成伤害等

    // 攻击后设置冷却时间
    attackSystem->canAttack = false;
    attackSystem->currentCooldown = attackSystem->attackCooldown;
    attackSystem->lastAttackTime = clock();
}

int main() {
    struct AttackSystem attackSystem;
    InitializeAttackSystem(&attackSystem, 2.0f); // 初始化攻击系统

    // 游戏主循环
    while (true) {
        UpdateAttackSystem(&attackSystem); // 更新攻击系统

        // 游戏主循环的其他逻辑
    }

    return 0;
}

//int is_leapyear(int year)
//{
//	if ((0 == year % 4 && 0 != year % 100) || 0 == year % 4)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year, month, day, sum = 0, ret;
//	scanf("%d-%d-%d", &year, &month, &day);
//	ret = is_leapyear(year);
//	switch (month)
//	{
//	case 12:
//	case 11:
//		sum += 31;
//	case 10:
//		sum += 30;
//	case 9:
//		sum += 31;
//	case 8:
//		sum += 31;
//	case 7:
//		sum += 30;
//	case 6:
//		sum += 31;
//	case 5:
//		sum += 30;
//	case 4:
//		sum += 31;
//	case 3:
//		sum += 28 + ret;
//	case 2:
//		sum += 31;
//	case 1:
//		sum +=day;
//		break;
//	default:
//		printf("输入非法,请重新输入\n");
//		break;
//	}
//	printf("%d-%d-%d是%d年的第%d天\n", year, month, day, year, sum);
//	return 0;
//}
//int main()
//{
//	int year = 0, month = 0, day = 0;
//	printf("输入年 月 日");
//	scanf("%d %d %d", &year, &month, &day);
//	//输入年月日
//	switch (month)
//	{
//	case 12:
//	case 11:
//	{
//		day += 31;
//	}
//	case 10:day += 30;
//	case 9:day += 31;
//	case 8:day += 31;
//	case 7:day += 30;
//	case 6:day += 31;
//	case 5:day += 30;
//	case 4:day += 31;
//	case 3:if (year % 4 == 0 && year % 100 != 0)
//	{
//		day += 29;
//	}
//		  else
//	{
//		day += 28;
//	}
//	case 2:day += 31;
//	case 1:printf("第%d天", day);
//	}
//	//计算与输出
//	return 0;
//}
