// Function : _tr_flush_block
// Namespace: juce:zlibNamespace
// Entry    : 004b74e0
// Prototype: undefined _tr_flush_block(long * param_1, void * param_2, size_t param_3, uint param_4)
// Body     : 004b74e0 - 004b80e7


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::zlibNamespace::_tr_flush_block(juce::zlibNamespace::internal_state*, char*, unsigned long,
   int) */

void __cdecl
juce::zlibNamespace::_tr_flush_block(long *param_1,void *param_2,size_t param_3,uint param_4)

{
  short *psVar1;
  long lVar2;
  undefined1 uVar3;
  ushort uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  byte bVar8;
  undefined4 uVar9;
  int iVar10;
  ulong uVar11;
  undefined1 *puVar12;
  uint uVar13;
  undefined1 *puVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  
  if (*(int *)((long)param_1 + 0xc4) < 1) {
    iVar15 = 0;
    uVar11 = param_3 + 5;
LAB_004b7a3a:
    uVar6 = uVar11;
    uVar11 = uVar6;
    if (param_2 == (void *)0x0) goto LAB_004b7a61;
LAB_004b7a42:
    if (uVar6 < param_3 + 4) goto LAB_004b7a61;
    _tr_stored_block((long)param_1,param_2,param_3,param_4);
  }
  else {
    if (*(int *)(*param_1 + 0x58) == 2) {
      uVar9 = 0;
      if ((((((((*(short *)((long)param_1 + 0xd4) == 0) && ((short)param_1[0x1b] == 0)) &&
              (*(short *)((long)param_1 + 0xdc) == 0)) &&
             (((short)param_1[0x1c] == 0 && (*(short *)((long)param_1 + 0xe4) == 0)))) &&
            ((short)param_1[0x1d] == 0)) &&
           (((*(short *)((long)param_1 + 0xec) == 0 && (*(short *)((long)param_1 + 0x10c) == 0)) &&
            (((short)param_1[0x22] == 0 &&
             (((*(short *)((long)param_1 + 0x114) == 0 && ((short)param_1[0x23] == 0)) &&
              (*(short *)((long)param_1 + 0x11c) == 0)))))))) &&
          ((((short)param_1[0x24] == 0 && (*(short *)((long)param_1 + 0x124) == 0)) &&
           (((short)param_1[0x25] == 0 &&
            (((*(short *)((long)param_1 + 300) == 0 && ((short)param_1[0x26] == 0)) &&
             ((*(short *)((long)param_1 + 0x134) == 0 &&
              ((((short)param_1[0x27] == 0 && (*(short *)((long)param_1 + 0x144) == 0)) &&
               ((short)param_1[0x29] == 0)))))))))))) &&
         ((*(short *)((long)param_1 + 0x14c) == 0 && ((short)param_1[0x2a] == 0)))) {
        if (((short)param_1[0x1f] == 0) &&
           ((*(short *)((long)param_1 + 0xfc) == 0 && ((short)param_1[0x21] == 0)))) {
          lVar7 = 0;
          uVar9 = 0;
          do {
            if ((((*(short *)((long)param_1 + lVar7 * 4 + 0x154) != 0) ||
                 (*(short *)((long)param_1 + lVar7 * 4 + 0x158) != 0)) ||
                (*(short *)((long)param_1 + lVar7 * 4 + 0x15c) != 0)) ||
               (*(short *)((long)param_1 + lVar7 * 4 + 0x160) != 0)) goto LAB_004b7654;
            lVar7 = lVar7 + 4;
          } while (lVar7 != 0xe0);
        }
        else {
LAB_004b7654:
          uVar9 = 1;
        }
      }
      *(undefined4 *)(*param_1 + 0x58) = uVar9;
    }
    build_tree((long)param_1,param_1 + 0x16b);
    build_tree((long)param_1,param_1 + 0x16e);
    lVar7 = param_1[0x16c];
    uVar4 = *(ushort *)((long)param_1 + 0xd6);
    uVar13 = (int)lVar7 + 1;
    *(undefined2 *)((long)param_1 + (long)(int)uVar13 * 4 + 0xd6) = 0xffff;
    if (-1 < (int)lVar7) {
      uVar16 = 7;
      if (uVar4 == 0) {
        uVar16 = 0x8a;
      }
      iVar17 = 4 - (uint)(uVar4 == 0);
      uVar5 = 0xffffffff;
      uVar11 = 0;
      iVar15 = 0;
      do {
        uVar6 = (ulong)uVar4;
        uVar18 = (uint)uVar4;
        uVar4 = *(ushort *)((long)param_1 + uVar11 * 4 + 0xda);
        uVar11 = uVar11 + 1;
        iVar10 = iVar15 + 1;
        if (((int)uVar16 <= iVar10) || (uVar18 != uVar4)) {
          if (iVar10 < iVar17) {
            psVar1 = (short *)((long)param_1 + uVar6 * 4 + 0xabc);
            *psVar1 = *psVar1 + (short)iVar10;
          }
          else if (uVar18 == 0) {
            if (iVar15 < 10) {
              *(short *)(param_1 + 0x160) = (short)param_1[0x160] + 1;
            }
            else {
              *(short *)((long)param_1 + 0xb04) = *(short *)((long)param_1 + 0xb04) + 1;
            }
          }
          else {
            if (uVar18 != uVar5) {
              psVar1 = (short *)((long)param_1 + uVar6 * 4 + 0xabc);
              *psVar1 = *psVar1 + 1;
            }
            *(short *)((long)param_1 + 0xafc) = *(short *)((long)param_1 + 0xafc) + 1;
          }
          uVar5 = uVar18;
          if (uVar4 == 0) {
            iVar10 = 0;
            iVar17 = 3;
            uVar16 = 0x8a;
          }
          else {
            iVar10 = 0;
            iVar17 = 4 - (uint)(uVar18 == uVar4);
            uVar16 = uVar18 == uVar4 ^ 7;
          }
        }
        iVar15 = iVar10;
      } while (uVar13 != uVar11);
    }
    lVar7 = param_1[0x16f];
    uVar4 = *(ushort *)((long)param_1 + 0x9ca);
    uVar13 = (int)lVar7 + 1;
    *(undefined2 *)((long)param_1 + (long)(int)uVar13 * 4 + 0x9ca) = 0xffff;
    if (-1 < (int)lVar7) {
      uVar16 = 7;
      if (uVar4 == 0) {
        uVar16 = 0x8a;
      }
      iVar17 = 4 - (uint)(uVar4 == 0);
      uVar5 = 0xffffffff;
      uVar11 = 0;
      iVar15 = 0;
      do {
        uVar6 = (ulong)uVar4;
        uVar18 = (uint)uVar4;
        uVar4 = *(ushort *)((long)param_1 + uVar11 * 4 + 0x9ce);
        uVar11 = uVar11 + 1;
        iVar10 = iVar15 + 1;
        if (((int)uVar16 <= iVar10) || (uVar18 != uVar4)) {
          if (iVar10 < iVar17) {
            psVar1 = (short *)((long)param_1 + uVar6 * 4 + 0xabc);
            *psVar1 = *psVar1 + (short)iVar10;
          }
          else if (uVar18 == 0) {
            if (iVar15 < 10) {
              *(short *)(param_1 + 0x160) = (short)param_1[0x160] + 1;
            }
            else {
              *(short *)((long)param_1 + 0xb04) = *(short *)((long)param_1 + 0xb04) + 1;
            }
          }
          else {
            if (uVar18 != uVar5) {
              psVar1 = (short *)((long)param_1 + uVar6 * 4 + 0xabc);
              *psVar1 = *psVar1 + 1;
            }
            *(short *)((long)param_1 + 0xafc) = *(short *)((long)param_1 + 0xafc) + 1;
          }
          uVar5 = uVar18;
          if (uVar4 == 0) {
            iVar10 = 0;
            iVar17 = 3;
            uVar16 = 0x8a;
          }
          else {
            iVar10 = 0;
            iVar17 = 4 - (uint)(uVar18 == uVar4);
            uVar16 = uVar18 == uVar4 ^ 7;
          }
        }
        iVar15 = iVar10;
      } while (uVar13 != uVar11);
    }
    build_tree((long)param_1,param_1 + 0x171);
    iVar15 = 0x12;
    if ((((((*(short *)((long)param_1 + 0xafa) == 0) &&
           (iVar15 = 0x11, *(short *)((long)param_1 + 0xac2) == 0)) &&
          (iVar15 = 0x10, *(short *)((long)param_1 + 0xaf6) == 0)) &&
         (((iVar15 = 0xf, *(short *)((long)param_1 + 0xac6) == 0 &&
           (iVar15 = 0xe, *(short *)((long)param_1 + 0xaf2) == 0)) &&
          ((iVar15 = 0xd, *(short *)((long)param_1 + 0xaca) == 0 &&
           ((iVar15 = 0xc, *(short *)((long)param_1 + 0xaee) == 0 &&
            (iVar15 = 0xb, *(short *)((long)param_1 + 0xace) == 0)))))))) &&
        (iVar15 = 10, *(short *)((long)param_1 + 0xaea) == 0)) &&
       ((((iVar15 = 9, *(short *)((long)param_1 + 0xad2) == 0 &&
          (iVar15 = 8, *(short *)((long)param_1 + 0xae6) == 0)) &&
         (iVar15 = 7, *(short *)((long)param_1 + 0xad6) == 0)) &&
        (((iVar15 = 6, *(short *)((long)param_1 + 0xae2) == 0 &&
          (iVar15 = 5, *(short *)((long)param_1 + 0xada) == 0)) &&
         (iVar15 = 4, *(short *)((long)param_1 + 0xade) == 0)))))) {
      iVar15 = 3 - (uint)(*(short *)((long)param_1 + 0xabe) == 0);
    }
    lVar7 = param_1[0x2e3];
    param_1[0x2e3] = (ulong)(uint)(iVar15 * 3) + lVar7 + 0x11;
    uVar6 = (ulong)(uint)(iVar15 * 3) + lVar7 + 0x1b >> 3;
    uVar11 = param_1[0x2e4] + 10U >> 3;
    if ((uVar11 <= uVar6) || ((int)param_1[0x19] == 4)) goto LAB_004b7a3a;
    if (param_2 != (void *)0x0) goto LAB_004b7a42;
LAB_004b7a61:
    iVar17 = *(int *)((long)param_1 + 0x1734);
    bVar8 = (byte)iVar17;
    if (uVar11 == uVar6) {
      uVar13 = param_4 + 2;
      if (iVar17 < 0xe) {
        *(ushort *)(param_1 + 0x2e6) =
             *(ushort *)(param_1 + 0x2e6) | (ushort)(uVar13 << (bVar8 & 0x1f));
        iVar17 = iVar17 + 3;
      }
      else {
        uVar4 = (ushort)(uVar13 << (bVar8 & 0x1f)) | *(ushort *)(param_1 + 0x2e6);
        *(ushort *)(param_1 + 0x2e6) = uVar4;
        lVar7 = param_1[5];
        param_1[5] = lVar7 + 1;
        *(char *)(param_1[2] + lVar7) = (char)uVar4;
        lVar7 = param_1[5];
        param_1[5] = lVar7 + 1;
        *(undefined1 *)(param_1[2] + lVar7) = *(undefined1 *)((long)param_1 + 0x1731);
        *(short *)(param_1 + 0x2e6) =
             (short)((uVar13 & 0xffff) >> (0x10U - (char)*(int *)((long)param_1 + 0x1734) & 0x1f));
        iVar17 = *(int *)((long)param_1 + 0x1734) + -0xd;
      }
      *(int *)((long)param_1 + 0x1734) = iVar17;
      puVar14 = static_ltree;
      puVar12 = static_dtree;
    }
    else {
      uVar13 = param_4 + 4;
      if (iVar17 < 0xe) {
        uVar13 = (uint)(ushort)((ushort)(uVar13 << (bVar8 & 0x1f)) | *(ushort *)(param_1 + 0x2e6));
        iVar17 = iVar17 + 3;
      }
      else {
        uVar4 = (ushort)(uVar13 << (bVar8 & 0x1f)) | *(ushort *)(param_1 + 0x2e6);
        *(ushort *)(param_1 + 0x2e6) = uVar4;
        lVar7 = param_1[5];
        param_1[5] = lVar7 + 1;
        *(char *)(param_1[2] + lVar7) = (char)uVar4;
        lVar7 = param_1[5];
        param_1[5] = lVar7 + 1;
        *(undefined1 *)(param_1[2] + lVar7) = *(undefined1 *)((long)param_1 + 0x1731);
        uVar13 = (uVar13 & 0xffff) >> (0x10U - (char)*(int *)((long)param_1 + 0x1734) & 0x1f);
        iVar17 = *(int *)((long)param_1 + 0x1734) + -0xd;
      }
      *(int *)((long)param_1 + 0x1734) = iVar17;
      lVar7 = param_1[0x16c];
      uVar5 = *(uint *)(param_1 + 0x16f);
      uVar16 = (int)lVar7 + 0xff00;
      if (iVar17 < 0xc) {
        uVar13 = uVar13 | uVar16 << ((byte)iVar17 & 0x1f);
        iVar17 = iVar17 + 5;
        *(int *)((long)param_1 + 0x1734) = iVar17;
        if (0xb < iVar17) goto LAB_004b7c2f;
LAB_004b7bff:
        uVar13 = uVar13 | uVar5 + 0x10000 << ((byte)iVar17 & 0x1f);
        iVar17 = iVar17 + 5;
      }
      else {
        uVar13 = uVar13 | uVar16 << ((byte)iVar17 & 0x1f);
        *(short *)(param_1 + 0x2e6) = (short)uVar13;
        lVar2 = param_1[5];
        param_1[5] = lVar2 + 1;
        *(char *)(param_1[2] + lVar2) = (char)uVar13;
        lVar2 = param_1[5];
        param_1[5] = lVar2 + 1;
        *(undefined1 *)(param_1[2] + lVar2) = *(undefined1 *)((long)param_1 + 0x1731);
        uVar13 = (uVar16 & 0xffff) >> (0x10U - (char)*(int *)((long)param_1 + 0x1734) & 0x1f);
        iVar17 = *(int *)((long)param_1 + 0x1734) + -0xb;
        *(int *)((long)param_1 + 0x1734) = iVar17;
        if (iVar17 < 0xc) goto LAB_004b7bff;
LAB_004b7c2f:
        uVar13 = uVar13 | uVar5 + 0x10000 << ((byte)iVar17 & 0x1f);
        *(short *)(param_1 + 0x2e6) = (short)uVar13;
        lVar2 = param_1[5];
        param_1[5] = lVar2 + 1;
        *(char *)(param_1[2] + lVar2) = (char)uVar13;
        lVar2 = param_1[5];
        param_1[5] = lVar2 + 1;
        *(undefined1 *)(param_1[2] + lVar2) = *(undefined1 *)((long)param_1 + 0x1731);
        uVar13 = (uVar5 & 0xffff) >> (0x10U - (char)*(int *)((long)param_1 + 0x1734) & 0x1f);
        iVar17 = *(int *)((long)param_1 + 0x1734) + -0xb;
      }
      *(int *)((long)param_1 + 0x1734) = iVar17;
      uVar16 = iVar15 + 0xfffd;
      if (iVar17 < 0xd) {
        uVar13 = uVar13 | uVar16 << ((byte)iVar17 & 0x1f);
        iVar17 = iVar17 + 4;
      }
      else {
        uVar13 = uVar13 | uVar16 << ((byte)iVar17 & 0x1f);
        *(short *)(param_1 + 0x2e6) = (short)uVar13;
        lVar2 = param_1[5];
        param_1[5] = lVar2 + 1;
        *(char *)(param_1[2] + lVar2) = (char)uVar13;
        lVar2 = param_1[5];
        param_1[5] = lVar2 + 1;
        *(undefined1 *)(param_1[2] + lVar2) = *(undefined1 *)((long)param_1 + 0x1731);
        uVar13 = (uVar16 & 0xffff) >> (0x10U - (char)*(int *)((long)param_1 + 0x1734) & 0x1f);
        iVar17 = *(int *)((long)param_1 + 0x1734) + -0xc;
      }
      *(int *)((long)param_1 + 0x1734) = iVar17;
      uVar11 = 0;
      do {
        while( true ) {
          uVar4 = *(ushort *)((long)param_1 + (ulong)(byte)(&bl_order)[uVar11] * 4 + 0xabe);
          uVar13 = uVar13 | (uint)uVar4 << ((byte)iVar17 & 0x1f);
          *(short *)(param_1 + 0x2e6) = (short)uVar13;
          if (iVar17 < 0xe) break;
          lVar2 = param_1[5];
          param_1[5] = lVar2 + 1;
          *(char *)(param_1[2] + lVar2) = (char)uVar13;
          lVar2 = param_1[5];
          param_1[5] = lVar2 + 1;
          *(undefined1 *)(param_1[2] + lVar2) = *(undefined1 *)((long)param_1 + 0x1731);
          uVar4 = uVar4 >> (0x10U - (char)*(int *)((long)param_1 + 0x1734) & 0x1f);
          *(ushort *)(param_1 + 0x2e6) = uVar4;
          iVar17 = *(int *)((long)param_1 + 0x1734) + -0xd;
          uVar13 = (uint)uVar4;
          *(int *)((long)param_1 + 0x1734) = iVar17;
          uVar11 = uVar11 + 1;
          if (iVar15 + 1 == uVar11) goto LAB_004b7dbd;
        }
        iVar17 = iVar17 + 3;
        *(int *)((long)param_1 + 0x1734) = iVar17;
        uVar11 = uVar11 + 1;
      } while (iVar15 + 1 != uVar11);
LAB_004b7dbd:
      puVar14 = (undefined1 *)((long)param_1 + 0xd4);
      send_tree((long)param_1,(long)puVar14,(int)lVar7);
      puVar12 = (undefined1 *)(param_1 + 0x139);
      send_tree((long)param_1,(long)puVar12,uVar5);
    }
    compress_block((long)param_1,(long)puVar14,(long)puVar12);
  }
  lVar7 = 0x3c;
  while( true ) {
    *(undefined2 *)((long)param_1 + lVar7 * 4 + -0x1c) = 0;
    *(undefined2 *)((long)param_1 + lVar7 * 4 + -0x18) = 0;
    *(undefined2 *)((long)param_1 + lVar7 * 4 + -0x14) = 0;
    *(undefined2 *)((long)param_1 + lVar7 * 4 + -0x10) = 0;
    *(undefined2 *)((long)param_1 + lVar7 * 4 + -0xc) = 0;
    *(undefined2 *)((long)param_1 + lVar7 * 4 + -8) = 0;
    if (lVar7 == 0x154) break;
    *(undefined2 *)((long)param_1 + lVar7 * 4 + -4) = 0;
    *(undefined2 *)((long)param_1 + lVar7 * 4) = 0;
    lVar7 = lVar7 + 8;
  }
  *(undefined2 *)(param_1 + 0x139) = 0;
  *(undefined2 *)((long)param_1 + 0x9cc) = 0;
  *(undefined2 *)(param_1 + 0x13a) = 0;
  *(undefined2 *)((long)param_1 + 0x9d4) = 0;
  *(undefined2 *)(param_1 + 0x13b) = 0;
  *(undefined2 *)((long)param_1 + 0x9dc) = 0;
  *(undefined2 *)(param_1 + 0x13c) = 0;
  *(undefined2 *)((long)param_1 + 0x9e4) = 0;
  *(undefined2 *)(param_1 + 0x13d) = 0;
  *(undefined2 *)((long)param_1 + 0x9ec) = 0;
  *(undefined2 *)(param_1 + 0x13e) = 0;
  *(undefined2 *)((long)param_1 + 0x9f4) = 0;
  *(undefined2 *)(param_1 + 0x13f) = 0;
  *(undefined2 *)((long)param_1 + 0x9fc) = 0;
  *(undefined2 *)(param_1 + 0x140) = 0;
  *(undefined2 *)((long)param_1 + 0xa04) = 0;
  *(undefined2 *)(param_1 + 0x141) = 0;
  *(undefined2 *)((long)param_1 + 0xa0c) = 0;
  *(undefined2 *)(param_1 + 0x142) = 0;
  *(undefined2 *)((long)param_1 + 0xa14) = 0;
  *(undefined2 *)(param_1 + 0x143) = 0;
  *(undefined2 *)((long)param_1 + 0xa1c) = 0;
  *(undefined2 *)(param_1 + 0x144) = 0;
  *(undefined2 *)((long)param_1 + 0xa24) = 0;
  *(undefined2 *)(param_1 + 0x145) = 0;
  *(undefined2 *)((long)param_1 + 0xa2c) = 0;
  *(undefined2 *)(param_1 + 0x146) = 0;
  *(undefined2 *)((long)param_1 + 0xa34) = 0;
  *(undefined2 *)(param_1 + 0x147) = 0;
  *(undefined2 *)((long)param_1 + 0xa3c) = 0;
  *(undefined2 *)((long)param_1 + 0xabc) = 0;
  *(undefined2 *)(param_1 + 0x158) = 0;
  *(undefined2 *)((long)param_1 + 0xac4) = 0;
  *(undefined2 *)(param_1 + 0x159) = 0;
  *(undefined2 *)((long)param_1 + 0xacc) = 0;
  *(undefined2 *)(param_1 + 0x15a) = 0;
  *(undefined2 *)((long)param_1 + 0xad4) = 0;
  *(undefined2 *)(param_1 + 0x15b) = 0;
  *(undefined2 *)((long)param_1 + 0xadc) = 0;
  *(undefined2 *)(param_1 + 0x15c) = 0;
  *(undefined2 *)((long)param_1 + 0xae4) = 0;
  *(undefined2 *)(param_1 + 0x15d) = 0;
  *(undefined2 *)((long)param_1 + 0xaec) = 0;
  *(undefined2 *)(param_1 + 0x15e) = 0;
  *(undefined2 *)((long)param_1 + 0xaf4) = 0;
  *(undefined2 *)(param_1 + 0x15f) = 0;
  *(undefined2 *)((long)param_1 + 0xafc) = 0;
  *(undefined2 *)(param_1 + 0x160) = 0;
  *(undefined2 *)((long)param_1 + 0xb04) = 0;
  *(undefined2 *)((long)param_1 + 0x4d4) = 1;
  *(undefined4 *)((long)param_1 + 0x170c) = 0;
  param_1[0x2e3] = 0;
  param_1[0x2e4] = 0;
  *(undefined4 *)(param_1 + 0x2e5) = 0;
  if (param_4 == 0) {
    return;
  }
  if (*(int *)((long)param_1 + 0x1734) < 9) {
    if (*(int *)((long)param_1 + 0x1734) < 1) goto LAB_004b8074;
    uVar3 = (undefined1)param_1[0x2e6];
  }
  else {
    lVar7 = param_1[5];
    param_1[5] = lVar7 + 1;
    *(char *)(param_1[2] + lVar7) = (char)param_1[0x2e6];
    uVar3 = *(undefined1 *)((long)param_1 + 0x1731);
  }
  lVar7 = param_1[5];
  param_1[5] = lVar7 + 1;
  *(undefined1 *)(param_1[2] + lVar7) = uVar3;
LAB_004b8074:
  *(undefined2 *)(param_1 + 0x2e6) = 0;
  *(undefined4 *)((long)param_1 + 0x1734) = 0;
  return;
}


