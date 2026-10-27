// Function : getBinary
// Namespace: Steinberg:Vst:HostAttributeList
// Entry    : 00188e40
// Prototype: undefined8 getBinary(HostAttributeList * this, char * param_1, undefined8 * param_2, undefined4 * param_3)
// Body     : 00188e40 - 0018904c


/* Steinberg::Vst::HostAttributeList::getBinary(char const*, void const*&, unsigned int&) */

undefined8 __thiscall
Steinberg::Vst::HostAttributeList::getBinary
          (HostAttributeList *this,char *param_1,undefined8 *param_2,undefined4 *param_3)

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
  HostAttributeList *pHVar10;
  HostAttributeList *pHVar11;
  long lVar12;
  size_t local_68;
  size_t *local_60;
  ulong local_58;
  size_t local_50 [2];
  undefined4 *local_40;
  undefined8 *local_38;
  
  if (param_1 == (char *)0x0) {
    uVar6 = 2;
    goto LAB_0018902a;
  }
  psVar5 = local_50;
  local_60 = psVar5;
  sVar4 = strlen(param_1);
  local_68 = sVar4;
  if (0xf < sVar4) {
    psVar5 = (size_t *)std::__cxx11::string::_M_create((ulong *)&local_60,(ulong)&local_68);
    local_50[0] = local_68;
    local_60 = psVar5;
  }
  if (sVar4 != 0) {
    if (sVar4 == 1) {
      *(char *)psVar5 = *param_1;
    }
    else {
      memcpy(psVar5,param_1,sVar4);
    }
  }
  psVar5 = local_60;
  sVar4 = local_68;
  local_58 = local_68;
  *(undefined1 *)((long)local_60 + local_68) = 0;
  pHVar9 = *(HostAttributeList **)(this + 0x20);
  pHVar11 = this + 0x18;
  pHVar2 = pHVar11;
  local_38 = param_2;
  if (pHVar9 != (HostAttributeList *)0x0) {
    pHVar10 = pHVar11;
    local_40 = param_3;
    do {
      uVar1 = *(ulong *)(pHVar9 + 0x28);
      lVar12 = uVar1 - sVar4;
      __n = sVar4;
      if (uVar1 < sVar4 || lVar12 == 0) {
        __n = uVar1;
      }
      if ((__n == 0) || (iVar3 = memcmp(*(void **)(pHVar9 + 0x20),psVar5,__n), iVar3 == 0)) {
        if (lVar12 < -0x7fffffff) {
          lVar12 = -0x80000000;
        }
        if (0x7ffffffe < lVar12) {
          lVar12 = 0x7fffffff;
        }
        iVar3 = (int)lVar12;
      }
      param_3 = local_40;
      pHVar8 = pHVar9 + 0x18;
      if (-1 < iVar3) {
        pHVar8 = pHVar9 + 0x10;
        pHVar10 = pHVar9;
      }
      pHVar9 = *(HostAttributeList **)pHVar8;
    } while (pHVar9 != (HostAttributeList *)0x0);
    if (pHVar10 != pHVar11) {
      uVar1 = *(ulong *)(pHVar10 + 0x28);
      lVar12 = sVar4 - uVar1;
      if (uVar1 <= sVar4 && lVar12 != 0) {
        sVar4 = uVar1;
      }
      if (sVar4 == 0) {
LAB_00188fab:
        lVar7 = -0x80000000;
        if (-0x80000000 < lVar12) {
          lVar7 = lVar12;
        }
        iVar3 = 0x7fffffff;
        if (lVar7 < 0x7fffffff) {
          iVar3 = (int)lVar7;
        }
      }
      else {
        iVar3 = memcmp(psVar5,*(void **)(pHVar10 + 0x20),sVar4);
        if (iVar3 == 0) goto LAB_00188fab;
      }
      pHVar2 = pHVar10;
      if (iVar3 < 0) {
        pHVar2 = pHVar11;
      }
    }
  }
  if (psVar5 != local_50) {
    operator_delete(psVar5);
  }
  if ((pHVar2 == pHVar11) || (*(int *)(pHVar2 + 0x4c) != 4)) {
    *param_3 = 0;
    uVar6 = 1;
  }
  else {
    *param_3 = *(undefined4 *)(pHVar2 + 0x48);
    *local_38 = *(undefined8 *)(pHVar2 + 0x40);
    uVar6 = 0;
  }
LAB_0018902a:
  return uVar6;
}


