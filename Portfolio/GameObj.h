#pragma once
class CGameObj
{
protected:
	ObjectInfo m_tObjInfo;

public:
	CGameObj();
	virtual ~CGameObj();

public:
	virtual void Initialize() = 0;
	virtual void Update() = 0;
	virtual void Render(HDC hdc) = 0;

private:
	virtual void Release() = 0;

public:
	//get
	ObjectInfo GetObjInfo() const;
	
	//set
	void SetPosX(float x);
	void SetPosY(float y);
	void SetTheta(float theta);
	void SetWidth(float width);
	void SetHeight(float height);
	void SetRect(RECT rect);
	void SetIsDead(bool isdead);

protected:
	void UpdateRect();
};

