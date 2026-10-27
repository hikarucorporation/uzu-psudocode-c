// Function : getProgramInfo
// Namespace: Steinberg:Vst:ProgramList
// Entry    : 00193f40
// Prototype: undefined8 getProgramInfo(ProgramList * this, uint param_1, char * param_2, undefined8 * param_3)
// Body     : 00193f40 - 0019422f


/* Steinberg::Vst::ProgramList::getProgramInfo(int, char const*, char16_t*) */

undefined8 __thiscall
Steinberg::Vst::ProgramList::getProgramInfo
          (ProgramList *this,uint param_1,char *param_2,undefined8 *param_3)

{
  undefined2 *__src;
  int iVar1;
  size_t sVar2;
  size_t *psVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  size_t __n;
  undefined8 *__dest;
  undefined8 uVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  size_t local_68;
  long local_60;
  undefined8 *local_58;
  size_t *local_50;
  ulong local_48;
  size_t local_40 [2];
  
  uVar8 = 1;
  if (((int)param_1 < 0) ||
     ((int)((ulong)(*(long *)(this + 0x120) - *(long *)(this + 0x118)) >> 5) <= (int)param_1))
  goto LAB_00194212;
  lVar11 = *(long *)(this + 0x130);
  psVar3 = local_40;
  local_50 = psVar3;
  if (param_2 == (char *)0x0) {
    pcVar10 = "basic_string: construction from null is not valid";
    std::__throw_logic_error("basic_string: construction from null is not valid");
    uVar8 = 1;
    if ((-1 < (int)param_1) &&
       ((int)param_1 < (int)((ulong)(*(long *)(pcVar10 + 0x120) - *(long *)(pcVar10 + 0x118)) >> 5))
       ) {
      __dest[0x1e] = 0;
      __dest[0x1f] = 0;
      __dest[0x1c] = 0;
      __dest[0x1d] = 0;
      __dest[0x1a] = 0;
      __dest[0x1b] = 0;
      __dest[0x18] = 0;
      __dest[0x19] = 0;
      __dest[0x16] = 0;
      __dest[0x17] = 0;
      __dest[0x14] = 0;
      __dest[0x15] = 0;
      __dest[0x12] = 0;
      __dest[0x13] = 0;
      __dest[0x10] = 0;
      __dest[0x11] = 0;
      __dest[0xe] = 0;
      __dest[0xf] = 0;
      __dest[0xc] = 0;
      __dest[0xd] = 0;
      __dest[10] = 0;
      __dest[0xb] = 0;
      __dest[8] = 0;
      __dest[9] = 0;
      __dest[6] = 0;
      __dest[7] = 0;
      __dest[4] = 0;
      __dest[5] = 0;
      __dest[2] = 0;
      __dest[3] = 0;
      *__dest = 0;
      __dest[1] = 0;
      uVar9 = (ulong)param_1;
      lVar11 = *(long *)(pcVar10 + 0x118);
      uVar5 = *(long *)(pcVar10 + 0x120) - lVar11 >> 5;
      if (uVar5 <= uVar9) {
                    /* WARNING: Subroutine does not return */
        std::__throw_out_of_range_fmt
                  ("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)",uVar9
                   ,uVar5);
      }
      uVar5 = *(ulong *)(lVar11 + 8 + uVar9 * 0x20);
      uVar6 = 0x80;
      if (uVar5 < 0x80) {
        uVar6 = uVar5;
      }
      uVar8 = 0;
      if (uVar6 != 0) {
        __src = *(undefined2 **)(lVar11 + uVar9 * 0x20);
        if (uVar6 != 1) {
          memcpy(__dest,__src,uVar6 * 2);
          return 0;
        }
        *(undefined2 *)__dest = *__src;
      }
    }
    return uVar8;
  }
  sVar2 = strlen(param_2);
  local_68 = sVar2;
  if (0xf < sVar2) {
    psVar3 = (size_t *)std::__cxx11::string::_M_create((ulong *)&local_50,(ulong)&local_68);
    local_40[0] = local_68;
    local_50 = psVar3;
  }
  if (sVar2 != 0) {
    if (sVar2 == 1) {
      *(char *)psVar3 = *param_2;
    }
    else {
      memcpy(psVar3,param_2,sVar2);
    }
  }
  psVar3 = local_50;
  sVar2 = local_68;
  local_48 = local_68;
  *(char *)((long)local_50 + local_68) = '\0';
  lVar4 = (ulong)param_1 * 0x30;
  lVar13 = *(long *)(lVar11 + 0x10 + lVar4);
  lVar11 = lVar11 + lVar4 + 8;
  lVar12 = lVar11;
  local_58 = param_3;
  if (lVar13 != 0) {
    local_60 = lVar11;
    do {
      uVar5 = *(ulong *)(lVar13 + 0x28);
      lVar12 = uVar5 - sVar2;
      __n = sVar2;
      if (uVar5 < sVar2 || lVar12 == 0) {
        __n = uVar5;
      }
      if ((__n == 0) || (iVar1 = memcmp(*(void **)(lVar13 + 0x20),psVar3,__n), iVar1 == 0)) {
        if (lVar12 < -0x7fffffff) {
          lVar12 = -0x80000000;
        }
        if (0x7ffffffe < lVar12) {
          lVar12 = 0x7fffffff;
        }
        iVar1 = (int)lVar12;
      }
      param_3 = local_58;
      plVar7 = (long *)(lVar13 + 0x18);
      if (-1 < iVar1) {
        plVar7 = (long *)(lVar13 + 0x10);
        lVar11 = lVar13;
      }
      lVar13 = *plVar7;
    } while (lVar13 != 0);
    lVar12 = local_60;
    if (lVar11 != local_60) {
      uVar5 = *(ulong *)(lVar11 + 0x28);
      lVar13 = sVar2 - uVar5;
      if (uVar5 <= sVar2 && lVar13 != 0) {
        sVar2 = uVar5;
      }
      if (sVar2 == 0) {
LAB_001940ef:
        lVar12 = -0x80000000;
        if (-0x80000000 < lVar13) {
          lVar12 = lVar13;
        }
        iVar1 = 0x7fffffff;
        if (lVar12 < 0x7fffffff) {
          iVar1 = (int)lVar12;
        }
      }
      else {
        iVar1 = memcmp(psVar3,*(void **)(lVar11 + 0x20),sVar2);
        if (iVar1 == 0) goto LAB_001940ef;
      }
      lVar12 = lVar11;
      if (iVar1 < 0) {
        lVar12 = local_60;
      }
    }
  }
  if (psVar3 != local_40) {
    operator_delete(psVar3);
  }
  uVar8 = 1;
  if ((lVar12 != *(long *)(this + 0x130) + lVar4 + 8) && (*(long *)(lVar12 + 0x48) != 0)) {
    param_3[0x1e] = 0;
    param_3[0x1f] = 0;
    param_3[0x1c] = 0;
    param_3[0x1d] = 0;
    param_3[0x1a] = 0;
    param_3[0x1b] = 0;
    param_3[0x18] = 0;
    param_3[0x19] = 0;
    param_3[0x16] = 0;
    param_3[0x17] = 0;
    param_3[0x14] = 0;
    param_3[0x15] = 0;
    param_3[0x12] = 0;
    param_3[0x13] = 0;
    param_3[0x10] = 0;
    param_3[0x11] = 0;
    param_3[0xe] = 0;
    param_3[0xf] = 0;
    param_3[0xc] = 0;
    param_3[0xd] = 0;
    param_3[10] = 0;
    param_3[0xb] = 0;
    param_3[8] = 0;
    param_3[9] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    *param_3 = 0;
    param_3[1] = 0;
    uVar5 = 0x80;
    if (*(ulong *)(lVar12 + 0x48) < 0x80) {
      uVar5 = *(ulong *)(lVar12 + 0x48);
    }
    uVar8 = 0;
    if (uVar5 != 0) {
      if (uVar5 == 1) {
        *(undefined2 *)param_3 = **(undefined2 **)(lVar12 + 0x40);
      }
      else {
        memcpy(param_3,*(undefined2 **)(lVar12 + 0x40),uVar5 * 2);
      }
    }
  }
LAB_00194212:
  return uVar8;
}


