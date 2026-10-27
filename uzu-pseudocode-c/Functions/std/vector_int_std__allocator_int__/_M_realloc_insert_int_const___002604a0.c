// Function : _M_realloc_insert<int_const&>
// Namespace: std:vector_int_std__allocator_int__
// Entry    : 002604a0
// Prototype: void _M_realloc_insert<int_const&>(vector<int,std::allocator<int>> * this, undefined4 * param_1, undefined4 * param_2)
// Body     : 002604a0 - 00260802


/* void std::vector<int, std::allocator<int> >::_M_realloc_insert<int
   const&>(__gnu_cxx::__normal_iterator<int*, std::vector<int, std::allocator<int> > >, int const&)
    */

void __thiscall
std::vector<int,std::allocator<int>>::_M_realloc_insert<int_const&>
          (vector<int,std::allocator<int>> *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  
  puVar3 = *(undefined4 **)this;
  puVar4 = *(undefined4 **)(this + 8);
  lVar8 = (long)puVar4 - (long)puVar3;
  if (lVar8 == 0x7ffffffffffffffc) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar11 = lVar8 >> 2;
  uVar12 = 1;
  if (lVar8 != 0) {
    uVar12 = uVar11;
  }
  uVar15 = uVar12 + uVar11;
  if (uVar15 >> 0x3d != 0) {
    uVar15 = 0x1fffffffffffffff;
  }
  if (CARRY8(uVar12,uVar11)) {
    uVar15 = 0x1fffffffffffffff;
  }
  lVar16 = (long)param_1 - (long)puVar3;
  lVar8 = lVar16 >> 2;
  if (uVar15 == 0) {
    puVar9 = (undefined4 *)0x0;
    *(undefined4 *)(lVar8 * 4) = *param_2;
    if (lVar16 < 1) goto LAB_002605ac;
LAB_00260545:
    puVar10 = puVar9;
    if (puVar3 != param_1) {
      puVar14 = puVar3;
      if (0x1b < lVar16 - 4U) {
        uVar17 = (lVar16 - 4U >> 2) + 1;
        uVar11 = uVar17 & 0x7ffffffffffffff8;
        uVar13 = (uVar11 - 8 >> 3) + 1;
        uVar12 = (ulong)((uint)uVar13 & 3);
        if (uVar11 - 8 < 0x18) {
          lVar8 = 0;
        }
        else {
          uVar13 = uVar13 & 0xfffffffffffffffc;
          lVar8 = 0;
          do {
            uVar5 = *(undefined8 *)((long)(puVar3 + lVar8) + 8);
            uVar6 = *(undefined8 *)(puVar3 + lVar8 + 4);
            uVar7 = *(undefined8 *)((long)(puVar3 + lVar8 + 4) + 8);
            *(undefined8 *)(puVar9 + lVar8) = *(undefined8 *)(puVar3 + lVar8);
            *(undefined8 *)((long)(puVar9 + lVar8) + 8) = uVar5;
            *(undefined8 *)(puVar9 + lVar8 + 4) = uVar6;
            *(undefined8 *)((long)(puVar9 + lVar8 + 4) + 8) = uVar7;
            uVar5 = *(undefined8 *)((long)(puVar3 + lVar8 + 8) + 8);
            uVar6 = *(undefined8 *)(puVar3 + lVar8 + 0xc);
            uVar7 = *(undefined8 *)((long)(puVar3 + lVar8 + 0xc) + 8);
            *(undefined8 *)(puVar9 + lVar8 + 8) = *(undefined8 *)(puVar3 + lVar8 + 8);
            *(undefined8 *)((long)(puVar9 + lVar8 + 8) + 8) = uVar5;
            *(undefined8 *)(puVar9 + lVar8 + 0xc) = uVar6;
            *(undefined8 *)((long)(puVar9 + lVar8 + 0xc) + 8) = uVar7;
            uVar5 = *(undefined8 *)((long)(puVar3 + lVar8 + 0x10) + 8);
            uVar6 = *(undefined8 *)(puVar3 + lVar8 + 0x14);
            uVar7 = *(undefined8 *)((long)(puVar3 + lVar8 + 0x14) + 8);
            *(undefined8 *)(puVar9 + lVar8 + 0x10) = *(undefined8 *)(puVar3 + lVar8 + 0x10);
            *(undefined8 *)((long)(puVar9 + lVar8 + 0x10) + 8) = uVar5;
            *(undefined8 *)(puVar9 + lVar8 + 0x14) = uVar6;
            *(undefined8 *)((long)(puVar9 + lVar8 + 0x14) + 8) = uVar7;
            uVar5 = *(undefined8 *)((long)(puVar3 + lVar8 + 0x18) + 8);
            uVar6 = *(undefined8 *)(puVar3 + lVar8 + 0x1c);
            uVar7 = *(undefined8 *)((long)(puVar3 + lVar8 + 0x1c) + 8);
            *(undefined8 *)(puVar9 + lVar8 + 0x18) = *(undefined8 *)(puVar3 + lVar8 + 0x18);
            *(undefined8 *)((long)(puVar9 + lVar8 + 0x18) + 8) = uVar5;
            *(undefined8 *)(puVar9 + lVar8 + 0x1c) = uVar6;
            *(undefined8 *)((long)(puVar9 + lVar8 + 0x1c) + 8) = uVar7;
            lVar8 = lVar8 + 0x20;
            uVar13 = uVar13 - 4;
          } while (uVar13 != 0);
        }
        if (uVar12 != 0) {
          lVar16 = 0;
          do {
            puVar2 = (undefined8 *)((long)puVar3 + lVar16 + lVar8 * 4);
            uVar5 = puVar2[1];
            puVar1 = (undefined8 *)((long)puVar3 + lVar16 + lVar8 * 4 + 0x10);
            uVar6 = *puVar1;
            uVar7 = puVar1[1];
            puVar1 = (undefined8 *)((long)puVar9 + lVar16 + lVar8 * 4);
            *puVar1 = *puVar2;
            puVar1[1] = uVar5;
            puVar1 = (undefined8 *)((long)puVar9 + lVar16 + lVar8 * 4 + 0x10);
            *puVar1 = uVar6;
            puVar1[1] = uVar7;
            lVar16 = lVar16 + 0x20;
          } while (uVar12 * 0x20 != lVar16);
        }
        puVar10 = puVar9 + uVar11;
        if (uVar17 == uVar11) goto LAB_00260691;
        puVar14 = puVar3 + uVar11;
      }
      do {
        *puVar10 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar10 = puVar10 + 1;
      } while (puVar14 != param_1);
    }
  }
  else {
    puVar9 = operator_new(uVar15 * 4);
    puVar9[lVar8] = *param_2;
    if (0 < lVar16) goto LAB_00260545;
LAB_002605ac:
    puVar10 = puVar9 + lVar8;
  }
LAB_00260691:
  puVar14 = puVar10 + 1;
  if ((long)puVar4 - (long)param_1 < 1) {
    puVar14 = (undefined4 *)((long)puVar14 + ((long)puVar4 - (long)param_1));
  }
  else if ((long)puVar4 - (long)param_1 != 0) {
    uVar12 = ((long)puVar4 - (long)param_1) - 4;
    if (0x1b < uVar12) {
      uVar12 = (uVar12 >> 2) + 1;
      uVar17 = uVar12 & 0x7ffffffffffffff8;
      uVar13 = (uVar17 - 8 >> 3) + 1;
      uVar11 = (ulong)((uint)uVar13 & 3);
      if (uVar17 - 8 < 0x18) {
        lVar8 = 0;
      }
      else {
        uVar13 = uVar13 & 0xfffffffffffffffc;
        lVar8 = 0;
        do {
          uVar5 = *(undefined8 *)((long)(param_1 + lVar8) + 8);
          uVar6 = *(undefined8 *)(param_1 + lVar8 + 4);
          uVar7 = *(undefined8 *)((long)(param_1 + lVar8 + 4) + 8);
          *(undefined8 *)(puVar10 + lVar8 + 1) = *(undefined8 *)(param_1 + lVar8);
          *(undefined8 *)((long)(puVar10 + lVar8 + 1) + 8) = uVar5;
          *(undefined8 *)(puVar10 + lVar8 + 5) = uVar6;
          *(undefined8 *)((long)(puVar10 + lVar8 + 5) + 8) = uVar7;
          uVar5 = *(undefined8 *)((long)(param_1 + lVar8 + 8) + 8);
          uVar6 = *(undefined8 *)(param_1 + lVar8 + 0xc);
          uVar7 = *(undefined8 *)((long)(param_1 + lVar8 + 0xc) + 8);
          *(undefined8 *)(puVar10 + lVar8 + 9) = *(undefined8 *)(param_1 + lVar8 + 8);
          *(undefined8 *)((long)(puVar10 + lVar8 + 9) + 8) = uVar5;
          *(undefined8 *)(puVar10 + lVar8 + 0xd) = uVar6;
          *(undefined8 *)((long)(puVar10 + lVar8 + 0xd) + 8) = uVar7;
          uVar5 = *(undefined8 *)((long)(param_1 + lVar8 + 0x10) + 8);
          uVar6 = *(undefined8 *)(param_1 + lVar8 + 0x14);
          uVar7 = *(undefined8 *)((long)(param_1 + lVar8 + 0x14) + 8);
          *(undefined8 *)(puVar10 + lVar8 + 0x11) = *(undefined8 *)(param_1 + lVar8 + 0x10);
          *(undefined8 *)((long)(puVar10 + lVar8 + 0x11) + 8) = uVar5;
          *(undefined8 *)(puVar10 + lVar8 + 0x15) = uVar6;
          *(undefined8 *)((long)(puVar10 + lVar8 + 0x15) + 8) = uVar7;
          uVar5 = *(undefined8 *)((long)(param_1 + lVar8 + 0x18) + 8);
          uVar6 = *(undefined8 *)(param_1 + lVar8 + 0x1c);
          uVar7 = *(undefined8 *)((long)(param_1 + lVar8 + 0x1c) + 8);
          *(undefined8 *)(puVar10 + lVar8 + 0x19) = *(undefined8 *)(param_1 + lVar8 + 0x18);
          *(undefined8 *)((long)(puVar10 + lVar8 + 0x19) + 8) = uVar5;
          *(undefined8 *)(puVar10 + lVar8 + 0x1d) = uVar6;
          *(undefined8 *)((long)(puVar10 + lVar8 + 0x1d) + 8) = uVar7;
          lVar8 = lVar8 + 0x20;
          uVar13 = uVar13 - 4;
        } while (uVar13 != 0);
      }
      if (uVar11 != 0) {
        lVar16 = 0;
        do {
          puVar2 = (undefined8 *)((long)param_1 + lVar16 + lVar8 * 4);
          uVar5 = puVar2[1];
          puVar1 = (undefined8 *)((long)param_1 + lVar16 + lVar8 * 4 + 0x10);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          puVar1 = (undefined8 *)((long)puVar10 + lVar16 + lVar8 * 4 + 4);
          *puVar1 = *puVar2;
          puVar1[1] = uVar5;
          puVar1 = (undefined8 *)((long)puVar10 + lVar16 + lVar8 * 4 + 0x14);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          lVar16 = lVar16 + 0x20;
        } while (uVar11 * 0x20 != lVar16);
      }
      puVar14 = puVar14 + uVar17;
      if (uVar12 == uVar17) goto LAB_002607c2;
      param_1 = param_1 + uVar17;
    }
    do {
      *puVar14 = *param_1;
      param_1 = param_1 + 1;
      puVar14 = puVar14 + 1;
    } while (param_1 != puVar4);
  }
LAB_002607c2:
  if (puVar3 != (undefined4 *)0x0) {
    operator_delete(puVar3);
  }
  *(undefined4 **)this = puVar9;
  *(undefined4 **)(this + 8) = puVar14;
  *(undefined4 **)(this + 0x10) = puVar9 + uVar15;
  return;
}


