// Function : getInt
// Namespace: Steinberg:Vst:HostAttributeList
// Entry    : 001884a0
// Prototype: undefined8 getInt(HostAttributeList * this, char * param_1, undefined8 * param_2)
// Body     : 001884a0 - 00188692


/* Steinberg::Vst::HostAttributeList::getInt(char const*, long&) */

undefined8 __thiscall
Steinberg::Vst::HostAttributeList::getInt(HostAttributeList *this,char *param_1,undefined8 *param_2)

{
  ulong uVar1;
  HostAttributeList *pHVar2;
  int iVar3;
  size_t sVar4;
  size_t *psVar5;
  undefined8 uVar6;
  long lVar7;
  HostAttributeList *pHVar8;
  size_t __n;
  HostAttributeList *pHVar9;
  long lVar10;
  HostAttributeList *pHVar11;
  HostAttributeList *pHVar12;
  size_t local_60;
  size_t *local_58;
  ulong local_50;
  size_t local_48 [2];
  undefined8 *local_38;
  
  if (param_1 == (char *)0x0) {
    uVar6 = 2;
    goto LAB_00188670;
  }
  psVar5 = local_48;
  local_58 = psVar5;
  sVar4 = strlen(param_1);
  local_60 = sVar4;
  if (0xf < sVar4) {
    psVar5 = (size_t *)std::__cxx11::string::_M_create((ulong *)&local_58,(ulong)&local_60);
    local_48[0] = local_60;
    local_58 = psVar5;
  }
  if (sVar4 != 0) {
    if (sVar4 == 1) {
      *(char *)psVar5 = *param_1;
    }
    else {
      memcpy(psVar5,param_1,sVar4);
    }
  }
  psVar5 = local_58;
  sVar4 = local_60;
  local_50 = local_60;
  *(undefined1 *)((long)local_58 + local_60) = 0;
  pHVar11 = *(HostAttributeList **)(this + 0x20);
  pHVar12 = this + 0x18;
  pHVar2 = pHVar12;
  if (pHVar11 != (HostAttributeList *)0x0) {
    pHVar9 = pHVar12;
    local_38 = param_2;
    do {
      uVar1 = *(ulong *)(pHVar11 + 0x28);
      lVar10 = uVar1 - sVar4;
      __n = sVar4;
      if (uVar1 < sVar4 || lVar10 == 0) {
        __n = uVar1;
      }
      if ((__n == 0) || (iVar3 = memcmp(*(void **)(pHVar11 + 0x20),psVar5,__n), iVar3 == 0)) {
        if (lVar10 < -0x7fffffff) {
          lVar10 = -0x80000000;
        }
        if (0x7ffffffe < lVar10) {
          lVar10 = 0x7fffffff;
        }
        iVar3 = (int)lVar10;
      }
      param_2 = local_38;
      pHVar8 = pHVar11 + 0x18;
      if (-1 < iVar3) {
        pHVar8 = pHVar11 + 0x10;
        pHVar9 = pHVar11;
      }
      pHVar11 = *(HostAttributeList **)pHVar8;
    } while (pHVar11 != (HostAttributeList *)0x0);
    if (pHVar9 != pHVar12) {
      uVar1 = *(ulong *)(pHVar9 + 0x28);
      lVar10 = sVar4 - uVar1;
      if (uVar1 <= sVar4 && lVar10 != 0) {
        sVar4 = uVar1;
      }
      if (sVar4 == 0) {
LAB_00188609:
        lVar7 = -0x80000000;
        if (-0x80000000 < lVar10) {
          lVar7 = lVar10;
        }
        iVar3 = 0x7fffffff;
        if (lVar7 < 0x7fffffff) {
          iVar3 = (int)lVar7;
        }
      }
      else {
        iVar3 = memcmp(psVar5,*(void **)(pHVar9 + 0x20),sVar4);
        if (iVar3 == 0) goto LAB_00188609;
      }
      pHVar2 = pHVar9;
      if (iVar3 < 0) {
        pHVar2 = pHVar12;
      }
    }
  }
  if (psVar5 != local_48) {
    operator_delete(psVar5);
  }
  uVar6 = 1;
  if ((pHVar2 != pHVar12) && (*(int *)(pHVar2 + 0x4c) == 1)) {
    *param_2 = *(undefined8 *)(pHVar2 + 0x40);
    uVar6 = 0;
  }
LAB_00188670:
  return uVar6;
}


