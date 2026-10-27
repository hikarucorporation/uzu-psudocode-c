// Function : mouseWheelMove
// Namespace: juce:ScrollBar
// Entry    : 00264320
// Prototype: float * mouseWheelMove(ScrollBar * this, undefined8 param_2_00, float * param_2)
// Body     : 00264320 - 00264485


/* juce::ScrollBar::mouseWheelMove(juce::MouseEvent const&, juce::MouseWheelDetails const&) */

float * __thiscall
juce::ScrollBar::mouseWheelMove(ScrollBar *this,undefined8 param_2_00,float *param_2)

{
  long *plVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  long *plVar5;
  float fVar6;
  float *pfVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  pfVar7 = param_2 + 1;
  if (this[0x17c] == (ScrollBar)0x0) {
    pfVar7 = param_2;
  }
  fVar8 = *pfVar7 * DAT_0065260c;
  if (0.0 <= fVar8) {
    if (fVar8 <= 0.0) goto LAB_00264369;
    fVar6 = DAT_005d9038;
    if (DAT_005d9038 <= fVar8) {
      fVar6 = fVar8;
    }
  }
  else {
    fVar6 = DAT_005d9054;
    if (fVar8 <= DAT_005d9054) {
      fVar6 = fVar8;
    }
  }
  fVar8 = fVar6;
LAB_00264369:
  dVar3 = *(double *)(this + 0x138);
  dVar12 = dVar3 - (double)fVar8 * *(double *)(this + 0x148);
  dVar4 = *(double *)(this + 0x140);
  dVar10 = dVar4 - (double)fVar8 * *(double *)(this + 0x148);
  if (dVar10 <= dVar12) {
    dVar10 = dVar12;
  }
  dVar9 = *(double *)(this + 0x128);
  dVar11 = *(double *)(this + 0x130);
  if (dVar10 - dVar12 < dVar11 - dVar9) {
    dVar11 = dVar11 - (dVar10 - dVar12);
    if (dVar12 <= dVar11) {
      dVar11 = dVar12;
    }
    dVar9 = (double)(-(ulong)(dVar12 < dVar9) & (ulong)dVar9 |
                    ~-(ulong)(dVar12 < dVar9) & (ulong)dVar11);
    dVar11 = dVar10 + (dVar9 - dVar12);
    if (dVar11 <= dVar9) {
      dVar11 = dVar9;
    }
  }
  if ((((dVar3 != dVar9) || (NAN(dVar3) || NAN(dVar9))) || (dVar4 != dVar11)) ||
     (NAN(dVar4) || NAN(dVar11))) {
    *(double *)(this + 0x138) = dVar9;
    *(double *)(this + 0x140) = dVar11;
    updateThumbPosition(this);
    pfVar7 = (float *)0x0;
    LOCK();
    uVar2 = *(uint *)(*(long *)(this + 0xf8) + 0x18);
    if (uVar2 == 0) {
      *(uint *)(*(long *)(this + 0xf8) + 0x18) = 1;
    }
    else {
      pfVar7 = (float *)(ulong)uVar2;
    }
    UNLOCK();
    if (uVar2 == 0) {
      plVar5 = *(long **)(this + 0xf8);
      if (((MessageManager::instance != 0) && (*(int *)(MessageManager::instance + 8) == 0)) &&
         (InternalMessageQueue::singletonHolder._40_8_ != 0)) {
        pfVar7 = (float *)InternalMessageQueue::postMessage
                                    ((InternalMessageQueue *)
                                     InternalMessageQueue::singletonHolder._40_8_,(long)plVar5);
        return pfVar7;
      }
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
      pfVar7 = *(float **)(this + 0xf8);
      LOCK();
      pfVar7[6] = 0.0;
      UNLOCK();
      return pfVar7;
    }
  }
  return pfVar7;
}


