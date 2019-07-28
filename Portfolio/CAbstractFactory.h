#pragma once

class CGameObj;

template<typename T>
class CAbstractFactory
{
public:
	static CGameObj* CreateObj()
	{
		CGameObj* pInstance = new T;
		dynamic_cast<T*>(pInstance)->Initialize();

		return pInstance;
	}

	static CGameObj* CreateObj(float x, float y)
	{
		CGameObj* pInstance = new T;
		dynamic_cast<T*>(pInstance)->Initialize();
		pInstance->SetPosX(x);
		pInstance->SetPosY(y);

		return pInstance;
	}

	static CGameObj* CreateObj(float theta)
	{
		CGameObj* pInstance = new T;
		dynamic_cast<T*>(pInstance)->Initialize();
		pInstance->SetTheta(theta);

		return pInstance;
	}

	static CGameObj* CreateObj(float x, float y,float theta)
	{
		CGameObj* pInstance = new T;
		dynamic_cast<T*>(pInstance)->Initialize();
		pInstance->SetPosX(x);
		pInstance->SetPosY(y);
		pInstance->SetTheta(theta);

		return pInstance;
	}
};
