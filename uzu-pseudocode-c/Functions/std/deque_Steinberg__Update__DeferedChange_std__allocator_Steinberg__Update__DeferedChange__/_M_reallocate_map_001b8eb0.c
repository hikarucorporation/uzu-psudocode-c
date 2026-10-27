// Function : _M_reallocate_map
// Namespace: std:deque_Steinberg__Update__DeferedChange_std__allocator_Steinberg__Update__DeferedChange__
// Entry    : 001b8eb0
// Prototype: undefined _M_reallocate_map(deque<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>> * this, long * param_1, char param_2)
// Body     : 001b8eb0 - 001b900f


/* std::deque<Steinberg::Update::DeferedChange, std::allocator<Steinberg::Update::DeferedChange>
   >::_M_reallocate_map(unsigned long, bool) */

void __thiscall
std::deque<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>>::
_M_reallocate_map(deque<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>>
                  *this,long *param_1,char param_2)

{
  void *pvVar1;
  long *plVar2;
  long *extraout_RDX;
  ulong uVar3;
  long *__src;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  size_t __n;
  long lVar9;
  long lVar10;
  
  plVar2 = *(long **)(this + 8);
  __src = *(long **)(this + 0x28);
  lVar8 = *(long *)(this + 0x48) - (long)__src;
  lVar7 = lVar8 >> 3;
  lVar9 = (long)param_1 + lVar7 + 1;
  if ((long *)(lVar9 * 2) < plVar2) {
    plVar4 = (long *)0x0;
    if (param_2 != '\0') {
      plVar4 = param_1;
    }
    plVar2 = (long *)(((long)plVar2 - lVar9 & 0xfffffffffffffffeU) * 4 + *(long *)this +
                     (long)plVar4 * 8);
    __n = lVar8 + 8;
    if (plVar2 < __src) {
      if (__n == 0) goto LAB_001b8fb7;
      plVar4 = plVar2;
    }
    else {
      if (__n == 0) goto LAB_001b8fb7;
      plVar4 = (long *)((long)plVar2 + ((lVar7 + 1) * 8 - __n));
    }
    memmove(plVar4,__src,__n);
LAB_001b8fb7:
    *(long **)(this + 0x28) = plVar2;
    lVar8 = *plVar2;
    *(long *)(this + 0x18) = lVar8;
    *(long *)(this + 0x20) = lVar8 + 0x200;
    *(long **)(this + 0x48) = plVar2 + lVar7;
    lVar7 = plVar2[lVar7];
    *(long *)(this + 0x38) = lVar7;
    *(long *)(this + 0x40) = lVar7 + 0x200;
    return;
  }
  plVar4 = plVar2;
  if (plVar2 < param_1) {
    plVar4 = param_1;
  }
  uVar3 = (long)plVar2 + (long)plVar4 + 2;
  if (uVar3 >> 0x3c == 0) {
    pvVar1 = operator_new(uVar3 * 8);
    plVar2 = (long *)0x0;
    if (param_2 != '\0') {
      plVar2 = param_1;
    }
    plVar2 = (long *)((long)pvVar1 + (long)plVar2 * 8 + (uVar3 - lVar9 & 0xfffffffffffffffe) * 4);
    if (lVar8 + 8U != 0) {
      memmove(plVar2,__src,lVar8 + 8U);
    }
    operator_delete(*(void **)this);
    *(void **)this = pvVar1;
    *(ulong *)(this + 8) = uVar3;
    goto LAB_001b8fb7;
  }
  if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_bad_array_new_length();
  }
  std::__throw_bad_alloc();
  lVar8 = extraout_RDX[3];
  lVar7 = __src[3];
  lVar6 = lVar8 - lVar7 >> 3;
  lVar10 = *extraout_RDX - extraout_RDX[1] >> 4;
  plVar5 = (long *)*__src;
  plVar2 = (long *)__src[2];
  lVar9 = (long)plVar2 - (long)plVar5 >> 4;
  uVar3 = (lVar6 + -1 + (ulong)(lVar8 == 0)) * 0x20 + lVar10 + lVar9;
  if (3 < (long)uVar3) {
    lVar8 = *plVar4;
    lVar9 = (uVar3 >> 2) + 1;
    do {
      if (*plVar5 == lVar8) goto LAB_001b9287;
      plVar5 = plVar5 + 2;
      *__src = (long)plVar5;
      lVar6 = lVar7;
      if (plVar5 == plVar2) {
        lVar6 = lVar7 + 8;
        __src[3] = lVar6;
        plVar5 = *(long **)(lVar7 + 8);
        __src[1] = (long)plVar5;
        plVar2 = plVar5 + 0x40;
        __src[2] = (long)plVar2;
        *__src = (long)plVar5;
      }
      lVar7 = lVar6;
      if (*plVar5 == lVar8) goto LAB_001b9287;
      plVar5 = plVar5 + 2;
      *__src = (long)plVar5;
      if (plVar5 == plVar2) {
        lVar7 = lVar6 + 8;
        __src[3] = lVar7;
        plVar5 = *(long **)(lVar6 + 8);
        __src[1] = (long)plVar5;
        plVar2 = plVar5 + 0x40;
        __src[2] = (long)plVar2;
        *__src = (long)plVar5;
      }
      if (*plVar5 == lVar8) goto LAB_001b9287;
      plVar5 = plVar5 + 2;
      *__src = (long)plVar5;
      lVar6 = lVar7;
      if (plVar5 == plVar2) {
        lVar6 = lVar7 + 8;
        __src[3] = lVar6;
        plVar5 = *(long **)(lVar7 + 8);
        __src[1] = (long)plVar5;
        plVar2 = plVar5 + 0x40;
        __src[2] = (long)plVar2;
        *__src = (long)plVar5;
      }
      lVar7 = lVar6;
      if (*plVar5 == lVar8) goto LAB_001b9287;
      plVar5 = plVar5 + 2;
      *__src = (long)plVar5;
      if (plVar5 == plVar2) {
        lVar7 = lVar6 + 8;
        __src[3] = lVar7;
        plVar5 = *(long **)(lVar6 + 8);
        __src[1] = (long)plVar5;
        plVar2 = plVar5 + 0x40;
        __src[2] = (long)plVar2;
        *__src = (long)plVar5;
      }
      lVar9 = lVar9 + -1;
    } while (1 < lVar9);
    lVar8 = extraout_RDX[3];
    lVar6 = lVar8 - lVar7 >> 3;
    lVar10 = *extraout_RDX - extraout_RDX[1] >> 4;
    lVar9 = (long)plVar2 - (long)plVar5 >> 4;
  }
  lVar9 = (lVar6 + -1 + (ulong)(lVar8 == 0)) * 0x20 + lVar10 + lVar9;
  if (lVar9 == 3) {
    lVar8 = *plVar4;
    if (*plVar5 == lVar8) goto LAB_001b9287;
    plVar5 = plVar5 + 2;
    *__src = (long)plVar5;
    if (plVar5 == plVar2) {
      __src[3] = lVar7 + 8;
      plVar5 = *(long **)(lVar7 + 8);
      __src[1] = (long)plVar5;
      plVar2 = plVar5 + 0x40;
      __src[2] = (long)plVar2;
      *__src = (long)plVar5;
      lVar7 = lVar7 + 8;
    }
LAB_001b9205:
    if (*plVar5 == lVar8) {
LAB_001b9287:
      *(long **)this = plVar5;
      *(long *)(this + 8) = __src[1];
      *(long **)(this + 0x10) = plVar2;
      *(long *)(this + 0x18) = lVar7;
      return;
    }
    plVar5 = plVar5 + 2;
    *__src = (long)plVar5;
    if (plVar5 == plVar2) {
      __src[3] = lVar7 + 8;
      plVar5 = *(long **)(lVar7 + 8);
      __src[1] = (long)plVar5;
      plVar2 = plVar5 + 0x40;
      __src[2] = (long)plVar2;
      *__src = (long)plVar5;
      lVar9 = *plVar5;
      lVar7 = lVar7 + 8;
    }
    else {
      lVar9 = *plVar5;
    }
    if (lVar9 == lVar8) goto LAB_001b9287;
  }
  else {
    if (lVar9 == 2) {
      lVar8 = *plVar4;
      goto LAB_001b9205;
    }
    if (lVar9 != 1) goto LAB_001b9245;
    if (*plVar5 == *plVar4) goto LAB_001b9287;
  }
  *__src = (long)(plVar5 + 2);
  if (plVar5 + 2 == plVar2) {
    __src[3] = lVar7 + 8;
    lVar7 = *(long *)(lVar7 + 8);
    __src[1] = lVar7;
    __src[2] = lVar7 + 0x200;
    *__src = lVar7;
  }
LAB_001b9245:
  lVar7 = extraout_RDX[1];
  *(long *)this = *extraout_RDX;
  *(long *)(this + 8) = lVar7;
  *(long *)(this + 0x10) = extraout_RDX[2];
  *(long *)(this + 0x18) = extraout_RDX[3];
  return;
}


