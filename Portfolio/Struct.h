#pragma once

//////////////////////////////////////////////////////////////
//��ü ��ü �⺻ �Ӽ�
typedef struct tagObjectInfo
{
	bool isDead;			//���翩��

	float fX;				//X��ǥ
	float fY;				//Y��ǥ

	float fTheta;			//��ü�� ����

	float fWidth;			//��ü�� �ʺ�
	float fHeight;			//��ü�� ����

	RECT rect;				//��ü�� RECT ����ü
}ObjectInfo;

//////////////////////////////////////////////////////////////
//�����̴� ��ü �⺻ �Ӽ�
typedef struct tagMovingObjectInfo
{
	int iStamina;			//ü��
	int iMaxStamina;		//�ִ� ü��

	float fXVel;			//X��ǥ �ӵ�
	float fYVel;			//Y��ǥ �ӵ�
	float fXAcc;			//X��ǥ ���ӵ�
}MovingObjectInfo;

//////////////////////////////////////////////////////////////
//�÷��̾� ��ü �⺻ �Ӽ�
typedef struct tagPlayerInfo
{
	int iRed;			//��Ȥ�� ���� ����
	int iPurple;		//������ ���� ����
	int iGreen;			//������ ���� ����

}PlayerInfo;