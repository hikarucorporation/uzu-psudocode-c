// Function : drawImage
// Namespace: juce:Graphics
// Entry    : 0032c5c0
// Prototype: undefined drawImage(Graphics * this, long * param_1, int param_2, uint param_3, int param_4, int param_5, int param_6, int param_7, int param_8, int param_9, char param_10)
// Body     : 0032c5c0 - 0032c887


/* juce::Graphics::drawImage(juce::Image const&, int, int, int, int, int, int, int, int, bool) const
    */

void __thiscall
juce::Graphics::drawImage
          (Graphics *this,long *param_1,int param_2,uint param_3,int param_4,int param_5,int param_6
          ,int param_7,int param_8,int param_9,char param_10)

{
  undefined4 uVar1;
  long *plVar2;
  char cVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long *local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  float local_48;
  float local_44;
  long local_40;
  long local_38;
  
  if (*param_1 == 0) {
    return;
  }
  local_58 = CONCAT44(param_3,param_2);
  local_50 = CONCAT44(param_5,param_4);
  cVar3 = (**(code **)(**(long **)(this + 8) + 0x58))();
  if (cVar3 == '\0') {
    return;
  }
  plVar2 = (long *)*param_1;
  local_60 = (ulong)param_3;
  if (plVar2 == (long *)0x0) {
    lVar6 = 0;
    if (param_6 < 1) goto LAB_0032c673;
LAB_0032c6a2:
    iVar8 = param_8 + param_6;
    if (plVar2 == (long *)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = plVar2[2];
    }
    if (param_6 < 0) {
      param_6 = 0;
    }
    iVar5 = 0;
    if (-1 < param_7) {
      iVar5 = param_7;
    }
    if ((int)lVar6 < iVar8) {
      iVar8 = (int)lVar6;
    }
    iVar8 = iVar8 - param_6;
    if (-1 < iVar8) {
      iVar7 = (int)((ulong)lVar6 >> 0x20);
      iVar9 = param_9 + param_7;
      if (iVar7 < param_9 + param_7) {
        iVar9 = iVar7;
      }
      iVar9 = iVar9 - iVar5;
      if (((-1 < iVar9) && (0 < iVar8)) && (iVar9 != 0)) {
        local_38 = CONCAT44(iVar9,iVar8);
        local_40 = CONCAT44(iVar5,param_6);
        plVar4 = operator_new(0x68);
        if (plVar2 != (long *)0x0) {
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
        }
        uVar1 = *(undefined4 *)((long)plVar2 + 0xc);
        *(undefined4 *)(plVar4 + 1) = 0;
        *(undefined4 *)((long)plVar4 + 0xc) = uVar1;
        *(int *)(plVar4 + 2) = iVar8;
        *(int *)((long)plVar4 + 0x14) = iVar9;
        plVar4[3] = 0;
        plVar4[4] = 0;
        plVar4[5] = 0;
        plVar4[6] = 0;
        plVar4[7] = 0;
        plVar4[8] = 0;
        *(undefined4 *)(plVar4 + 9) = 0;
        *plVar4 = (long)&PTR__SubsectionPixelData_00711e90;
        plVar4[10] = (long)plVar2;
        plVar4[0xb] = local_40;
        plVar4[0xc] = local_38;
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        local_68 = plVar4;
        goto LAB_0032c7aa;
      }
    }
    local_68 = (long *)0x0;
  }
  else {
    lVar6 = plVar2[2];
    if (0 < param_6) goto LAB_0032c6a2;
LAB_0032c673:
    if (((0 < param_7) || (param_8 + param_6 < (int)lVar6)) ||
       (param_9 + param_7 < (int)((ulong)lVar6 >> 0x20))) goto LAB_0032c6a2;
    local_68 = plVar2;
    if (plVar2 != (long *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      plVar4 = plVar2;
      goto LAB_0032c7aa;
    }
  }
  plVar4 = (long *)0x0;
LAB_0032c7aa:
  local_44 = (float)(int)local_60;
  local_48 = (float)param_5 / (float)param_9;
  local_58 = (ulong)(uint)((float)param_4 / (float)param_8);
  local_50 = (ulong)(uint)(float)param_2;
  if (plVar4 != (long *)0x0) {
                    /* try { // try from 0032c807 to 0032c861 has its CatchHandler @ 0032c888 */
    cVar3 = (**(code **)(**(long **)(this + 8) + 0x68))();
    if (cVar3 == '\0') {
      plVar2 = *(long **)(this + 8);
      if (param_10 == '\0') {
        (**(code **)(*plVar2 + 0xe0))(plVar2,&local_68,&local_58);
      }
      else {
        (**(code **)(*plVar2 + 0x70))();
        (**(code **)(**(long **)(this + 8) + 0x50))(*(long **)(this + 8),&local_68,&local_58);
        (**(code **)(**(long **)(this + 8) + 0xa8))();
        (**(code **)(**(long **)(this + 8) + 0x78))();
      }
    }
    if (local_68 != (long *)0x0) {
      LOCK();
      plVar2 = local_68 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*local_68 + 8))();
      }
    }
  }
  return;
}


