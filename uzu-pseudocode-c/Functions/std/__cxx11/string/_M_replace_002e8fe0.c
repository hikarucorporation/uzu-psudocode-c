// Function : _M_replace
// Namespace: std:__cxx11:string
// Entry    : 002e8fe0
// Prototype: string * _M_replace(string * this, ulong param_1, long param_2, undefined1 * param_3, ulong param_4)
// Body     : 002e8fe0 - 002e95ce


/* std::__cxx11::string::_M_replace(unsigned long, unsigned long, char const*, unsigned long) */

string * __thiscall
std::__cxx11::string::_M_replace
          (string *this,ulong param_1,long param_2,undefined1 *param_3,ulong param_4)

{
  undefined1 *__dest;
  string *psVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  string *psVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  string *psVar16;
  ulong uVar17;
  
  lVar11 = *(long *)(this + 8);
  if ((param_2 - lVar11) + 0x7fffffffffffffffU < param_4) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("basic_string::_M_replace");
  }
  uVar17 = (param_4 - param_2) + lVar11;
  psVar1 = *(string **)this;
  uVar6 = 0xf;
  if (psVar1 != this + 0x10) {
    uVar6 = *(ulong *)(this + 0x10);
  }
  if (uVar6 < uVar17) {
    _M_mutate(this,param_1,param_2,param_3,param_4);
    goto LAB_002e95b1;
  }
  lVar14 = param_2 + param_1;
  puVar7 = operator_new(uVar17);
  puVar2 = *(undefined1 **)this;
  if (param_1 != 0) {
    if (param_1 == 1) {
      *puVar7 = *puVar2;
    }
    else {
      if ((param_1 < 8) || ((puVar7 < puVar2 + param_1 && (puVar2 < puVar7 + param_1)))) {
        uVar6 = 0;
      }
      else {
        if (param_1 < 0x20) {
          uVar9 = 0;
        }
        else {
          uVar6 = param_1 & 0xffffffffffffffe0;
          uVar9 = (uVar6 - 0x20 >> 5) + 1;
          uVar10 = (ulong)((uint)uVar9 & 3);
          if (uVar6 - 0x20 < 0x60) {
            lVar13 = 0;
          }
          else {
            uVar9 = uVar9 & 0xfffffffffffffffc;
            lVar13 = 0;
            do {
              uVar3 = *(undefined8 *)((long)(puVar2 + lVar13) + 8);
              uVar4 = *(undefined8 *)(puVar2 + lVar13 + 0x10);
              uVar5 = *(undefined8 *)((long)(puVar2 + lVar13 + 0x10) + 8);
              *(undefined8 *)(puVar7 + lVar13) = *(undefined8 *)(puVar2 + lVar13);
              *(undefined8 *)((long)(puVar7 + lVar13) + 8) = uVar3;
              *(undefined8 *)(puVar7 + lVar13 + 0x10) = uVar4;
              *(undefined8 *)((long)(puVar7 + lVar13 + 0x10) + 8) = uVar5;
              uVar3 = *(undefined8 *)((long)(puVar2 + lVar13 + 0x20) + 8);
              uVar4 = *(undefined8 *)(puVar2 + lVar13 + 0x30);
              uVar5 = *(undefined8 *)((long)(puVar2 + lVar13 + 0x30) + 8);
              *(undefined8 *)(puVar7 + lVar13 + 0x20) = *(undefined8 *)(puVar2 + lVar13 + 0x20);
              *(undefined8 *)((long)(puVar7 + lVar13 + 0x20) + 8) = uVar3;
              *(undefined8 *)(puVar7 + lVar13 + 0x30) = uVar4;
              *(undefined8 *)((long)(puVar7 + lVar13 + 0x30) + 8) = uVar5;
              uVar3 = *(undefined8 *)((long)(puVar2 + lVar13 + 0x40) + 8);
              uVar4 = *(undefined8 *)(puVar2 + lVar13 + 0x50);
              uVar5 = *(undefined8 *)((long)(puVar2 + lVar13 + 0x50) + 8);
              *(undefined8 *)(puVar7 + lVar13 + 0x40) = *(undefined8 *)(puVar2 + lVar13 + 0x40);
              *(undefined8 *)((long)(puVar7 + lVar13 + 0x40) + 8) = uVar3;
              *(undefined8 *)(puVar7 + lVar13 + 0x50) = uVar4;
              *(undefined8 *)((long)(puVar7 + lVar13 + 0x50) + 8) = uVar5;
              uVar3 = *(undefined8 *)((long)(puVar2 + lVar13 + 0x60) + 8);
              uVar4 = *(undefined8 *)(puVar2 + lVar13 + 0x70);
              uVar5 = *(undefined8 *)((long)(puVar2 + lVar13 + 0x70) + 8);
              *(undefined8 *)(puVar7 + lVar13 + 0x60) = *(undefined8 *)(puVar2 + lVar13 + 0x60);
              *(undefined8 *)((long)(puVar7 + lVar13 + 0x60) + 8) = uVar3;
              *(undefined8 *)(puVar7 + lVar13 + 0x70) = uVar4;
              *(undefined8 *)((long)(puVar7 + lVar13 + 0x70) + 8) = uVar5;
              lVar13 = lVar13 + 0x80;
              uVar9 = uVar9 - 4;
            } while (uVar9 != 0);
          }
          if (uVar10 != 0) {
            lVar12 = 0;
            do {
              uVar3 = *(undefined8 *)((long)(puVar2 + lVar12 + lVar13) + 8);
              uVar4 = *(undefined8 *)(puVar2 + lVar12 + lVar13 + 0x10);
              uVar5 = *(undefined8 *)((long)(puVar2 + lVar12 + lVar13 + 0x10) + 8);
              *(undefined8 *)(puVar7 + lVar12 + lVar13) = *(undefined8 *)(puVar2 + lVar12 + lVar13);
              *(undefined8 *)((long)(puVar7 + lVar12 + lVar13) + 8) = uVar3;
              *(undefined8 *)(puVar7 + lVar12 + lVar13 + 0x10) = uVar4;
              *(undefined8 *)((long)(puVar7 + lVar12 + lVar13 + 0x10) + 8) = uVar5;
              lVar12 = lVar12 + 0x20;
            } while (uVar10 * 0x20 != lVar12);
          }
          if (uVar6 == param_1) goto LAB_002e911f;
          uVar9 = uVar6;
          if ((param_1 & 0x18) == 0) goto LAB_002e90b3;
        }
        uVar6 = param_1 & 0xfffffffffffffff8;
        do {
          *(undefined8 *)(puVar7 + uVar9) = *(undefined8 *)(puVar2 + uVar9);
          uVar9 = uVar9 + 8;
        } while (uVar6 != uVar9);
        if (uVar6 == param_1) goto LAB_002e911f;
      }
LAB_002e90b3:
      uVar10 = ~uVar6;
      for (uVar9 = param_1 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        puVar7[uVar6] = puVar2[uVar6];
        uVar6 = uVar6 + 1;
      }
      if (2 < uVar10 + param_1) {
        do {
          puVar7[uVar6] = puVar2[uVar6];
          puVar7[uVar6 + 1] = puVar2[uVar6 + 1];
          puVar7[uVar6 + 2] = puVar2[uVar6 + 2];
          puVar7[uVar6 + 3] = puVar2[uVar6 + 3];
          uVar6 = uVar6 + 4;
        } while (param_1 != uVar6);
      }
    }
  }
LAB_002e911f:
  uVar6 = lVar11 - lVar14;
  __dest = puVar7 + param_1;
  if (param_4 != 0) {
    if (param_4 == 1) {
      *__dest = *param_3;
    }
    else {
      memcpy(__dest,param_3,param_4);
    }
  }
  if (uVar6 != 0) {
    psVar16 = (string *)(__dest + param_4);
    psVar8 = psVar1 + param_2 + param_1;
    if (uVar6 == 1) {
      *psVar16 = *psVar8;
    }
    else {
      if ((uVar6 < 8) || ((psVar16 < psVar1 + lVar11 && (psVar8 < (string *)(puVar7 + uVar17))))) {
        uVar9 = 0;
      }
      else {
        if (uVar6 < 0x20) {
          uVar10 = 0;
LAB_002e940b:
          uVar9 = uVar6 & 0xfffffffffffffff8;
          do {
            *(undefined8 *)(psVar16 + uVar10) = *(undefined8 *)(psVar8 + uVar10);
            uVar10 = uVar10 + 8;
            if (uVar9 == uVar10) goto LAB_002e958f;
          } while( true );
        }
        uVar9 = uVar6 & 0xffffffffffffffe0;
        uVar15 = (uVar9 - 0x20 >> 5) + 1;
        uVar10 = (ulong)((uint)uVar15 & 3);
        if (uVar9 - 0x20 < 0x60) {
          lVar13 = 0;
        }
        else {
          uVar15 = uVar15 & 0xfffffffffffffffc;
          lVar11 = param_1 + param_4;
          lVar13 = 0;
          do {
            uVar3 = *(undefined8 *)(psVar1 + lVar13 + lVar14 + 8);
            uVar4 = *(undefined8 *)(psVar1 + lVar13 + lVar14 + 0x10);
            uVar5 = *(undefined8 *)(psVar1 + lVar13 + lVar14 + 0x10 + 8);
            *(undefined8 *)(puVar7 + lVar13 + lVar11) = *(undefined8 *)(psVar1 + lVar13 + lVar14);
            *(undefined8 *)((long)(puVar7 + lVar13 + lVar11) + 8) = uVar3;
            *(undefined8 *)(puVar7 + lVar13 + lVar11 + 0x10) = uVar4;
            *(undefined8 *)((long)(puVar7 + lVar13 + lVar11 + 0x10) + 8) = uVar5;
            uVar3 = *(undefined8 *)(psVar1 + lVar13 + lVar14 + 0x20 + 8);
            uVar4 = *(undefined8 *)(psVar1 + lVar13 + lVar14 + 0x30);
            uVar5 = *(undefined8 *)(psVar1 + lVar13 + lVar14 + 0x30 + 8);
            *(undefined8 *)(puVar7 + lVar13 + lVar11 + 0x20) =
                 *(undefined8 *)(psVar1 + lVar13 + lVar14 + 0x20);
            *(undefined8 *)((long)(puVar7 + lVar13 + lVar11 + 0x20) + 8) = uVar3;
            *(undefined8 *)(puVar7 + lVar13 + lVar11 + 0x30) = uVar4;
            *(undefined8 *)((long)(puVar7 + lVar13 + lVar11 + 0x30) + 8) = uVar5;
            uVar3 = *(undefined8 *)(psVar1 + lVar13 + lVar14 + 0x40 + 8);
            uVar4 = *(undefined8 *)(psVar1 + lVar13 + lVar14 + 0x50);
            uVar5 = *(undefined8 *)(psVar1 + lVar13 + lVar14 + 0x50 + 8);
            *(undefined8 *)(puVar7 + lVar13 + lVar11 + 0x40) =
                 *(undefined8 *)(psVar1 + lVar13 + lVar14 + 0x40);
            *(undefined8 *)((long)(puVar7 + lVar13 + lVar11 + 0x40) + 8) = uVar3;
            *(undefined8 *)(puVar7 + lVar13 + lVar11 + 0x50) = uVar4;
            *(undefined8 *)((long)(puVar7 + lVar13 + lVar11 + 0x50) + 8) = uVar5;
            uVar3 = *(undefined8 *)(psVar1 + lVar13 + lVar14 + 0x60 + 8);
            uVar4 = *(undefined8 *)(psVar1 + lVar13 + lVar14 + 0x70);
            uVar5 = *(undefined8 *)(psVar1 + lVar13 + lVar14 + 0x70 + 8);
            *(undefined8 *)(puVar7 + lVar13 + lVar11 + 0x60) =
                 *(undefined8 *)(psVar1 + lVar13 + lVar14 + 0x60);
            *(undefined8 *)((long)(puVar7 + lVar13 + lVar11 + 0x60) + 8) = uVar3;
            *(undefined8 *)(puVar7 + lVar13 + lVar11 + 0x70) = uVar4;
            *(undefined8 *)((long)(puVar7 + lVar13 + lVar11 + 0x70) + 8) = uVar5;
            lVar13 = lVar13 + 0x80;
            uVar15 = uVar15 - 4;
          } while (uVar15 != 0);
        }
        if (uVar10 != 0) {
          lVar14 = param_2 + lVar13 + param_1;
          lVar11 = param_4 + lVar13 + param_1;
          lVar13 = 0;
          do {
            uVar3 = *(undefined8 *)(psVar1 + lVar13 + lVar14 + 8);
            uVar4 = *(undefined8 *)(psVar1 + lVar13 + lVar14 + 0x10);
            uVar5 = *(undefined8 *)(psVar1 + lVar13 + lVar14 + 0x10 + 8);
            *(undefined8 *)(puVar7 + lVar13 + lVar11) = *(undefined8 *)(psVar1 + lVar13 + lVar14);
            *(undefined8 *)((long)(puVar7 + lVar13 + lVar11) + 8) = uVar3;
            *(undefined8 *)(puVar7 + lVar13 + lVar11 + 0x10) = uVar4;
            *(undefined8 *)((long)(puVar7 + lVar13 + lVar11 + 0x10) + 8) = uVar5;
            lVar13 = lVar13 + 0x20;
          } while (uVar10 * 0x20 != lVar13);
        }
        if (uVar6 == uVar9) goto LAB_002e9443;
        uVar10 = uVar9;
        if ((uVar6 & 0x18) != 0) goto LAB_002e940b;
      }
      do {
        psVar16[uVar9] = psVar8[uVar9];
        uVar9 = uVar9 + 1;
LAB_002e958f:
      } while (uVar6 != uVar9);
    }
  }
LAB_002e9443:
  if (uVar17 != 0) {
    if (uVar17 == 1) {
      *puVar2 = *puVar7;
    }
    else {
      if ((uVar17 < 8) || ((puVar2 < puVar7 + uVar17 && (puVar7 < puVar2 + uVar17)))) {
        uVar6 = 0;
      }
      else {
        if (uVar17 < 0x20) {
          uVar9 = 0;
LAB_002e9566:
          uVar6 = uVar17 & 0xfffffffffffffff8;
          do {
            *(undefined8 *)(puVar2 + uVar9) = *(undefined8 *)(puVar7 + uVar9);
            uVar9 = uVar9 + 8;
            if (uVar6 == uVar9) goto LAB_002e95a4;
          } while( true );
        }
        uVar6 = uVar17 & 0xffffffffffffffe0;
        uVar10 = (uVar6 - 0x20 >> 5) + 1;
        uVar9 = (ulong)((uint)uVar10 & 3);
        if (uVar6 - 0x20 < 0x60) {
          lVar11 = 0;
        }
        else {
          uVar10 = uVar10 & 0xfffffffffffffffc;
          lVar11 = 0;
          do {
            uVar3 = *(undefined8 *)((long)(puVar7 + lVar11) + 8);
            uVar4 = *(undefined8 *)(puVar7 + lVar11 + 0x10);
            uVar5 = *(undefined8 *)((long)(puVar7 + lVar11 + 0x10) + 8);
            *(undefined8 *)(puVar2 + lVar11) = *(undefined8 *)(puVar7 + lVar11);
            *(undefined8 *)((long)(puVar2 + lVar11) + 8) = uVar3;
            *(undefined8 *)(puVar2 + lVar11 + 0x10) = uVar4;
            *(undefined8 *)((long)(puVar2 + lVar11 + 0x10) + 8) = uVar5;
            uVar3 = *(undefined8 *)((long)(puVar7 + lVar11 + 0x20) + 8);
            uVar4 = *(undefined8 *)(puVar7 + lVar11 + 0x30);
            uVar5 = *(undefined8 *)((long)(puVar7 + lVar11 + 0x30) + 8);
            *(undefined8 *)(puVar2 + lVar11 + 0x20) = *(undefined8 *)(puVar7 + lVar11 + 0x20);
            *(undefined8 *)((long)(puVar2 + lVar11 + 0x20) + 8) = uVar3;
            *(undefined8 *)(puVar2 + lVar11 + 0x30) = uVar4;
            *(undefined8 *)((long)(puVar2 + lVar11 + 0x30) + 8) = uVar5;
            uVar3 = *(undefined8 *)((long)(puVar7 + lVar11 + 0x40) + 8);
            uVar4 = *(undefined8 *)(puVar7 + lVar11 + 0x50);
            uVar5 = *(undefined8 *)((long)(puVar7 + lVar11 + 0x50) + 8);
            *(undefined8 *)(puVar2 + lVar11 + 0x40) = *(undefined8 *)(puVar7 + lVar11 + 0x40);
            *(undefined8 *)((long)(puVar2 + lVar11 + 0x40) + 8) = uVar3;
            *(undefined8 *)(puVar2 + lVar11 + 0x50) = uVar4;
            *(undefined8 *)((long)(puVar2 + lVar11 + 0x50) + 8) = uVar5;
            uVar3 = *(undefined8 *)((long)(puVar7 + lVar11 + 0x60) + 8);
            uVar4 = *(undefined8 *)(puVar7 + lVar11 + 0x70);
            uVar5 = *(undefined8 *)((long)(puVar7 + lVar11 + 0x70) + 8);
            *(undefined8 *)(puVar2 + lVar11 + 0x60) = *(undefined8 *)(puVar7 + lVar11 + 0x60);
            *(undefined8 *)((long)(puVar2 + lVar11 + 0x60) + 8) = uVar3;
            *(undefined8 *)(puVar2 + lVar11 + 0x70) = uVar4;
            *(undefined8 *)((long)(puVar2 + lVar11 + 0x70) + 8) = uVar5;
            lVar11 = lVar11 + 0x80;
            uVar10 = uVar10 - 4;
          } while (uVar10 != 0);
        }
        if (uVar9 != 0) {
          lVar14 = 0;
          do {
            uVar3 = *(undefined8 *)((long)(puVar7 + lVar14 + lVar11) + 8);
            uVar4 = *(undefined8 *)(puVar7 + lVar14 + lVar11 + 0x10);
            uVar5 = *(undefined8 *)((long)(puVar7 + lVar14 + lVar11 + 0x10) + 8);
            *(undefined8 *)(puVar2 + lVar14 + lVar11) = *(undefined8 *)(puVar7 + lVar14 + lVar11);
            *(undefined8 *)((long)(puVar2 + lVar14 + lVar11) + 8) = uVar3;
            *(undefined8 *)(puVar2 + lVar14 + lVar11 + 0x10) = uVar4;
            *(undefined8 *)((long)(puVar2 + lVar14 + lVar11 + 0x10) + 8) = uVar5;
            lVar14 = lVar14 + 0x20;
          } while (uVar9 * 0x20 != lVar14);
        }
        if (uVar17 == uVar6) goto LAB_002e95a9;
        uVar9 = uVar6;
        if ((uVar17 & 0x18) != 0) goto LAB_002e9566;
      }
      do {
        puVar2[uVar6] = puVar7[uVar6];
        uVar6 = uVar6 + 1;
LAB_002e95a4:
      } while (uVar17 != uVar6);
    }
  }
LAB_002e95a9:
  operator_delete(puVar7);
LAB_002e95b1:
  *(ulong *)(this + 8) = uVar17;
  *(undefined1 *)(*(long *)this + uVar17) = 0;
  return this;
}


