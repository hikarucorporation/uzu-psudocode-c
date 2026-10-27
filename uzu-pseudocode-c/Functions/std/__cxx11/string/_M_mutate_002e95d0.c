// Function : _M_mutate
// Namespace: std:__cxx11:string
// Entry    : 002e95d0
// Prototype: undefined _M_mutate(string * this, ulong param_1, long param_2, undefined1 * param_3, size_t param_4)
// Body     : 002e95d0 - 002e9a24


/* std::__cxx11::string::_M_mutate(unsigned long, unsigned long, char const*, unsigned long) */

void __thiscall
std::__cxx11::string::_M_mutate
          (string *this,ulong param_1,long param_2,undefined1 *param_3,size_t param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  string *psVar12;
  long lVar13;
  ulong uVar14;
  string *psVar15;
  string *psVar16;
  ulong uVar17;
  
  lVar9 = *(long *)(this + 8);
  uVar5 = 0xf;
  if (*(string **)this != this + 0x10) {
    uVar5 = *(ulong *)(this + 0x10);
  }
  uVar17 = (param_4 - param_2) + lVar9;
  if ((long)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("basic_string::_M_create");
  }
  if (uVar5 < uVar17) {
    uVar5 = uVar5 * 2;
    if ((uVar17 < uVar5) && (uVar17 = 0x7fffffffffffffff, uVar5 < 0x7fffffffffffffff)) {
      uVar17 = uVar5;
    }
  }
  lVar11 = param_2 + param_1;
  puVar6 = operator_new(uVar17 + 1);
  if (param_1 != 0) {
    puVar1 = *(undefined1 **)this;
    if (param_1 == 1) {
      *puVar6 = *puVar1;
    }
    else {
      if ((param_1 < 8) || ((puVar6 < puVar1 + param_1 && (puVar1 < puVar6 + param_1)))) {
        uVar5 = 0;
      }
      else {
        if (param_1 < 0x20) {
          uVar8 = 0;
        }
        else {
          uVar5 = param_1 & 0xffffffffffffffe0;
          uVar8 = (uVar5 - 0x20 >> 5) + 1;
          uVar7 = (ulong)((uint)uVar8 & 3);
          if (uVar5 - 0x20 < 0x60) {
            lVar10 = 0;
          }
          else {
            uVar8 = uVar8 & 0xfffffffffffffffc;
            lVar10 = 0;
            do {
              uVar2 = *(undefined8 *)((long)(puVar1 + lVar10) + 8);
              uVar3 = *(undefined8 *)(puVar1 + lVar10 + 0x10);
              uVar4 = *(undefined8 *)((long)(puVar1 + lVar10 + 0x10) + 8);
              *(undefined8 *)(puVar6 + lVar10) = *(undefined8 *)(puVar1 + lVar10);
              *(undefined8 *)((long)(puVar6 + lVar10) + 8) = uVar2;
              *(undefined8 *)(puVar6 + lVar10 + 0x10) = uVar3;
              *(undefined8 *)((long)(puVar6 + lVar10 + 0x10) + 8) = uVar4;
              uVar2 = *(undefined8 *)((long)(puVar1 + lVar10 + 0x20) + 8);
              uVar3 = *(undefined8 *)(puVar1 + lVar10 + 0x30);
              uVar4 = *(undefined8 *)((long)(puVar1 + lVar10 + 0x30) + 8);
              *(undefined8 *)(puVar6 + lVar10 + 0x20) = *(undefined8 *)(puVar1 + lVar10 + 0x20);
              *(undefined8 *)((long)(puVar6 + lVar10 + 0x20) + 8) = uVar2;
              *(undefined8 *)(puVar6 + lVar10 + 0x30) = uVar3;
              *(undefined8 *)((long)(puVar6 + lVar10 + 0x30) + 8) = uVar4;
              uVar2 = *(undefined8 *)((long)(puVar1 + lVar10 + 0x40) + 8);
              uVar3 = *(undefined8 *)(puVar1 + lVar10 + 0x50);
              uVar4 = *(undefined8 *)((long)(puVar1 + lVar10 + 0x50) + 8);
              *(undefined8 *)(puVar6 + lVar10 + 0x40) = *(undefined8 *)(puVar1 + lVar10 + 0x40);
              *(undefined8 *)((long)(puVar6 + lVar10 + 0x40) + 8) = uVar2;
              *(undefined8 *)(puVar6 + lVar10 + 0x50) = uVar3;
              *(undefined8 *)((long)(puVar6 + lVar10 + 0x50) + 8) = uVar4;
              uVar2 = *(undefined8 *)((long)(puVar1 + lVar10 + 0x60) + 8);
              uVar3 = *(undefined8 *)(puVar1 + lVar10 + 0x70);
              uVar4 = *(undefined8 *)((long)(puVar1 + lVar10 + 0x70) + 8);
              *(undefined8 *)(puVar6 + lVar10 + 0x60) = *(undefined8 *)(puVar1 + lVar10 + 0x60);
              *(undefined8 *)((long)(puVar6 + lVar10 + 0x60) + 8) = uVar2;
              *(undefined8 *)(puVar6 + lVar10 + 0x70) = uVar3;
              *(undefined8 *)((long)(puVar6 + lVar10 + 0x70) + 8) = uVar4;
              lVar10 = lVar10 + 0x80;
              uVar8 = uVar8 - 4;
            } while (uVar8 != 0);
          }
          if (uVar7 != 0) {
            lVar13 = 0;
            do {
              uVar2 = *(undefined8 *)((long)(puVar1 + lVar13 + lVar10) + 8);
              uVar3 = *(undefined8 *)(puVar1 + lVar13 + lVar10 + 0x10);
              uVar4 = *(undefined8 *)((long)(puVar1 + lVar13 + lVar10 + 0x10) + 8);
              *(undefined8 *)(puVar6 + lVar13 + lVar10) = *(undefined8 *)(puVar1 + lVar13 + lVar10);
              *(undefined8 *)((long)(puVar6 + lVar13 + lVar10) + 8) = uVar2;
              *(undefined8 *)(puVar6 + lVar13 + lVar10 + 0x10) = uVar3;
              *(undefined8 *)((long)(puVar6 + lVar13 + lVar10 + 0x10) + 8) = uVar4;
              lVar13 = lVar13 + 0x20;
            } while (uVar7 * 0x20 != lVar13);
          }
          if (uVar5 == param_1) goto LAB_002e96ff;
          uVar8 = uVar5;
          if ((param_1 & 0x18) == 0) goto LAB_002e9698;
        }
        uVar5 = param_1 & 0xfffffffffffffff8;
        do {
          *(undefined8 *)(puVar6 + uVar8) = *(undefined8 *)(puVar1 + uVar8);
          uVar8 = uVar8 + 8;
        } while (uVar5 != uVar8);
        if (uVar5 == param_1) goto LAB_002e96ff;
      }
LAB_002e9698:
      uVar7 = ~uVar5;
      for (uVar8 = param_1 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        puVar6[uVar5] = puVar1[uVar5];
        uVar5 = uVar5 + 1;
      }
      if (2 < uVar7 + param_1) {
        do {
          puVar6[uVar5] = puVar1[uVar5];
          puVar6[uVar5 + 1] = puVar1[uVar5 + 1];
          puVar6[uVar5 + 2] = puVar1[uVar5 + 2];
          puVar6[uVar5 + 3] = puVar1[uVar5 + 3];
          uVar5 = uVar5 + 4;
        } while (param_1 != uVar5);
      }
    }
  }
LAB_002e96ff:
  uVar5 = lVar9 - lVar11;
  if ((param_3 != (undefined1 *)0x0) && (param_4 != 0)) {
    if (param_4 == 1) {
      puVar6[param_1] = *param_3;
    }
    else {
      memcpy(puVar6 + param_1,param_3,param_4);
    }
  }
  if (uVar5 == 0) {
    psVar12 = *(string **)this;
  }
  else {
    psVar15 = (string *)(puVar6 + param_4 + param_1);
    psVar12 = *(string **)this;
    psVar16 = psVar12 + param_2 + param_1;
    if (uVar5 == 1) {
      *psVar15 = *psVar16;
    }
    else {
      if ((uVar5 < 8) ||
         ((psVar15 < psVar12 + lVar9 &&
          (psVar16 < (string *)(puVar6 + ((lVar9 + param_4) - param_2)))))) {
        uVar8 = 0;
      }
      else {
        if (uVar5 < 0x20) {
          uVar7 = 0;
LAB_002e99c2:
          uVar8 = uVar5 & 0xfffffffffffffff8;
          do {
            *(undefined8 *)(psVar15 + uVar7) = *(undefined8 *)(psVar16 + uVar7);
            uVar7 = uVar7 + 8;
            if (uVar8 == uVar7) goto LAB_002e9a1e;
          } while( true );
        }
        uVar8 = uVar5 & 0xffffffffffffffe0;
        uVar14 = (uVar8 - 0x20 >> 5) + 1;
        uVar7 = (ulong)((uint)uVar14 & 3);
        if (uVar8 - 0x20 < 0x60) {
          lVar10 = 0;
        }
        else {
          uVar14 = uVar14 & 0xfffffffffffffffc;
          lVar9 = param_4 + param_1;
          lVar10 = 0;
          do {
            uVar2 = *(undefined8 *)(psVar12 + lVar10 + lVar11 + 8);
            uVar3 = *(undefined8 *)(psVar12 + lVar10 + lVar11 + 0x10);
            uVar4 = *(undefined8 *)(psVar12 + lVar10 + lVar11 + 0x10 + 8);
            *(undefined8 *)(puVar6 + lVar10 + lVar9) = *(undefined8 *)(psVar12 + lVar10 + lVar11);
            *(undefined8 *)((long)(puVar6 + lVar10 + lVar9) + 8) = uVar2;
            *(undefined8 *)(puVar6 + lVar10 + lVar9 + 0x10) = uVar3;
            *(undefined8 *)((long)(puVar6 + lVar10 + lVar9 + 0x10) + 8) = uVar4;
            uVar2 = *(undefined8 *)(psVar12 + lVar10 + lVar11 + 0x20 + 8);
            uVar3 = *(undefined8 *)(psVar12 + lVar10 + lVar11 + 0x30);
            uVar4 = *(undefined8 *)(psVar12 + lVar10 + lVar11 + 0x30 + 8);
            *(undefined8 *)(puVar6 + lVar10 + lVar9 + 0x20) =
                 *(undefined8 *)(psVar12 + lVar10 + lVar11 + 0x20);
            *(undefined8 *)((long)(puVar6 + lVar10 + lVar9 + 0x20) + 8) = uVar2;
            *(undefined8 *)(puVar6 + lVar10 + lVar9 + 0x30) = uVar3;
            *(undefined8 *)((long)(puVar6 + lVar10 + lVar9 + 0x30) + 8) = uVar4;
            uVar2 = *(undefined8 *)(psVar12 + lVar10 + lVar11 + 0x40 + 8);
            uVar3 = *(undefined8 *)(psVar12 + lVar10 + lVar11 + 0x50);
            uVar4 = *(undefined8 *)(psVar12 + lVar10 + lVar11 + 0x50 + 8);
            *(undefined8 *)(puVar6 + lVar10 + lVar9 + 0x40) =
                 *(undefined8 *)(psVar12 + lVar10 + lVar11 + 0x40);
            *(undefined8 *)((long)(puVar6 + lVar10 + lVar9 + 0x40) + 8) = uVar2;
            *(undefined8 *)(puVar6 + lVar10 + lVar9 + 0x50) = uVar3;
            *(undefined8 *)((long)(puVar6 + lVar10 + lVar9 + 0x50) + 8) = uVar4;
            uVar2 = *(undefined8 *)(psVar12 + lVar10 + lVar11 + 0x60 + 8);
            uVar3 = *(undefined8 *)(psVar12 + lVar10 + lVar11 + 0x70);
            uVar4 = *(undefined8 *)(psVar12 + lVar10 + lVar11 + 0x70 + 8);
            *(undefined8 *)(puVar6 + lVar10 + lVar9 + 0x60) =
                 *(undefined8 *)(psVar12 + lVar10 + lVar11 + 0x60);
            *(undefined8 *)((long)(puVar6 + lVar10 + lVar9 + 0x60) + 8) = uVar2;
            *(undefined8 *)(puVar6 + lVar10 + lVar9 + 0x70) = uVar3;
            *(undefined8 *)((long)(puVar6 + lVar10 + lVar9 + 0x70) + 8) = uVar4;
            lVar10 = lVar10 + 0x80;
            uVar14 = uVar14 - 4;
          } while (uVar14 != 0);
        }
        if (uVar7 != 0) {
          lVar13 = param_2 + lVar10 + param_1;
          lVar9 = param_4 + lVar10 + param_1;
          lVar11 = 0;
          do {
            uVar2 = *(undefined8 *)(psVar12 + lVar11 + lVar13 + 8);
            uVar3 = *(undefined8 *)(psVar12 + lVar11 + lVar13 + 0x10);
            uVar4 = *(undefined8 *)(psVar12 + lVar11 + lVar13 + 0x10 + 8);
            *(undefined8 *)(puVar6 + lVar11 + lVar9) = *(undefined8 *)(psVar12 + lVar11 + lVar13);
            *(undefined8 *)((long)(puVar6 + lVar11 + lVar9) + 8) = uVar2;
            *(undefined8 *)(puVar6 + lVar11 + lVar9 + 0x10) = uVar3;
            *(undefined8 *)((long)(puVar6 + lVar11 + lVar9 + 0x10) + 8) = uVar4;
            lVar11 = lVar11 + 0x20;
          } while (uVar7 * 0x20 != lVar11);
        }
        if (uVar5 == uVar8) goto LAB_002e99ef;
        uVar7 = uVar8;
        if ((uVar5 & 0x18) != 0) goto LAB_002e99c2;
      }
      do {
        psVar15[uVar8] = psVar16[uVar8];
        uVar8 = uVar8 + 1;
LAB_002e9a1e:
      } while (uVar5 != uVar8);
    }
  }
LAB_002e99ef:
  if (psVar12 != this + 0x10) {
    operator_delete(psVar12);
  }
  *(undefined1 **)this = puVar6;
  *(ulong *)(this + 0x10) = uVar17;
  return;
}


