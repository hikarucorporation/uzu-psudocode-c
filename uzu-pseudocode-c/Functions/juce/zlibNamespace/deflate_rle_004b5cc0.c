// Function : deflate_rle
// Namespace: juce:zlibNamespace
// Entry    : 004b5cc0
// Prototype: int deflate_rle(long * param_1, int param_2)
// Body     : 004b5cc0 - 004b607e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::zlibNamespace::deflate_rle(juce::zlibNamespace::internal_state*, int) */

int __cdecl juce::zlibNamespace::deflate_rle(long *param_1,int param_2)

{
  long lVar1;
  short *psVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  void *pvVar13;
  
  do {
    uVar5 = *(uint *)((long)param_1 + 0xb4);
    do {
      while (uVar5 < 0x103) {
        fill_window(param_1);
        uVar5 = *(uint *)((long)param_1 + 0xb4);
        if ((param_2 == 0) && (uVar5 < 0x103)) {
          return 0;
        }
        if (uVar5 == 0) {
          *(undefined4 *)((long)param_1 + 0x172c) = 0;
          if (param_2 == 4) {
            uVar8 = param_1[0x13];
            if ((long)uVar8 < 0) {
              pvVar13 = (void *)0x0;
            }
            else {
              pvVar13 = (void *)((uVar8 & 0xffffffff) + param_1[0xc]);
            }
            _tr_flush_block(param_1,pvVar13,*(uint *)((long)param_1 + 0xac) - uVar8,1);
            param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
            flush_pending(*param_1);
            return 3 - (uint)(*(int *)(*param_1 + 0x20) == 0);
          }
          if (*(int *)((long)param_1 + 0x170c) != 0) {
            uVar8 = param_1[0x13];
            if ((long)uVar8 < 0) {
              pvVar13 = (void *)0x0;
            }
            else {
              pvVar13 = (void *)((uVar8 & 0xffffffff) + param_1[0xc]);
            }
            _tr_flush_block(param_1,pvVar13,*(uint *)((long)param_1 + 0xac) - uVar8,0);
            param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
            flush_pending(*param_1);
            if (*(int *)(*param_1 + 0x20) == 0) {
              return 0;
            }
          }
          return 1;
        }
        *(undefined4 *)(param_1 + 0x14) = 0;
        if (2 < uVar5) goto LAB_004b5dca;
        uVar6 = *(uint *)((long)param_1 + 0xac);
LAB_004b5ce2:
        bVar9 = *(byte *)(param_1[0xc] + (ulong)uVar6);
        uVar5 = *(uint *)((long)param_1 + 0x170c);
        *(uint *)((long)param_1 + 0x170c) = uVar5 + 1;
        *(undefined1 *)(param_1[0x2e0] + (ulong)uVar5) = 0;
        uVar5 = *(uint *)((long)param_1 + 0x170c);
        *(uint *)((long)param_1 + 0x170c) = uVar5 + 1;
        *(undefined1 *)(param_1[0x2e0] + (ulong)uVar5) = 0;
        uVar5 = *(uint *)((long)param_1 + 0x170c);
        *(uint *)((long)param_1 + 0x170c) = uVar5 + 1;
        *(byte *)(param_1[0x2e0] + (ulong)uVar5) = bVar9;
        psVar2 = (short *)((long)param_1 + (ulong)bVar9 * 4 + 0xd4);
        *psVar2 = *psVar2 + 1;
        uVar5 = *(int *)((long)param_1 + 0xb4) - 1;
        uVar6 = *(int *)((long)param_1 + 0xac) + 1;
        *(uint *)((long)param_1 + 0xb4) = uVar5;
        *(uint *)((long)param_1 + 0xac) = uVar6;
        if (*(int *)((long)param_1 + 0x170c) == (int)param_1[0x2e2]) goto LAB_004b5f60;
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
LAB_004b5dca:
      uVar6 = *(uint *)((long)param_1 + 0xac);
      uVar8 = (ulong)uVar6;
      if (uVar8 == 0) {
        uVar6 = 0;
        goto LAB_004b5ce2;
      }
      lVar12 = param_1[0xc];
      cVar3 = *(char *)(lVar12 + -1 + uVar8);
      if (((cVar3 != *(char *)(lVar12 + uVar8)) ||
          (lVar12 = lVar12 + uVar8, cVar3 != *(char *)(lVar12 + 1))) ||
         (cVar3 != *(char *)(lVar12 + 2))) goto LAB_004b5ce2;
      iVar4 = (int)lVar12;
      lVar7 = 0;
      do {
        iVar10 = (int)lVar7;
        if (cVar3 != *(char *)(lVar12 + 3 + lVar7)) {
          iVar10 = iVar4 + iVar10 + 3;
          goto LAB_004b5e92;
        }
        if (cVar3 != *(char *)(lVar12 + 4 + lVar7)) {
          iVar10 = iVar4 + iVar10 + 4;
          goto LAB_004b5e92;
        }
        if (cVar3 != *(char *)(lVar12 + 5 + lVar7)) {
          iVar10 = iVar4 + iVar10 + 5;
          goto LAB_004b5e92;
        }
        if (cVar3 != *(char *)(lVar12 + 6 + lVar7)) {
          iVar10 = iVar4 + iVar10 + 6;
          goto LAB_004b5e92;
        }
        if (cVar3 != *(char *)(lVar12 + 7 + lVar7)) {
          iVar10 = iVar4 + iVar10 + 7;
          goto LAB_004b5e92;
        }
        if (cVar3 != *(char *)(lVar12 + 8 + lVar7)) {
          iVar10 = iVar4 + iVar10 + 8;
          goto LAB_004b5e92;
        }
        if (cVar3 != *(char *)(lVar12 + 9 + lVar7)) {
          iVar10 = iVar4 + iVar10 + 9;
          goto LAB_004b5e92;
        }
        lVar1 = lVar7 + 8;
      } while ((cVar3 == *(char *)(lVar12 + 10 + lVar7)) &&
              (uVar8 = lVar7 + 2, lVar7 = lVar1, uVar8 < 0xfa));
      iVar10 = iVar4 + (int)lVar1 + 2;
LAB_004b5e92:
      uVar11 = (iVar10 - (iVar4 + 0x102)) + 0x102;
      if (uVar5 < uVar11) {
        uVar11 = uVar5;
      }
      *(uint *)(param_1 + 0x14) = uVar11;
      if (uVar11 < 3) goto LAB_004b5ce2;
      bVar9 = (char)uVar11 - 3;
      uVar5 = *(uint *)((long)param_1 + 0x170c);
      *(uint *)((long)param_1 + 0x170c) = uVar5 + 1;
      *(undefined1 *)(param_1[0x2e0] + (ulong)uVar5) = 1;
      uVar5 = *(uint *)((long)param_1 + 0x170c);
      *(uint *)((long)param_1 + 0x170c) = uVar5 + 1;
      *(undefined1 *)(param_1[0x2e0] + (ulong)uVar5) = 0;
      uVar5 = *(uint *)((long)param_1 + 0x170c);
      *(uint *)((long)param_1 + 0x170c) = uVar5 + 1;
      *(byte *)(param_1[0x2e0] + (ulong)uVar5) = bVar9;
      psVar2 = (short *)((long)param_1 + (ulong)(byte)_length_code[bVar9] * 4 + 0x4d8);
      *psVar2 = *psVar2 + 1;
      *(short *)(param_1 + 0x139) = (short)param_1[0x139] + 1;
      uVar5 = *(int *)((long)param_1 + 0xb4) - (int)param_1[0x14];
      uVar6 = (int)param_1[0x14] + *(int *)((long)param_1 + 0xac);
      *(uint *)((long)param_1 + 0xb4) = uVar5;
      *(uint *)((long)param_1 + 0xac) = uVar6;
      *(undefined4 *)(param_1 + 0x14) = 0;
    } while (*(int *)((long)param_1 + 0x170c) != (int)param_1[0x2e2]);
LAB_004b5f60:
    uVar8 = param_1[0x13];
    if ((long)uVar8 < 0) {
      pvVar13 = (void *)0x0;
    }
    else {
      pvVar13 = (void *)((uVar8 & 0xffffffff) + param_1[0xc]);
    }
    _tr_flush_block(param_1,pvVar13,uVar6 - uVar8,0);
    param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
    flush_pending(*param_1);
    if (*(int *)(*param_1 + 0x20) == 0) {
      return 0;
    }
  } while( true );
}


