#pragma once

typedef struct tagObjectInfo
{
	float fX;				//X좌표
	float fY;				//Y좌표

	float theta;			//객체의 각도

	float fWdith;			//객체의 너비
	float fHeight;			//객체의 높이

	RECT rect;				//객체의 RECT 구조체
}ObjectInfo;

typedef struct tagMovingObjectInfo
{
	int Stamina;			//체력

	float fXVel;			//X좌표 속도
	float fYVel;			//Y좌표 속도
	float fXAcc;			//X좌표 가속도
}MovingObjectInfo;

typedef struct tagPlayerInfo
{

}PlayerInfo;