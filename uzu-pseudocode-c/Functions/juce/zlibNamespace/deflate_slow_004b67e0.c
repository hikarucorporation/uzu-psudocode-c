// Function : deflate_slow
// Namespace: juce:zlibNamespace
// Entry    : 004b67e0
// Prototype: int deflate_slow(long * param_1, int param_2)
// Body     : 004b67e0 - 004b6da5


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::zlibNamespace::deflate_slow(juce::zlibNamespace::internal_state*, int) */

int __cdecl juce::zlibNamespace::deflate_slow(long *param_1,int param_2)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  void *pvVar16;
  bool bVar17;
  
  do {
    uVar8 = *(uint *)((long)param_1 + 0xb4);
joined_r0x004b6810:
    if (uVar8 < 0x106) goto LAB_004b6a2b;
LAB_004b6874:
    uVar8 = *(uint *)((long)param_1 + 0xac);
    uVar11 = ((uint)*(byte *)(param_1[0xc] + (ulong)(uVar8 + 2)) ^
             (int)param_1[0x10] << (*(byte *)(param_1 + 0x12) & 0x1f)) &
             *(uint *)((long)param_1 + 0x8c);
    *(uint *)(param_1 + 0x10) = uVar11;
    lVar5 = param_1[0xf];
    uVar2 = *(ushort *)(lVar5 + (ulong)uVar11 * 2);
    *(ushort *)(param_1[0xe] + (ulong)(*(uint *)(param_1 + 0xb) & uVar8) * 2) = uVar2;
    *(short *)(lVar5 + (ulong)uVar11 * 2) = (short)uVar8;
    uVar11 = *(uint *)(param_1 + 0x14);
    *(uint *)(param_1 + 0x17) = uVar11;
    *(int *)((long)param_1 + 0xa4) = (int)param_1[0x16];
    *(undefined4 *)(param_1 + 0x14) = 2;
    uVar9 = 2;
    uVar15 = (uint)uVar2;
    if (uVar15 != 0) {
      if ((uVar11 < *(uint *)(param_1 + 0x18)) && (uVar8 - uVar15 <= (int)param_1[10] - 0x106U)) {
        uVar9 = longest_match((long)param_1,uVar15);
        *(uint *)(param_1 + 0x14) = uVar9;
        if ((uVar9 < 6) &&
           (((int)param_1[0x19] == 1 ||
            ((uVar9 == 3 &&
             (uVar9 = 3, 0x1000 < (uint)(*(int *)((long)param_1 + 0xac) - (int)param_1[0x16])))))))
        {
          *(undefined4 *)(param_1 + 0x14) = 2;
          uVar9 = 2;
        }
      }
      uVar11 = *(uint *)(param_1 + 0x17);
    }
    while ((uVar11 < 3 || (uVar11 < uVar9))) {
      if ((int)param_1[0x15] != 0) {
        bVar10 = *(byte *)(param_1[0xc] + (ulong)(*(int *)((long)param_1 + 0xac) - 1));
        uVar8 = *(uint *)((long)param_1 + 0x170c);
        *(uint *)((long)param_1 + 0x170c) = uVar8 + 1;
        *(undefined1 *)(param_1[0x2e0] + (ulong)uVar8) = 0;
        uVar8 = *(uint *)((long)param_1 + 0x170c);
        *(uint *)((long)param_1 + 0x170c) = uVar8 + 1;
        *(undefined1 *)(param_1[0x2e0] + (ulong)uVar8) = 0;
        uVar8 = *(uint *)((long)param_1 + 0x170c);
        *(uint *)((long)param_1 + 0x170c) = uVar8 + 1;
        *(byte *)(param_1[0x2e0] + (ulong)uVar8) = bVar10;
        psVar1 = (short *)((long)param_1 + (ulong)bVar10 * 4 + 0xd4);
        *psVar1 = *psVar1 + 1;
        if (*(int *)((long)param_1 + 0x170c) == (int)param_1[0x2e2]) {
          uVar13 = param_1[0x13];
          if ((long)uVar13 < 0) {
            pvVar16 = (void *)0x0;
          }
          else {
            pvVar16 = (void *)((uVar13 & 0xffffffff) + param_1[0xc]);
          }
          _tr_flush_block(param_1,pvVar16,*(uint *)((long)param_1 + 0xac) - uVar13,0);
          param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
          flush_pending(*param_1);
        }
        *(int *)((long)param_1 + 0xac) = *(int *)((long)param_1 + 0xac) + 1;
        uVar8 = *(int *)((long)param_1 + 0xb4) - 1;
        *(uint *)((long)param_1 + 0xb4) = uVar8;
        if (*(int *)(*param_1 + 0x20) == 0) {
          return 0;
        }
        goto joined_r0x004b6810;
      }
      *(undefined4 *)(param_1 + 0x15) = 1;
      *(int *)((long)param_1 + 0xac) = *(int *)((long)param_1 + 0xac) + 1;
      uVar8 = *(int *)((long)param_1 + 0xb4) - 1;
      *(uint *)((long)param_1 + 0xb4) = uVar8;
      if (0x105 < uVar8) goto LAB_004b6874;
LAB_004b6a2b:
      fill_window(param_1);
      uVar8 = *(uint *)((long)param_1 + 0xb4);
      if ((param_2 == 0) && (uVar8 < 0x106)) {
        return 0;
      }
      if (uVar8 == 0) {
        if ((int)param_1[0x15] != 0) {
          bVar10 = *(byte *)(param_1[0xc] + (ulong)(*(int *)((long)param_1 + 0xac) - 1));
          uVar8 = *(uint *)((long)param_1 + 0x170c);
          *(uint *)((long)param_1 + 0x170c) = uVar8 + 1;
          *(undefined1 *)(param_1[0x2e0] + (ulong)uVar8) = 0;
          uVar8 = *(uint *)((long)param_1 + 0x170c);
          *(uint *)((long)param_1 + 0x170c) = uVar8 + 1;
          *(undefined1 *)(param_1[0x2e0] + (ulong)uVar8) = 0;
          uVar8 = *(uint *)((long)param_1 + 0x170c);
          *(uint *)((long)param_1 + 0x170c) = uVar8 + 1;
          *(byte *)(param_1[0x2e0] + (ulong)uVar8) = bVar10;
          psVar1 = (short *)((long)param_1 + (ulong)bVar10 * 4 + 0xd4);
          *psVar1 = *psVar1 + 1;
          *(undefined4 *)(param_1 + 0x15) = 0;
        }
        uVar13 = (ulong)*(uint *)((long)param_1 + 0xac);
        uVar8 = 2;
        if (uVar13 < 2) {
          uVar8 = *(uint *)((long)param_1 + 0xac);
        }
        *(uint *)((long)param_1 + 0x172c) = uVar8;
        if (param_2 == 4) {
          uVar7 = param_1[0x13];
          if ((long)uVar7 < 0) {
            pvVar16 = (void *)0x0;
          }
          else {
            pvVar16 = (void *)((uVar7 & 0xffffffff) + param_1[0xc]);
          }
          _tr_flush_block(param_1,pvVar16,uVar13 - uVar7,1);
          param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
          flush_pending(*param_1);
          return 3 - (uint)(*(int *)(*param_1 + 0x20) == 0);
        }
        if (*(int *)((long)param_1 + 0x170c) != 0) {
          uVar7 = param_1[0x13];
          if ((long)uVar7 < 0) {
            pvVar16 = (void *)0x0;
          }
          else {
            pvVar16 = (void *)((uVar7 & 0xffffffff) + param_1[0xc]);
          }
          _tr_flush_block(param_1,pvVar16,uVar13 - uVar7,0);
          param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
          flush_pending(*param_1);
          if (*(int *)(*param_1 + 0x20) == 0) {
            return 0;
          }
        }
        return 1;
      }
      if (2 < uVar8) goto LAB_004b6874;
      uVar11 = *(uint *)(param_1 + 0x14);
      *(uint *)(param_1 + 0x17) = uVar11;
      *(int *)((long)param_1 + 0xa4) = (int)param_1[0x16];
      *(undefined4 *)(param_1 + 0x14) = 2;
      uVar9 = 2;
    }
    uVar8 = *(uint *)((long)param_1 + 0xa4);
    iVar3 = *(int *)((long)param_1 + 0xac);
    iVar4 = *(int *)((long)param_1 + 0xb4);
    bVar10 = (char)uVar11 - 3;
    iVar12 = iVar3 + ~uVar8;
    uVar11 = *(uint *)((long)param_1 + 0x170c);
    *(uint *)((long)param_1 + 0x170c) = uVar11 + 1;
    *(char *)(param_1[0x2e0] + (ulong)uVar11) = (char)iVar12;
    uVar11 = *(uint *)((long)param_1 + 0x170c);
    *(uint *)((long)param_1 + 0x170c) = uVar11 + 1;
    *(char *)(param_1[0x2e0] + (ulong)uVar11) = (char)((uint)iVar12 >> 8);
    uVar11 = *(uint *)((long)param_1 + 0x170c);
    *(uint *)((long)param_1 + 0x170c) = uVar11 + 1;
    *(byte *)(param_1[0x2e0] + (ulong)uVar11) = bVar10;
    psVar1 = (short *)((long)param_1 + (ulong)(byte)_length_code[bVar10] * 4 + 0x4d8);
    *psVar1 = *psVar1 + 1;
    uVar11 = (~uVar8 + iVar3) - 1 & 0xffff;
    uVar8 = (uVar11 >> 7) + 0x100;
    if (uVar11 < 0x100) {
      uVar8 = uVar11;
    }
    psVar1 = (short *)((long)param_1 + (ulong)(byte)_dist_code[uVar8] * 4 + 0x9c8);
    *psVar1 = *psVar1 + 1;
    iVar12 = *(int *)((long)param_1 + 0x170c);
    lVar5 = param_1[0x2e2];
    iVar14 = (int)param_1[0x17];
    *(int *)((long)param_1 + 0xb4) = (*(int *)((long)param_1 + 0xb4) - iVar14) + 1;
    *(int *)(param_1 + 0x17) = iVar14 + -2;
    iVar14 = iVar14 + -3;
    uVar8 = *(int *)((long)param_1 + 0xac) + 1;
    do {
      *(uint *)((long)param_1 + 0xac) = uVar8;
      if (uVar8 <= (iVar3 + iVar4) - 3U) {
        uVar11 = ((uint)*(byte *)(param_1[0xc] + (ulong)(uVar8 + 2)) ^
                 (int)param_1[0x10] << (*(byte *)(param_1 + 0x12) & 0x1f)) &
                 *(uint *)((long)param_1 + 0x8c);
        *(uint *)(param_1 + 0x10) = uVar11;
        lVar6 = param_1[0xf];
        *(undefined2 *)(param_1[0xe] + (ulong)(*(uint *)(param_1 + 0xb) & uVar8) * 2) =
             *(undefined2 *)(lVar6 + (ulong)uVar11 * 2);
        *(short *)(lVar6 + (ulong)uVar11 * 2) = (short)uVar8;
      }
      *(int *)(param_1 + 0x17) = iVar14;
      uVar8 = uVar8 + 1;
      bVar17 = iVar14 != 0;
      iVar14 = iVar14 + -1;
    } while (bVar17);
    *(undefined4 *)(param_1 + 0x15) = 0;
    *(undefined4 *)(param_1 + 0x14) = 2;
    *(uint *)((long)param_1 + 0xac) = uVar8;
    if (iVar12 == (int)lVar5) {
      uVar13 = param_1[0x13];
      if ((long)uVar13 < 0) {
        pvVar16 = (void *)0x0;
      }
      else {
        pvVar16 = (void *)((uVar13 & 0xffffffff) + param_1[0xc]);
      }
      _tr_flush_block(param_1,pvVar16,uVar8 - uVar13,0);
      param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
      flush_pending(*param_1);
      if (*(int *)(*param_1 + 0x20) == 0) {
        return 0;
      }
    }
  } while( true );
}


