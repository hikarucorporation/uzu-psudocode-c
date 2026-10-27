// Function : _M_realloc_insert<Steinberg::ModuleInfo::Snapshot>
// Namespace: std:vector_Steinberg__ModuleInfo__Snapshot_std__allocator_Steinberg__ModuleInfo__Snapshot__
// Entry    : 001a33f0
// Prototype: void _M_realloc_insert<Steinberg::ModuleInfo::Snapshot>(vector<Steinberg::ModuleInfo::Snapshot,std::allocator<Steinberg::ModuleInfo::Snapshot>> * this, undefined8 * param_1, undefined8 * param_2)
// Body     : 001a33f0 - 001a368f


/* void std::vector<Steinberg::ModuleInfo::Snapshot, std::allocator<Steinberg::ModuleInfo::Snapshot>
   >::_M_realloc_insert<Steinberg::ModuleInfo::Snapshot>(__gnu_cxx::__normal_iterator<Steinberg::ModuleInfo::Snapshot*,
   std::vector<Steinberg::ModuleInfo::Snapshot, std::allocator<Steinberg::ModuleInfo::Snapshot> > >,
   Steinberg::ModuleInfo::Snapshot&&) */

void __thiscall
std::vector<Steinberg::ModuleInfo::Snapshot,std::allocator<Steinberg::ModuleInfo::Snapshot>>::
_M_realloc_insert<Steinberg::ModuleInfo::Snapshot>
          (vector<Steinberg::ModuleInfo::Snapshot,std::allocator<Steinberg::ModuleInfo::Snapshot>>
           *this,undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  void *__dest;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  puVar1 = *(undefined8 **)this;
  puVar2 = *(undefined8 **)(this + 8);
  lVar3 = (long)puVar2 - (long)puVar1;
  if (lVar3 == 0x7ffffffffffffff8) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar6 = (lVar3 >> 3) * -0x3333333333333333;
  uVar4 = 1;
  if (lVar3 != 0) {
    uVar4 = uVar6;
  }
  uVar9 = uVar4 + uVar6;
  if (0x333333333333333 < uVar9) {
    uVar9 = 0x333333333333333;
  }
  if (CARRY8(uVar4,uVar6)) {
    uVar9 = 0x333333333333333;
  }
  lVar3 = (long)param_1 - (long)puVar1;
  puVar5 = operator_new(uVar9 * 0x28);
  *(undefined8 *)((long)puVar5 + lVar3) = *param_2;
  __dest = (void *)((long)puVar5 + lVar3 + 0x18);
  *(void **)((long)puVar5 + lVar3 + 8) = __dest;
  puVar7 = (undefined8 *)param_2[1];
  if (puVar7 == param_2 + 3) {
    lVar8 = param_2[2];
    memcpy(__dest,puVar7,lVar8 + 1);
  }
  else {
    *(undefined8 **)((long)puVar5 + lVar3 + 8) = puVar7;
    puVar5[(lVar3 >> 3) + 3] = param_2[3];
    lVar8 = param_2[2];
  }
  puVar5[(lVar3 >> 3) + 2] = lVar8;
  param_2[1] = param_2 + 3;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  if (puVar1 == param_1) {
    puVar7 = puVar5 + 5;
  }
  else {
    puVar10 = puVar5;
    puVar12 = puVar1 + 3;
    do {
      puVar7 = puVar10;
      *puVar7 = puVar12[-3];
      puVar7[1] = puVar7 + 3;
      puVar10 = (undefined8 *)puVar12[-2];
      if (puVar10 == puVar12) {
        lVar3 = puVar12[-1];
        memcpy(puVar7 + 3,puVar10,lVar3 + 1);
      }
      else {
        puVar7[1] = puVar10;
        puVar7[3] = *puVar12;
        lVar3 = puVar12[-1];
      }
      puVar7[2] = lVar3;
      puVar12[-2] = puVar12;
      puVar12[-1] = 0;
      *(undefined1 *)puVar12 = 0;
      puVar11 = puVar12 + 2;
      puVar10 = puVar7 + 5;
      puVar12 = puVar12 + 5;
    } while (puVar11 != param_1);
    puVar7 = puVar7 + 10;
  }
  if (puVar2 != param_1) {
    puVar10 = param_1 + 3;
    do {
      puVar12 = puVar7;
      *puVar12 = puVar10[-3];
      puVar12[1] = puVar12 + 3;
      puVar7 = (undefined8 *)puVar10[-2];
      if (puVar7 == puVar10) {
        lVar3 = puVar10[-1];
        memcpy(puVar12 + 3,puVar7,lVar3 + 1);
      }
      else {
        puVar12[1] = puVar7;
        puVar12[3] = *puVar10;
        lVar3 = puVar10[-1];
      }
      puVar12[2] = lVar3;
      puVar10[-2] = puVar10;
      puVar10[-1] = 0;
      *(undefined1 *)puVar10 = 0;
      puVar11 = puVar10 + 2;
      puVar7 = puVar12 + 5;
      puVar10 = puVar10 + 5;
    } while (puVar11 != puVar2);
    puVar7 = puVar12 + 5;
  }
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1);
  }
  *(undefined8 **)this = puVar5;
  *(undefined8 **)(this + 8) = puVar7;
  *(undefined8 **)(this + 0x10) = puVar5 + uVar9 * 5;
  return;
}


