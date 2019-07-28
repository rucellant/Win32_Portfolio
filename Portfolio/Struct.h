#pragma once

//////////////////////////////////////////////////////////////
//전체 객체 기본 속성
typedef struct tagObjectInfo
{
	bool isDead;			//생사여부

	float fX;				//X좌표
	float fY;				//Y좌표

	float fTheta;			//객체의 각도

	float fWidth;			//객체의 너비
	float fHeight;			//객체의 높이

	RECT rect;				//객체의 RECT 구조체
}ObjectInfo;

//////////////////////////////////////////////////////////////
//움직이는 객체 기본 속성
typedef struct tagMovingObjectInfo
{
	int iStamina;			//체력
	int iMaxStamina;		//최대 체력

	float fXVel;			//X좌표 속도
	float fYVel;			//Y좌표 속도
	float fXAcc;			//X좌표 가속도
}MovingObjectInfo;

//////////////////////////////////////////////////////////////
//플레이어 객체 기본 속성
typedef struct tagPlayerInfo
{
	int iRed;			//잔혹성 먹은 갯수
	int iPurple;		//전략가 먹은 갯수
	int iGreen;			//생존술 먹은 갯수

}PlayerInfo;