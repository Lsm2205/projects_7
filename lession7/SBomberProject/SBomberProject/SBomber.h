#pragma once
#include<iostream>
#include <vector>
#include <memory>
#include "LevelGUI.h"
#include "Plane.h"
#include "Bomb.h"
#include "Ground.h"
#include "Tank.h"

class SBomberImpl;

class SBomber
{
public:

    SBomber();
    ~SBomber();
    
     bool GetExitFlag() const;// { return exitFlag; }

    void ProcessKBHit();
    void TimeStart();
    void TimeFinish();

    void DrawFrame();
    void MoveObjects();
    void CheckObjects();

private:
    std::unique_ptr<SBomberImpl> Pimpl;
    /*void CheckPlaneAndLevelGUI();
    void CheckBombsAndGround();
    void __fastcall CheckDestoyableObjects(Bomb* pBomb);
    void __fastcall DeleteDynamicObj(DynamicObject * pBomb);
    void __fastcall DeleteStaticObj(GameObject* pObj);
    Ground * FindGround() const;
    Plane * FindPlane() const;
    LevelGUI * FindLevelGUI() const;
    std::vector<DestroyableGroundObject*> FindDestoyableGroundObjects() const;
    std::vector<Bomb*> FindAllBombs() const;
    void DropBomb();
    std::vector<DynamicObject*> vecDynamicObj;
    std::vector<GameObject*> vecStaticObj;*/
   
    //bool exitFlag;

    /*uint64_t startTime, finishTime, passedTime;
    uint16_t bombsNumber, deltaTime, fps;
    int16_t score;*/
};
