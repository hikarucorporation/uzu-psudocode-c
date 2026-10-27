// Function : _M_realloc_insert<Steinberg::FUID>
// Namespace: std:vector_Steinberg__FUID_std__allocator_Steinberg__FUID__
// Entry    : 001bd9f0
// Prototype: void _M_realloc_insert<Steinberg::FUID>(vector<Steinberg::FUID,std::allocator<Steinberg::FUID>> * this, undefined8 * param_1, long param_2)
// Body     : 001bd9f0 - 001bdb56


/* void std::vector<Steinberg::FUID, std::allocator<Steinberg::FUID>
   >::_M_realloc_insert<Steinberg::FUID>(__gnu_cxx::__normal_iterator<Steinberg::FUID*,
   std::vector<Steinberg::FUID, std::allocator<Steinberg::FUID> > >, Steinberg::FUID&&) */

void __thiscall
std::vector<Steinberg::FUID,std::allocator<Steinberg::FUID>>::_M_realloc_insert<Steinberg::FUID>
          (vector<Steinberg::FUID,std::allocator<Steinberg::FUID>> *this,undefined8 *param_1,
          long param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  
  puVar2 = *(undefined8 **)this;
  puVar3 = *(undefined8 **)(this + 8);
  lVar7 = (long)puVar3 - (long)puVar2;
  if (lVar7 == 0x7ffffffffffffff8) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar11 = (lVar7 >> 3) * -0x5555555555555555;
  uVar8 = 1;
  if (lVar7 != 0) {
    uVar8 = uVar11;
  }
  uVar13 = uVar8 + uVar11;
  if (0x555555555555555 < uVar13) {
    uVar13 = 0x555555555555555;
  }
  if (CARRY8(uVar8,uVar11)) {
    uVar13 = 0x555555555555555;
  }
  puVar9 = operator_new(uVar13 * 0x18);
  lVar7 = (long)param_1 - (long)puVar2;
  *(undefined ***)((long)puVar9 + lVar7) = &PTR__FUID_00704de0;
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  uVar5 = *(undefined4 *)(param_2 + 0x10);
  uVar6 = *(undefined4 *)(param_2 + 0x14);
  puVar1 = (undefined4 *)((long)puVar9 + lVar7 + 8);
  *puVar1 = *(undefined4 *)(param_2 + 8);
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  puVar12 = puVar9;
  if (lVar7 != 0) {
    puVar10 = puVar2;
    do {
      *puVar12 = &PTR__FUID_00704de0;
      uVar4 = *(undefined4 *)((long)puVar10 + 0xc);
      uVar5 = *(undefined4 *)(puVar10 + 2);
      uVar6 = *(undefined4 *)((long)puVar10 + 0x14);
      *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar10 + 1);
      *(undefined4 *)((long)puVar12 + 0xc) = uVar4;
      *(undefined4 *)(puVar12 + 2) = uVar5;
      *(undefined4 *)((long)puVar12 + 0x14) = uVar6;
      puVar10 = puVar10 + 3;
      puVar12 = puVar12 + 3;
    } while (puVar10 != param_1);
  }
  for (; puVar10 = puVar12 + 3, puVar3 != param_1; param_1 = param_1 + 3) {
    *puVar10 = &PTR__FUID_00704de0;
    uVar4 = *(undefined4 *)((long)param_1 + 0xc);
    uVar5 = *(undefined4 *)(param_1 + 2);
    uVar6 = *(undefined4 *)((long)param_1 + 0x14);
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(param_1 + 1);
    *(undefined4 *)((long)puVar12 + 0x24) = uVar4;
    *(undefined4 *)(puVar10 + 2) = uVar5;
    *(undefined4 *)((long)puVar12 + 0x2c) = uVar6;
    puVar12 = puVar10;
  }
  if (puVar2 != puVar3) {
    puVar12 = puVar2;
    do {
      (**(code **)*puVar12)(puVar12);
      puVar12 = puVar12 + 3;
    } while (puVar12 != puVar3);
  }
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
  }
  *(undefined8 **)this = puVar9;
  *(undefined8 **)(this + 8) = puVar10;
  *(undefined8 **)(this + 0x10) = puVar9 + uVar13 * 3;
  return;
}


