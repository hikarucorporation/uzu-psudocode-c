// Function : renameBus
// Namespace: Steinberg:Vst:Component
// Entry    : 00191630
// Prototype: undefined8 renameBus(Component * this, int param_1, int param_2, uint param_3, undefined2 * param_4)
// Body     : 00191630 - 0019188b


/* Steinberg::Vst::Component::renameBus(int, int, int, char16_t const*) */

undefined8 __thiscall
Steinberg::Vst::Component::renameBus
          (Component *this,int param_1,int param_2,uint param_3,undefined2 *param_4)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *__dest;
  ulong uVar5;
  Component *pCVar6;
  Component *pCVar7;
  ulong uVar8;
  ulong __n;
  long lVar9;
  ulong *__src;
  ulong *local_60;
  ulong local_58;
  ulong local_50 [2];
  ulong *local_40;
  ulong **local_38;
  
  if ((int)param_3 < 0) {
    return 2;
  }
  if (param_1 == 1) {
    pCVar6 = this + 0xe0;
    pCVar7 = this + 0xb0;
  }
  else {
    if (param_1 != 0) {
      return 2;
    }
    pCVar6 = this + 0x80;
    pCVar7 = this + 0x50;
  }
  if (param_2 != 0) {
    pCVar7 = pCVar6;
  }
  uVar4 = *(long *)(pCVar7 + 0x18) - *(long *)(pCVar7 + 0x10) >> 3;
  if ((int)uVar4 <= (int)param_3) {
    return 2;
  }
  if (uVar4 <= param_3) {
                    /* WARNING: Subroutine does not return */
    std::__throw_out_of_range_fmt
              ("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)");
  }
  lVar1 = *(long *)(*(long *)(pCVar7 + 0x10) + (ulong)param_3 * 8);
  local_60 = local_50;
  if (param_4 == (undefined2 *)0x0) {
    std::__throw_logic_error("basic_string: construction from null is not valid");
LAB_00191874:
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("basic_string::_M_create");
  }
  uVar4 = 0xffffffffffffffff;
  lVar9 = 2;
  uVar8 = 0;
  do {
    lVar9 = lVar9 + -2;
    uVar8 = uVar8 + 2;
    lVar2 = uVar4 + 1;
    uVar4 = uVar4 + 1;
  } while (param_4[lVar2] != 0);
  __n = -lVar9;
  if (0xe < __n) {
    if (0x3ffffffffffffffe < __n) goto LAB_00191874;
    local_60 = operator_new(uVar8);
    local_50[0] = uVar4;
  }
  __src = local_60;
  if (uVar4 != 0) {
    if (uVar4 == 1) {
      *(undefined2 *)local_60 = *param_4;
    }
    else {
      memcpy(local_60,param_4,__n);
    }
  }
  *(undefined2 *)((long)__src + uVar4 * 2) = 0;
  local_58 = uVar4;
  if ((ulong **)(lVar1 + 0x10) == &local_60) goto LAB_00191832;
  local_38 = (ulong **)(lVar1 + 0x10);
  __dest = *(ulong **)(lVar1 + 0x10);
  puVar3 = (ulong *)(lVar1 + 0x20);
  uVar8 = 7;
  if (__dest != puVar3) {
    uVar8 = *(ulong *)(lVar1 + 0x20);
  }
  if (uVar8 < uVar4) {
    local_40 = puVar3;
    if (uVar4 >> 0x3d != 0) {
                    /* try { // try from 00191880 to 0019188b has its CatchHandler @ 0019188c */
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("basic_string::_M_create");
    }
    uVar8 = uVar8 * 2;
    uVar5 = 0x1fffffffffffffff;
    if (uVar8 < 0x1fffffffffffffff) {
      uVar5 = uVar8;
    }
    if (uVar8 <= uVar4) {
      uVar5 = uVar4;
    }
                    /* try { // try from 001917be to 001917c2 has its CatchHandler @ 0019188c */
    puVar3 = operator_new(uVar5 * 2 + 2);
    if (__dest != local_40) {
      operator_delete(__dest);
      __src = local_60;
    }
    *(ulong **)(lVar1 + 0x10) = puVar3;
    *(ulong *)(lVar1 + 0x20) = uVar5;
    __dest = puVar3;
LAB_001917f8:
    if (uVar4 == 1) {
      *(short *)__dest = (short)*__src;
    }
    else {
      memcpy(__dest,__src,__n);
      __dest = *local_38;
      __src = local_60;
    }
    *(ulong *)(lVar1 + 0x18) = uVar4;
    __dest = (ulong *)((long)__dest - lVar9);
  }
  else {
    if (uVar4 != 0) goto LAB_001917f8;
    *(undefined8 *)(lVar1 + 0x18) = 0;
  }
  *(undefined2 *)__dest = 0;
LAB_00191832:
  if (__src != local_50) {
    operator_delete(__src);
  }
  return 0;
}


