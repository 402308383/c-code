#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

// ���幥��ϵͳ�ṹ
struct AttackSystem {
    float attackCooldown;
    float currentCooldown;
    bool canAttack;
    clock_t lastAttackTime;
};

// ��ʼ������ϵͳ
void InitializeAttackSystem(struct AttackSystem* attackSystem, float cooldown) {
    attackSystem->attackCooldown = cooldown;
    attackSystem->currentCooldown = 0.0f;
    attackSystem->canAttack = true;
    attackSystem->lastAttackTime = 0;
}

// ���¹���ϵͳ״̬
void UpdateAttackSystem(struct AttackSystem* attackSystem) {
    // ��ȡ��ǰʱ��
    clock_t currentTime = clock();

    // ���µ�ǰ��ȴʱ��
    if (!attackSystem->canAttack) {
        float deltaTime = (float)(currentTime - attackSystem->lastAttackTime) / CLOCKS_PER_SEC;
        attackSystem->currentCooldown -= deltaTime;

        // ����ȴʱ��С�ڵ���0ʱ�������ٴι���
        if (attackSystem->currentCooldown <= 0) {
            attackSystem->canAttack = true;
        }
    }

    // ����Ƿ񴥷�����
    if (attackSystem->canAttack) {
        //if (/* ����Ƿ񴥷������������������������ */) {
            // ִ�й�������
         //   Attack(attackSystem);
       // }
    }
}

// ִ�й�������
void Attack(struct AttackSystem* attackSystem) {
    // ִ�й������������緢���ӵ�������˺���

    // ������������ȴʱ��
    attackSystem->canAttack = false;
    attackSystem->currentCooldown = attackSystem->attackCooldown;
    attackSystem->lastAttackTime = clock();
}

int main() {
    struct AttackSystem attackSystem;
    InitializeAttackSystem(&attackSystem, 2.0f); // ��ʼ������ϵͳ

    // ��Ϸ��ѭ��
    while (true) {
        UpdateAttackSystem(&attackSystem); // ���¹���ϵͳ

        // ��Ϸ��ѭ���������߼�
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
//		printf("����Ƿ�,����������\n");
//		break;
//	}
//	printf("%d-%d-%d��%d��ĵ�%d��\n", year, month, day, year, sum);
//	return 0;
//}
//int main()
//{
//	int year = 0, month = 0, day = 0;
//	printf("������ �� ��");
//	scanf("%d %d %d", &year, &month, &day);
//	//����������
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
//	case 1:printf("��%d��", day);
//	}
//	//���������
//	return 0;
//}
