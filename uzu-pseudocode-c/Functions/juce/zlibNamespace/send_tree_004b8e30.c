// Function : send_tree
// Namespace: juce:zlibNamespace
// Entry    : 004b8e30
// Prototype: undefined send_tree(long param_1, long param_2, int param_3)
// Body     : 004b8e30 - 004b93fa


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::zlibNamespace::send_tree(juce::zlibNamespace::internal_state*,
   juce::zlibNamespace::ct_data_s*, int) */

void __cdecl juce::zlibNamespace::send_tree(long param_1,long param_2,int param_3)

{
  long lVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  if (-1 < param_3) {
    uVar5 = *(ushort *)(param_2 + 2);
    uVar10 = 7;
    if (uVar5 == 0) {
      uVar10 = 0x8a;
    }
    iVar6 = 4 - (uint)(uVar5 == 0);
    uVar9 = 0;
    uVar12 = 0xffffffff;
    iVar2 = 0;
    uVar7 = (uint)uVar5;
    do {
      uVar8 = (uint)*(ushort *)(param_2 + 6 + uVar9 * 4);
      uVar9 = uVar9 + 1;
      iVar11 = iVar2 + 1;
      if (((int)uVar10 <= iVar11) || (uVar7 != uVar8)) {
        if (iVar11 < iVar6) {
          iVar2 = *(int *)(param_1 + 0x1734);
          uVar10 = (uint)*(ushort *)(param_1 + 0x1730);
          do {
            while( true ) {
              uVar5 = *(ushort *)(param_1 + 0xabe + (ulong)uVar7 * 4);
              uVar4 = *(ushort *)(param_1 + 0xabc + (ulong)uVar7 * 4);
              uVar10 = uVar10 | (uint)uVar4 << ((byte)iVar2 & 0x1f);
              *(short *)(param_1 + 0x1730) = (short)uVar10;
              if (iVar2 <= (int)(0x10 - (uint)uVar5)) break;
              lVar1 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar1 + 1;
              *(char *)(*(long *)(param_1 + 0x10) + lVar1) = (char)uVar10;
              lVar1 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar1 + 1;
              *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar1) = *(undefined1 *)(param_1 + 0x1731)
              ;
              uVar4 = uVar4 >> (0x10U - (char)*(int *)(param_1 + 0x1734) & 0x1f);
              *(ushort *)(param_1 + 0x1730) = uVar4;
              iVar2 = (uint)uVar5 + *(int *)(param_1 + 0x1734) + -0x10;
              uVar10 = (uint)uVar4;
              *(int *)(param_1 + 0x1734) = iVar2;
              iVar11 = iVar11 + -1;
              if (iVar11 == 0) goto joined_r0x004b93dd;
            }
            iVar2 = iVar2 + (uint)uVar5;
            *(int *)(param_1 + 0x1734) = iVar2;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
        else {
          if (uVar7 == 0) {
            if (iVar2 < 10) {
              uVar5 = *(ushort *)(param_1 + 0xb02);
              iVar6 = *(int *)(param_1 + 0x1734);
              uVar4 = *(ushort *)(param_1 + 0xb00);
              uVar3 = uVar4 << ((byte)iVar6 & 0x1f) | *(ushort *)(param_1 + 0x1730);
              if ((int)(0x10 - (uint)uVar5) < iVar6) {
                *(ushort *)(param_1 + 0x1730) = uVar3;
                lVar1 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar1 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + lVar1) = (char)uVar3;
                lVar1 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar1 + 1;
                *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar1) =
                     *(undefined1 *)(param_1 + 0x1731);
                uVar3 = uVar4 >> (0x10U - (char)*(int *)(param_1 + 0x1734) & 0x1f);
                iVar6 = (uint)uVar5 + *(int *)(param_1 + 0x1734) + -0x10;
                *(int *)(param_1 + 0x1734) = iVar6;
              }
              else {
                iVar6 = iVar6 + (uint)uVar5;
                *(int *)(param_1 + 0x1734) = iVar6;
              }
              if (iVar6 < 0xe) {
                *(ushort *)(param_1 + 0x1730) =
                     uVar3 | (ushort)(iVar2 + 0xfffe << ((byte)iVar6 & 0x1f));
                iVar6 = iVar6 + 3;
              }
              else {
                uVar10 = (uint)uVar3 | iVar2 + 0xfffeU << ((byte)iVar6 & 0x1f);
                *(short *)(param_1 + 0x1730) = (short)uVar10;
                lVar1 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar1 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + lVar1) = (char)uVar10;
                lVar1 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar1 + 1;
                *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar1) =
                     *(undefined1 *)(param_1 + 0x1731);
                *(short *)(param_1 + 0x1730) =
                     (short)((iVar2 + 0xfffeU & 0xffff) >>
                            (0x10U - (char)*(int *)(param_1 + 0x1734) & 0x1f));
                iVar6 = *(int *)(param_1 + 0x1734) + -0xd;
              }
            }
            else {
              uVar10 = (uint)*(ushort *)(param_1 + 0xb06);
              iVar6 = *(int *)(param_1 + 0x1734);
              uVar5 = *(ushort *)(param_1 + 0xb04);
              uVar4 = uVar5 << ((byte)iVar6 & 0x1f) | *(ushort *)(param_1 + 0x1730);
              if ((int)(0x10 - uVar10) < iVar6) {
                *(ushort *)(param_1 + 0x1730) = uVar4;
                lVar1 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar1 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + lVar1) = (char)uVar4;
                lVar1 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar1 + 1;
                *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar1) =
                     *(undefined1 *)(param_1 + 0x1731);
                uVar4 = uVar5 >> (0x10U - (char)*(int *)(param_1 + 0x1734) & 0x1f);
                iVar6 = uVar10 + *(int *)(param_1 + 0x1734) + -0x10;
                *(int *)(param_1 + 0x1734) = iVar6;
              }
              else {
                iVar6 = iVar6 + uVar10;
                *(int *)(param_1 + 0x1734) = iVar6;
              }
              if (iVar6 < 10) {
                *(ushort *)(param_1 + 0x1730) =
                     uVar4 | (ushort)(iVar2 + 0xfff6 << ((byte)iVar6 & 0x1f));
                iVar6 = iVar6 + 7;
              }
              else {
                uVar10 = (uint)uVar4 | iVar2 + 0xfff6U << ((byte)iVar6 & 0x1f);
                *(short *)(param_1 + 0x1730) = (short)uVar10;
                lVar1 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar1 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + lVar1) = (char)uVar10;
                lVar1 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar1 + 1;
                *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar1) =
                     *(undefined1 *)(param_1 + 0x1731);
                *(short *)(param_1 + 0x1730) =
                     (short)((iVar2 + 0xfff6U & 0xffff) >>
                            (0x10U - (char)*(int *)(param_1 + 0x1734) & 0x1f));
                iVar6 = *(int *)(param_1 + 0x1734) + -9;
              }
            }
          }
          else {
            if (uVar7 == uVar12) {
              iVar6 = *(int *)(param_1 + 0x1734);
              uVar5 = *(ushort *)(param_1 + 0x1730);
              iVar2 = iVar11;
            }
            else {
              uVar4 = *(ushort *)(param_1 + 0xabe + (ulong)uVar7 * 4);
              iVar6 = *(int *)(param_1 + 0x1734);
              uVar3 = *(ushort *)(param_1 + 0xabc + (ulong)uVar7 * 4);
              uVar5 = uVar3 << ((byte)iVar6 & 0x1f) | *(ushort *)(param_1 + 0x1730);
              *(ushort *)(param_1 + 0x1730) = uVar5;
              if ((int)(0x10 - (uint)uVar4) < iVar6) {
                lVar1 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar1 + 1;
                *(char *)(*(long *)(param_1 + 0x10) + lVar1) = (char)uVar5;
                lVar1 = *(long *)(param_1 + 0x28);
                *(long *)(param_1 + 0x28) = lVar1 + 1;
                *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar1) =
                     *(undefined1 *)(param_1 + 0x1731);
                uVar5 = uVar3 >> (0x10U - (char)*(int *)(param_1 + 0x1734) & 0x1f);
                iVar6 = (uint)uVar4 + *(int *)(param_1 + 0x1734) + -0x10;
              }
              else {
                iVar6 = iVar6 + (uint)uVar4;
              }
              *(int *)(param_1 + 0x1734) = iVar6;
            }
            uVar12 = (uint)*(ushort *)(param_1 + 0xafe);
            uVar4 = *(ushort *)(param_1 + 0xafc);
            uVar10 = (uint)uVar5 | (uint)uVar4 << ((byte)iVar6 & 0x1f);
            uVar5 = (ushort)uVar10;
            if ((int)(0x10 - uVar12) < iVar6) {
              *(ushort *)(param_1 + 0x1730) = uVar5;
              lVar1 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar1 + 1;
              *(char *)(*(long *)(param_1 + 0x10) + lVar1) = (char)uVar10;
              lVar1 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar1 + 1;
              *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar1) = *(undefined1 *)(param_1 + 0x1731)
              ;
              uVar5 = uVar4 >> (0x10U - (char)*(int *)(param_1 + 0x1734) & 0x1f);
              iVar6 = uVar12 + *(int *)(param_1 + 0x1734) + -0x10;
              uVar10 = (uint)uVar5;
              *(int *)(param_1 + 0x1734) = iVar6;
            }
            else {
              iVar6 = iVar6 + uVar12;
              *(int *)(param_1 + 0x1734) = iVar6;
            }
            if (iVar6 < 0xf) {
              *(ushort *)(param_1 + 0x1730) =
                   uVar5 | (ushort)(iVar2 + 0xfffd << ((byte)iVar6 & 0x1f));
              iVar6 = iVar6 + 2;
            }
            else {
              uVar10 = uVar10 | iVar2 + 0xfffdU << ((byte)iVar6 & 0x1f);
              *(short *)(param_1 + 0x1730) = (short)uVar10;
              lVar1 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar1 + 1;
              *(char *)(*(long *)(param_1 + 0x10) + lVar1) = (char)uVar10;
              lVar1 = *(long *)(param_1 + 0x28);
              *(long *)(param_1 + 0x28) = lVar1 + 1;
              *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar1) = *(undefined1 *)(param_1 + 0x1731)
              ;
              *(short *)(param_1 + 0x1730) =
                   (short)((iVar2 + 0xfffdU & 0xffff) >>
                          (0x10U - (char)*(int *)(param_1 + 0x1734) & 0x1f));
              iVar6 = *(int *)(param_1 + 0x1734) + -0xe;
            }
          }
          *(int *)(param_1 + 0x1734) = iVar6;
        }
joined_r0x004b93dd:
        uVar12 = uVar7;
        if (uVar8 == 0) {
          iVar11 = 0;
          uVar10 = 0x8a;
          iVar6 = 3;
        }
        else {
          iVar11 = 0;
          iVar6 = 4 - (uint)(uVar7 == uVar8);
          uVar10 = uVar7 == uVar8 ^ 7;
        }
      }
      iVar2 = iVar11;
      uVar7 = uVar8;
    } while (uVar9 != param_3 + 1);
  }
  return;
}


