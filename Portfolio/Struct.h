#pragma once

typedef struct tagObjectInfo
{
	float fX;				//X��ǥ
	float fY;				//Y��ǥ

	float theta;			//��ü�� ����

	float fWdith;			//��ü�� �ʺ�
	float fHeight;			//��ü�� ����

	RECT rect;				//��ü�� RECT ����ü
}ObjectInfo;

typedef struct tagMovingObjectInfo
{
	int Stamina;			//ü��

	float fXVel;			//X��ǥ �ӵ�
	float fYVel;			//Y��ǥ �ӵ�
	float fXAcc;			//X��ǥ ���ӵ�
}MovingObjectInfo;

typedef struct tagPlayerInfo
{

}PlayerInfo;