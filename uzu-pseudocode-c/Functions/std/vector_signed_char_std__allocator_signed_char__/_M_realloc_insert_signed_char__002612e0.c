// Function : _M_realloc_insert<signed_char>
// Namespace: std:vector_signed_char_std__allocator_signed_char__
// Entry    : 002612e0
// Prototype: void _M_realloc_insert<signed_char>(vector<signed_char,std::allocator<signed_char>> * this, undefined1 * param_1, undefined1 * param_2)
// Body     : 002612e0 - 002615ec


/* void std::vector<signed char, std::allocator<signed char> >::_M_realloc_insert<signed
   char>(__gnu_cxx::__normal_iterator<signed char*, std::vector<signed char, std::allocator<signed
   char> > >, signed char&&) */

void __thiscall
std::vector<signed_char,std::allocator<signed_char>>::_M_realloc_insert<signed_char>
          (vector<signed_char,std::allocator<signed_char>> *this,undefined1 *param_1,
          undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  puVar1 = *(undefined1 **)this;
  puVar2 = *(undefined1 **)(this + 8);
  uVar8 = (long)puVar2 - (long)puVar1;
  if (uVar8 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar10 = 1;
  if (uVar8 != 0) {
    uVar10 = uVar8;
  }
  uVar16 = uVar10 + uVar8;
  if ((long)uVar16 < 0) {
    uVar16 = 0x7fffffffffffffff;
  }
  if (CARRY8(uVar10,uVar8)) {
    uVar16 = 0x7fffffffffffffff;
  }
  puVar12 = param_1 + -(long)puVar1;
  if (uVar16 == 0) {
    puVar6 = (undefined1 *)0x0;
    *puVar12 = *param_2;
    if ((long)puVar12 < 1) goto LAB_002613aa;
LAB_00261357:
    puVar7 = puVar6;
    if (puVar1 != param_1) {
      puVar9 = puVar1;
      if ((undefined1 *)0x1f < puVar12) {
        puVar9 = (undefined1 *)((ulong)puVar12 & 0xffffffffffffffe0);
        uVar10 = ((ulong)(puVar9 + -0x20) >> 5) + 1;
        uVar8 = (ulong)((uint)uVar10 & 3);
        if (puVar9 + -0x20 < (undefined1 *)0x60) {
          lVar11 = 0;
        }
        else {
          uVar10 = uVar10 & 0xfffffffffffffffc;
          lVar11 = 0;
          do {
            uVar3 = *(undefined8 *)((long)(puVar1 + lVar11) + 8);
            uVar4 = *(undefined8 *)(puVar1 + lVar11 + 0x10);
            uVar5 = *(undefined8 *)((long)(puVar1 + lVar11 + 0x10) + 8);
            *(undefined8 *)(puVar6 + lVar11) = *(undefined8 *)(puVar1 + lVar11);
            *(undefined8 *)((long)(puVar6 + lVar11) + 8) = uVar3;
            *(undefined8 *)(puVar6 + lVar11 + 0x10) = uVar4;
            *(undefined8 *)((long)(puVar6 + lVar11 + 0x10) + 8) = uVar5;
            uVar3 = *(undefined8 *)((long)(puVar1 + lVar11 + 0x20) + 8);
            uVar4 = *(undefined8 *)(puVar1 + lVar11 + 0x30);
            uVar5 = *(undefined8 *)((long)(puVar1 + lVar11 + 0x30) + 8);
            *(undefined8 *)(puVar6 + lVar11 + 0x20) = *(undefined8 *)(puVar1 + lVar11 + 0x20);
            *(undefined8 *)((long)(puVar6 + lVar11 + 0x20) + 8) = uVar3;
            *(undefined8 *)(puVar6 + lVar11 + 0x30) = uVar4;
            *(undefined8 *)((long)(puVar6 + lVar11 + 0x30) + 8) = uVar5;
            uVar3 = *(undefined8 *)((long)(puVar1 + lVar11 + 0x40) + 8);
            uVar4 = *(undefined8 *)(puVar1 + lVar11 + 0x50);
            uVar5 = *(undefined8 *)((long)(puVar1 + lVar11 + 0x50) + 8);
            *(undefined8 *)(puVar6 + lVar11 + 0x40) = *(undefined8 *)(puVar1 + lVar11 + 0x40);
            *(undefined8 *)((long)(puVar6 + lVar11 + 0x40) + 8) = uVar3;
            *(undefined8 *)(puVar6 + lVar11 + 0x50) = uVar4;
            *(undefined8 *)((long)(puVar6 + lVar11 + 0x50) + 8) = uVar5;
            uVar3 = *(undefined8 *)((long)(puVar1 + lVar11 + 0x60) + 8);
            uVar4 = *(undefined8 *)(puVar1 + lVar11 + 0x70);
            uVar5 = *(undefined8 *)((long)(puVar1 + lVar11 + 0x70) + 8);
            *(undefined8 *)(puVar6 + lVar11 + 0x60) = *(undefined8 *)(puVar1 + lVar11 + 0x60);
            *(undefined8 *)((long)(puVar6 + lVar11 + 0x60) + 8) = uVar3;
            *(undefined8 *)(puVar6 + lVar11 + 0x70) = uVar4;
            *(undefined8 *)((long)(puVar6 + lVar11 + 0x70) + 8) = uVar5;
            lVar11 = lVar11 + 0x80;
            uVar10 = uVar10 - 4;
          } while (uVar10 != 0);
        }
        if (uVar8 != 0) {
          lVar13 = 0;
          do {
            uVar3 = *(undefined8 *)((long)(puVar1 + lVar13 + lVar11) + 8);
            uVar4 = *(undefined8 *)(puVar1 + lVar13 + lVar11 + 0x10);
            uVar5 = *(undefined8 *)((long)(puVar1 + lVar13 + lVar11 + 0x10) + 8);
            *(undefined8 *)(puVar6 + lVar13 + lVar11) = *(undefined8 *)(puVar1 + lVar13 + lVar11);
            *(undefined8 *)((long)(puVar6 + lVar13 + lVar11) + 8) = uVar3;
            *(undefined8 *)(puVar6 + lVar13 + lVar11 + 0x10) = uVar4;
            *(undefined8 *)((long)(puVar6 + lVar13 + lVar11 + 0x10) + 8) = uVar5;
            lVar13 = lVar13 + 0x20;
          } while (uVar8 * 0x20 != lVar13);
        }
        puVar7 = puVar9 + (long)puVar6;
        if (puVar12 == puVar9) goto LAB_00261492;
        puVar9 = puVar9 + (long)puVar1;
      }
      do {
        *puVar7 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar7 = puVar7 + 1;
      } while (puVar9 != param_1);
    }
  }
  else {
    puVar6 = operator_new(uVar16);
    puVar6[(long)puVar12] = *param_2;
    if (0 < (long)puVar12) goto LAB_00261357;
LAB_002613aa:
    puVar7 = puVar12 + (long)puVar6;
  }
LAB_00261492:
  puVar12 = puVar7 + 1;
  uVar8 = (long)puVar2 - (long)param_1;
  if ((long)uVar8 < 1) {
    puVar12 = puVar12 + uVar8;
  }
  else if (puVar2 != param_1) {
    if (0x1f < uVar8) {
      uVar15 = uVar8 & 0xffffffffffffffe0;
      uVar14 = (uVar15 - 0x20 >> 5) + 1;
      uVar10 = (ulong)((uint)uVar14 & 3);
      if (uVar15 - 0x20 < 0x60) {
        lVar11 = 0;
      }
      else {
        uVar14 = uVar14 & 0xfffffffffffffffc;
        lVar11 = 0;
        do {
          uVar3 = *(undefined8 *)((long)(param_1 + lVar11) + 8);
          uVar4 = *(undefined8 *)(param_1 + lVar11 + 0x10);
          uVar5 = *(undefined8 *)((long)(param_1 + lVar11 + 0x10) + 8);
          *(undefined8 *)(puVar7 + lVar11 + 1) = *(undefined8 *)(param_1 + lVar11);
          *(undefined8 *)((long)(puVar7 + lVar11 + 1) + 8) = uVar3;
          *(undefined8 *)(puVar7 + lVar11 + 0x11) = uVar4;
          *(undefined8 *)((long)(puVar7 + lVar11 + 0x11) + 8) = uVar5;
          uVar3 = *(undefined8 *)((long)(param_1 + lVar11 + 0x20) + 8);
          uVar4 = *(undefined8 *)(param_1 + lVar11 + 0x30);
          uVar5 = *(undefined8 *)((long)(param_1 + lVar11 + 0x30) + 8);
          *(undefined8 *)(puVar7 + lVar11 + 0x21) = *(undefined8 *)(param_1 + lVar11 + 0x20);
          *(undefined8 *)((long)(puVar7 + lVar11 + 0x21) + 8) = uVar3;
          *(undefined8 *)(puVar7 + lVar11 + 0x31) = uVar4;
          *(undefined8 *)((long)(puVar7 + lVar11 + 0x31) + 8) = uVar5;
          uVar3 = *(undefined8 *)((long)(param_1 + lVar11 + 0x40) + 8);
          uVar4 = *(undefined8 *)(param_1 + lVar11 + 0x50);
          uVar5 = *(undefined8 *)((long)(param_1 + lVar11 + 0x50) + 8);
          *(undefined8 *)(puVar7 + lVar11 + 0x41) = *(undefined8 *)(param_1 + lVar11 + 0x40);
          *(undefined8 *)((long)(puVar7 + lVar11 + 0x41) + 8) = uVar3;
          *(undefined8 *)(puVar7 + lVar11 + 0x51) = uVar4;
          *(undefined8 *)((long)(puVar7 + lVar11 + 0x51) + 8) = uVar5;
          uVar3 = *(undefined8 *)((long)(param_1 + lVar11 + 0x60) + 8);
          uVar4 = *(undefined8 *)(param_1 + lVar11 + 0x70);
          uVar5 = *(undefined8 *)((long)(param_1 + lVar11 + 0x70) + 8);
          *(undefined8 *)(puVar7 + lVar11 + 0x61) = *(undefined8 *)(param_1 + lVar11 + 0x60);
          *(undefined8 *)((long)(puVar7 + lVar11 + 0x61) + 8) = uVar3;
          *(undefined8 *)(puVar7 + lVar11 + 0x71) = uVar4;
          *(undefined8 *)((long)(puVar7 + lVar11 + 0x71) + 8) = uVar5;
          lVar11 = lVar11 + 0x80;
          uVar14 = uVar14 - 4;
        } while (uVar14 != 0);
      }
      if (uVar10 != 0) {
        lVar13 = 0;
        do {
          uVar3 = *(undefined8 *)((long)(param_1 + lVar13 + lVar11) + 8);
          uVar4 = *(undefined8 *)(param_1 + lVar13 + lVar11 + 0x10);
          uVar5 = *(undefined8 *)((long)(param_1 + lVar13 + lVar11 + 0x10) + 8);
          *(undefined8 *)(puVar7 + lVar13 + lVar11 + 1) = *(undefined8 *)(param_1 + lVar13 + lVar11)
          ;
          *(undefined8 *)((long)(puVar7 + lVar13 + lVar11 + 1) + 8) = uVar3;
          *(undefined8 *)(puVar7 + lVar13 + lVar11 + 0x11) = uVar4;
          *(undefined8 *)((long)(puVar7 + lVar13 + lVar11 + 0x11) + 8) = uVar5;
          lVar13 = lVar13 + 0x20;
        } while (uVar10 * 0x20 != lVar13);
      }
      puVar12 = puVar12 + uVar15;
      if (uVar8 == uVar15) goto LAB_002615b3;
      param_1 = param_1 + uVar15;
    }
    do {
      *puVar12 = *param_1;
      param_1 = param_1 + 1;
      puVar12 = puVar12 + 1;
    } while (param_1 != puVar2);
  }
LAB_002615b3:
  if (puVar1 != (undefined1 *)0x0) {
    operator_delete(puVar1);
  }
  *(undefined1 **)this = puVar6;
  *(undefined1 **)(this + 8) = puVar12;
  *(undefined1 **)(this + 0x10) = puVar6 + uVar16;
  return;
}


