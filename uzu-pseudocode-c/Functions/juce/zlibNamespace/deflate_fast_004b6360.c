// Function : deflate_fast
// Namespace: juce:zlibNamespace
// Entry    : 004b6360
// Prototype: int deflate_fast(long * param_1, int param_2)
// Body     : 004b6360 - 004b67d0


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::zlibNamespace::deflate_fast(juce::zlibNamespace::internal_state*, int) */

int __cdecl juce::zlibNamespace::deflate_fast(long *param_1,int param_2)

{
  short *psVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  void *pvVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  
LAB_004b6385:
  do {
    uVar17 = *(uint *)((long)param_1 + 0xb4);
    while (uVar17 < 0x106) {
      fill_window(param_1);
      uVar17 = *(uint *)((long)param_1 + 0xb4);
      if ((param_2 == 0) && (uVar17 < 0x106)) {
        return 0;
      }
      if (uVar17 == 0) {
        uVar13 = (ulong)*(uint *)((long)param_1 + 0xac);
        uVar17 = 2;
        if (uVar13 < 2) {
          uVar17 = *(uint *)((long)param_1 + 0xac);
        }
        *(uint *)((long)param_1 + 0x172c) = uVar17;
        if (param_2 == 4) {
          uVar8 = param_1[0x13];
          if ((long)uVar8 < 0) {
            pvVar15 = (void *)0x0;
          }
          else {
            pvVar15 = (void *)((uVar8 & 0xffffffff) + param_1[0xc]);
          }
          _tr_flush_block(param_1,pvVar15,uVar13 - uVar8,1);
          param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
          flush_pending(*param_1);
          return 3 - (uint)(*(int *)(*param_1 + 0x20) == 0);
        }
        if (*(int *)((long)param_1 + 0x170c) != 0) {
          uVar8 = param_1[0x13];
          if ((long)uVar8 < 0) {
            pvVar15 = (void *)0x0;
          }
          else {
            pvVar15 = (void *)((uVar8 & 0xffffffff) + param_1[0xc]);
          }
          _tr_flush_block(param_1,pvVar15,uVar13 - uVar8,0);
          param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
          flush_pending(*param_1);
          if (*(int *)(*param_1 + 0x20) == 0) {
            return 0;
          }
        }
        return 1;
      }
      if (2 < uVar17) break;
LAB_004b641a:
      uVar17 = *(uint *)(param_1 + 0x14);
      if (2 < uVar17) goto LAB_004b64e0;
LAB_004b6447:
      bVar10 = *(byte *)(param_1[0xc] + (ulong)*(uint *)((long)param_1 + 0xac));
      uVar17 = *(uint *)((long)param_1 + 0x170c);
      *(uint *)((long)param_1 + 0x170c) = uVar17 + 1;
      *(undefined1 *)(param_1[0x2e0] + (ulong)uVar17) = 0;
      uVar17 = *(uint *)((long)param_1 + 0x170c);
      *(uint *)((long)param_1 + 0x170c) = uVar17 + 1;
      *(undefined1 *)(param_1[0x2e0] + (ulong)uVar17) = 0;
      uVar17 = *(uint *)((long)param_1 + 0x170c);
      *(uint *)((long)param_1 + 0x170c) = uVar17 + 1;
      *(byte *)(param_1[0x2e0] + (ulong)uVar17) = bVar10;
      psVar1 = (short *)((long)param_1 + (ulong)bVar10 * 4 + 0xd4);
      *psVar1 = *psVar1 + 1;
      uVar17 = *(int *)((long)param_1 + 0xb4) - 1;
      uVar11 = *(int *)((long)param_1 + 0xac) + 1;
      *(uint *)((long)param_1 + 0xb4) = uVar17;
      *(uint *)((long)param_1 + 0xac) = uVar11;
      if (*(int *)((long)param_1 + 0x170c) == (int)param_1[0x2e2]) goto LAB_004b66b0;
    }
    uVar17 = *(uint *)((long)param_1 + 0xac);
    uVar11 = ((uint)*(byte *)(param_1[0xc] + (ulong)(uVar17 + 2)) ^
             (int)param_1[0x10] << (*(byte *)(param_1 + 0x12) & 0x1f)) &
             *(uint *)((long)param_1 + 0x8c);
    *(uint *)(param_1 + 0x10) = uVar11;
    lVar4 = param_1[0xf];
    uVar2 = *(ushort *)(lVar4 + (ulong)uVar11 * 2);
    *(ushort *)(param_1[0xe] + (ulong)(*(uint *)(param_1 + 0xb) & uVar17) * 2) = uVar2;
    *(short *)(lVar4 + (ulong)uVar11 * 2) = (short)uVar17;
    uVar11 = (uint)uVar2;
    if ((uVar11 == 0) || ((int)param_1[10] - 0x106U < uVar17 - uVar11)) goto LAB_004b641a;
    uVar17 = longest_match((long)param_1,uVar11);
    *(uint *)(param_1 + 0x14) = uVar17;
    if (uVar17 < 3) goto LAB_004b6447;
LAB_004b64e0:
    bVar10 = (char)uVar17 - 3;
    iVar12 = *(int *)((long)param_1 + 0xac) - (int)param_1[0x16];
    uVar17 = *(uint *)((long)param_1 + 0x170c);
    *(uint *)((long)param_1 + 0x170c) = uVar17 + 1;
    *(char *)(param_1[0x2e0] + (ulong)uVar17) = (char)iVar12;
    uVar17 = *(uint *)((long)param_1 + 0x170c);
    *(uint *)((long)param_1 + 0x170c) = uVar17 + 1;
    *(char *)(param_1[0x2e0] + (ulong)uVar17) = (char)((uint)iVar12 >> 8);
    uVar17 = *(uint *)((long)param_1 + 0x170c);
    *(uint *)((long)param_1 + 0x170c) = uVar17 + 1;
    *(byte *)(param_1[0x2e0] + (ulong)uVar17) = bVar10;
    psVar1 = (short *)((long)param_1 + (ulong)(byte)_length_code[bVar10] * 4 + 0x4d8);
    *psVar1 = *psVar1 + 1;
    uVar11 = iVar12 - 1U & 0xffff;
    uVar17 = (uVar11 >> 7) + 0x100;
    if (uVar11 < 0x100) {
      uVar17 = uVar11;
    }
    psVar1 = (short *)((long)param_1 + (ulong)(byte)_dist_code[uVar17] * 4 + 0x9c8);
    *psVar1 = *psVar1 + 1;
    iVar12 = *(int *)((long)param_1 + 0x170c);
    lVar4 = param_1[0x2e2];
    uVar17 = *(uint *)(param_1 + 0x14);
    uVar11 = *(int *)((long)param_1 + 0xb4) - uVar17;
    *(uint *)((long)param_1 + 0xb4) = uVar11;
    if ((*(uint *)(param_1 + 0x18) < uVar17) || (uVar11 < 3)) {
      iVar16 = *(int *)((long)param_1 + 0xac);
      uVar11 = iVar16 + uVar17;
      *(uint *)((long)param_1 + 0xac) = uVar11;
      *(undefined4 *)(param_1 + 0x14) = 0;
      uVar14 = (uint)*(byte *)(param_1[0xc] + (ulong)uVar11);
      *(uint *)(param_1 + 0x10) = uVar14;
      *(uint *)(param_1 + 0x10) =
           ((uint)*(byte *)(param_1[0xc] + (ulong)(iVar16 + uVar17 + 1)) ^
           uVar14 << (*(byte *)(param_1 + 0x12) & 0x1f)) & *(uint *)((long)param_1 + 0x8c);
      if (iVar12 != (int)lVar4) goto LAB_004b6385;
      goto LAB_004b66b0;
    }
    *(uint *)(param_1 + 0x14) = uVar17 - 1;
    lVar9 = param_1[0x12];
    lVar5 = param_1[0xc];
    uVar14 = *(uint *)((long)param_1 + 0x8c);
    lVar6 = param_1[0xf];
    lVar7 = param_1[0xe];
    uVar3 = *(uint *)(param_1 + 0xb);
    uVar13 = (ulong)*(uint *)(param_1 + 0x10);
    iVar16 = uVar17 - 2;
    uVar11 = *(int *)((long)param_1 + 0xac) + 1;
    do {
      *(uint *)((long)param_1 + 0xac) = uVar11;
      uVar17 = uVar14 & ((uint)*(byte *)(lVar5 + (ulong)(uVar11 + 2)) ^
                        (int)uVar13 << ((byte)lVar9 & 0x1f));
      uVar13 = (ulong)uVar17;
      *(uint *)(param_1 + 0x10) = uVar17;
      *(undefined2 *)(lVar7 + (ulong)(uVar3 & uVar11) * 2) = *(undefined2 *)(lVar6 + uVar13 * 2);
      *(short *)(lVar6 + uVar13 * 2) = (short)uVar11;
      *(int *)(param_1 + 0x14) = iVar16;
      uVar11 = uVar11 + 1;
      bVar18 = iVar16 != 0;
      iVar16 = iVar16 + -1;
    } while (bVar18);
    *(uint *)((long)param_1 + 0xac) = uVar11;
    if (iVar12 == (int)lVar4) {
LAB_004b66b0:
      uVar13 = param_1[0x13];
      if ((long)uVar13 < 0) {
        pvVar15 = (void *)0x0;
      }
      else {
        pvVar15 = (void *)((uVar13 & 0xffffffff) + param_1[0xc]);
      }
      _tr_flush_block(param_1,pvVar15,uVar11 - uVar13,0);
      param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
      flush_pending(*param_1);
      if (*(int *)(*param_1 + 0x20) == 0) {
        return 0;
      }
    }
  } while( true );
}


