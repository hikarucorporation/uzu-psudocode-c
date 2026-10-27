// Function : getString
// Namespace: Steinberg:Vst:HostAttributeList
// Entry    : 00188b00
// Prototype: undefined8 getString(HostAttributeList * this, char * param_1, void * param_2, uint param_3)
// Body     : 00188b00 - 00188d0b


/* Steinberg::Vst::HostAttributeList::getString(char const*, char16_t*, unsigned int) */

undefined8 __thiscall
Steinberg::Vst::HostAttributeList::getString
          (HostAttributeList *this,char *param_1,void *param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  HostAttributeList *pHVar3;
  int iVar4;
  size_t sVar5;
  size_t *psVar6;
  undefined8 uVar7;
  long lVar8;
  HostAttributeList *pHVar9;
  size_t __n;
  HostAttributeList *pHVar10;
  long lVar11;
  HostAttributeList *pHVar12;
  HostAttributeList *pHVar13;
  size_t local_68;
  uint local_5c;
  size_t *local_58;
  ulong local_50;
  size_t local_48 [2];
  void *local_38;
  
  if (param_1 == (char *)0x0) {
    uVar7 = 2;
    goto LAB_00188ce9;
  }
  psVar6 = local_48;
  local_58 = psVar6;
  sVar5 = strlen(param_1);
  local_68 = sVar5;
  if (0xf < sVar5) {
    psVar6 = (size_t *)std::__cxx11::string::_M_create((ulong *)&local_58,(ulong)&local_68);
    local_48[0] = local_68;
    local_58 = psVar6;
  }
  if (sVar5 != 0) {
    if (sVar5 == 1) {
      *(char *)psVar6 = *param_1;
    }
    else {
      memcpy(psVar6,param_1,sVar5);
    }
  }
  psVar6 = local_58;
  sVar5 = local_68;
  local_50 = local_68;
  *(undefined1 *)((long)local_58 + local_68) = 0;
  pHVar13 = *(HostAttributeList **)(this + 0x20);
  pHVar12 = this + 0x18;
  pHVar3 = pHVar12;
  local_5c = param_3;
  if (pHVar13 != (HostAttributeList *)0x0) {
    pHVar10 = pHVar12;
    local_38 = param_2;
    do {
      uVar1 = *(ulong *)(pHVar13 + 0x28);
      lVar11 = uVar1 - sVar5;
      __n = sVar5;
      if (uVar1 < sVar5 || lVar11 == 0) {
        __n = uVar1;
      }
      if ((__n == 0) || (iVar4 = memcmp(*(void **)(pHVar13 + 0x20),psVar6,__n), iVar4 == 0)) {
        if (lVar11 < -0x7fffffff) {
          lVar11 = -0x80000000;
        }
        if (0x7ffffffe < lVar11) {
          lVar11 = 0x7fffffff;
        }
        iVar4 = (int)lVar11;
      }
      param_2 = local_38;
      pHVar9 = pHVar13 + 0x18;
      if (-1 < iVar4) {
        pHVar9 = pHVar13 + 0x10;
        pHVar10 = pHVar13;
      }
      pHVar13 = *(HostAttributeList **)pHVar9;
    } while (pHVar13 != (HostAttributeList *)0x0);
    if (pHVar10 != pHVar12) {
      uVar1 = *(ulong *)(pHVar10 + 0x28);
      lVar11 = sVar5 - uVar1;
      if (uVar1 <= sVar5 && lVar11 != 0) {
        sVar5 = uVar1;
      }
      if (sVar5 == 0) {
LAB_00188c6b:
        lVar8 = -0x80000000;
        if (-0x80000000 < lVar11) {
          lVar8 = lVar11;
        }
        iVar4 = 0x7fffffff;
        if (lVar8 < 0x7fffffff) {
          iVar4 = (int)lVar8;
        }
      }
      else {
        iVar4 = memcmp(psVar6,*(void **)(pHVar10 + 0x20),sVar5);
        if (iVar4 == 0) goto LAB_00188c6b;
      }
      pHVar3 = pHVar10;
      if (iVar4 < 0) {
        pHVar3 = pHVar12;
      }
    }
  }
  if (psVar6 != local_48) {
    operator_delete(psVar6);
  }
  uVar7 = 1;
  if ((pHVar3 != pHVar12) && (*(int *)(pHVar3 + 0x4c) == 3)) {
    uVar2 = *(int *)(pHVar3 + 0x48) * 2;
    if (local_5c < (uint)(*(int *)(pHVar3 + 0x48) * 2)) {
      uVar2 = local_5c;
    }
    memcpy(param_2,*(void **)(pHVar3 + 0x40),(ulong)uVar2);
    uVar7 = 0;
  }
LAB_00188ce9:
  return uVar7;
}


