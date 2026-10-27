// Function : _M_erase
// Namespace: std:deque_Steinberg__Update__DeferedChange_std__allocator_Steinberg__Update__DeferedChange__
// Entry    : 001b92a0
// Prototype: undefined _M_erase(long * param_1, long param_2, long * param_3)
// Body     : 001b92a0 - 001b95bc


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::deque<Steinberg::Update::DeferedChange, std::allocator<Steinberg::Update::DeferedChange>
   >::_M_erase(std::_Deque_iterator<Steinberg::Update::DeferedChange,
   Steinberg::Update::DeferedChange&, Steinberg::Update::DeferedChange*>) */

void __cdecl
std::deque<Steinberg::Update::DeferedChange,std::allocator<Steinberg::Update::DeferedChange>>::
_M_erase(long *param_1,long param_2,long *param_3)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  ulong uVar9;
  void *pvVar10;
  long lVar11;
  void *pvVar12;
  void *pvVar13;
  long lVar14;
  void *pvVar15;
  void *pvVar16;
  ulong uVar17;
  void *local_b8;
  void *local_b0;
  void *local_a8;
  long local_a0;
  void *local_98;
  void *local_90;
  void *local_88;
  long local_80;
  void *local_78;
  void *local_70;
  void *local_68;
  long local_60;
  long *local_58;
  long local_50 [4];
  
  pvVar13 = (void *)*param_3;
  pvVar1 = (void *)param_3[1];
  pvVar2 = (void *)param_3[2];
  lVar3 = param_3[3];
  pvVar8 = pvVar1;
  pvVar10 = pvVar2;
  lVar14 = lVar3;
  pvVar16 = (void *)((long)pvVar13 + 0x10);
  if ((void *)((long)pvVar13 + 0x10) == pvVar2) {
    lVar14 = lVar3 + 8;
    pvVar8 = *(void **)(lVar3 + 8);
    pvVar10 = (void *)((long)pvVar8 + 0x200);
    pvVar16 = pvVar8;
  }
  pvVar4 = *(void **)(param_2 + 0x10);
  pvVar15 = *(void **)(param_2 + 0x20);
  lVar5 = *(long *)(param_2 + 0x28);
  lVar11 = (long)pvVar15 - (long)pvVar4 >> 4;
  uVar17 = ((long)pvVar13 - (long)pvVar1 >> 4) + lVar11 +
           ((((ulong)(lVar3 - lVar5) >> 3) - 1) + (ulong)(lVar3 == 0)) * 0x20;
  lVar6 = *(long *)(param_2 + 0x48);
  pvVar7 = *(void **)(param_2 + 0x30);
  pvVar12 = *(void **)(param_2 + 0x38);
  local_58 = param_1;
  if (uVar17 < ((long)pvVar7 - (long)pvVar12 >> 4) + lVar11 +
               ((((ulong)(lVar6 - lVar5) >> 3) - 1) + (ulong)(lVar6 == 0)) * 0x20 >> 1) {
    if (pvVar13 != pvVar4) {
      local_70 = *(void **)(param_2 + 0x18);
      local_b8 = pvVar16;
      local_b0 = pvVar8;
      local_a8 = pvVar10;
      local_a0 = lVar14;
      local_98 = pvVar13;
      local_90 = pvVar1;
      local_88 = pvVar2;
      local_80 = lVar3;
      local_78 = pvVar4;
      local_68 = pvVar15;
      local_60 = lVar5;
      __copy_move_backward_dit<true,Steinberg::Update::DeferedChange,Steinberg::Update::DeferedChange&,Steinberg::Update::DeferedChange*,std::_Deque_iterator<Steinberg::Update::DeferedChange,Steinberg::Update::DeferedChange&,Steinberg::Update::DeferedChange*>>
                (local_50,(long *)&local_78,(long *)&local_98,(long *)&local_b8);
      pvVar13 = *(void **)(param_2 + 0x10);
      pvVar15 = *(void **)(param_2 + 0x20);
    }
    if (pvVar13 == (void *)((long)pvVar15 + -0x10)) {
      operator_delete(*(void **)(param_2 + 0x18));
      lVar14 = *(long *)(param_2 + 0x28);
      *(long *)(param_2 + 0x28) = lVar14 + 8;
      lVar14 = *(long *)(lVar14 + 8);
      *(long *)(param_2 + 0x18) = lVar14;
      pvVar15 = (void *)(lVar14 + 0x200);
      *(void **)(param_2 + 0x20) = pvVar15;
      *(long *)(param_2 + 0x10) = lVar14;
    }
    else {
      lVar14 = (long)pvVar13 + 0x10;
      *(long *)(param_2 + 0x10) = lVar14;
    }
  }
  else {
    if (pvVar16 != pvVar7) {
      local_88 = *(void **)(param_2 + 0x40);
      local_b8 = pvVar13;
      local_b0 = pvVar1;
      local_a8 = pvVar2;
      local_a0 = lVar3;
      local_98 = pvVar7;
      local_90 = pvVar12;
      local_80 = lVar6;
      local_78 = pvVar16;
      local_70 = pvVar8;
      local_68 = pvVar10;
      local_60 = lVar14;
      __copy_move_dit<true,Steinberg::Update::DeferedChange,Steinberg::Update::DeferedChange&,Steinberg::Update::DeferedChange*,std::_Deque_iterator<Steinberg::Update::DeferedChange,Steinberg::Update::DeferedChange&,Steinberg::Update::DeferedChange*>>
                (local_50,(long *)&local_78,(long *)&local_98,&local_b8);
      pvVar16 = *(void **)(param_2 + 0x30);
      pvVar12 = *(void **)(param_2 + 0x38);
    }
    if (pvVar16 == pvVar12) {
      operator_delete(pvVar12);
      lVar14 = *(long *)(param_2 + 0x48);
      *(long *)(param_2 + 0x48) = lVar14 + -8;
      lVar14 = *(long *)(lVar14 + -8);
      *(long *)(param_2 + 0x38) = lVar14;
      *(long *)(param_2 + 0x40) = lVar14 + 0x200;
      lVar14 = lVar14 + 0x1f0;
    }
    else {
      lVar14 = (long)pvVar16 + -0x10;
    }
    *(long *)(param_2 + 0x30) = lVar14;
    lVar14 = *(long *)(param_2 + 0x10);
    pvVar15 = *(void **)(param_2 + 0x20);
  }
  lVar3 = *(long *)(param_2 + 0x18);
  lVar5 = *(long *)(param_2 + 0x28);
  local_58[1] = lVar3;
  local_58[2] = (long)pvVar15;
  local_58[3] = lVar5;
  uVar9 = (lVar14 - lVar3 >> 4) + uVar17;
  if ((long)uVar9 < 0) {
    uVar17 = uVar9 >> 5 | 0xf800000000000000;
  }
  else {
    if (uVar9 < 0x20) {
      lVar14 = lVar14 + uVar17 * 0x10;
      goto LAB_001b95a8;
    }
    uVar17 = uVar9 >> 5;
  }
  local_58[3] = lVar5 + uVar17 * 8;
  lVar14 = *(long *)(lVar5 + uVar17 * 8);
  local_58[1] = lVar14;
  local_58[2] = lVar14 + 0x200;
  lVar14 = (uVar9 + uVar17 * -0x20) * 0x10 + lVar14;
LAB_001b95a8:
  *local_58 = lVar14;
  return;
}


