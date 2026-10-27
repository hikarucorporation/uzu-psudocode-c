// Function : compress_first_pass
// Namespace: juce:jpeglibNamespace
// Entry    : 003616a0
// Prototype: undefined compress_first_pass(long param_1, long param_2)
// Body     : 003616a0 - 00361baa


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::compress_first_pass(juce::jpeglibNamespace::jpeg_compress_struct*,
   unsigned char***) */

void __cdecl juce::jpeglibNamespace::compress_first_pass(long param_1,long param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  code *pcVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  void *pvVar12;
  long lVar13;
  long lVar14;
  undefined2 *puVar15;
  ulong uVar16;
  uint uVar17;
  undefined2 *puVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  
  if (0 < *(int *)(param_1 + 0x5c)) {
    lVar4 = *(long *)(param_1 + 0x1f8);
    iVar2 = *(int *)(param_1 + 0x160);
    lVar21 = *(long *)(param_1 + 0x68);
    lVar13 = 0;
    do {
      lVar7 = (**(code **)(*(long *)(param_1 + 8) + 0x40))
                        (param_1,*(undefined8 *)(lVar4 + 0x70 + lVar13 * 8),
                         *(int *)(lVar4 + 0x10) * *(int *)(lVar21 + 0xc));
      if (*(uint *)(lVar4 + 0x10) < iVar2 - 1U) {
        uVar6 = *(uint *)(lVar21 + 0xc);
      }
      else {
        uVar6 = *(uint *)(lVar21 + 0x20) % *(uint *)(lVar21 + 0xc);
        if (uVar6 == 0) {
          uVar6 = *(uint *)(lVar21 + 0xc);
        }
      }
      uVar8 = *(uint *)(lVar21 + 0x1c);
      uVar3 = *(uint *)(lVar21 + 8);
      lVar14 = (long)(int)uVar3;
      uVar19 = 0;
      iVar11 = (int)((ulong)uVar8 % (ulong)uVar3);
      uVar16 = (ulong)(uVar3 - iVar11);
      if (iVar11 < 1) {
        uVar16 = (ulong)uVar8 % (ulong)uVar3;
      }
      uVar17 = (uint)uVar16;
      if ((int)uVar6 < 1) {
LAB_00361974:
        if ((int)uVar19 < *(int *)(lVar21 + 0xc)) {
LAB_0036197e:
          uVar17 = uVar17 + uVar8;
          if (uVar17 < uVar3) {
            do {
              memset(*(void **)(lVar7 + uVar19 * 8),0,(ulong)uVar17 << 7);
              uVar19 = uVar19 + 1;
            } while ((int)uVar19 < *(int *)(lVar21 + 0xc));
          }
          else {
            uVar6 = uVar17 / uVar3;
            if (uVar6 < 2) {
              uVar6 = 1;
            }
            do {
              lVar10 = *(long *)(lVar7 + -8 + uVar19 * 8);
              pvVar12 = *(void **)(lVar7 + uVar19 * 8);
              memset(pvVar12,0,(ulong)uVar17 << 7);
              if (0 < (int)uVar3) {
                puVar15 = (undefined2 *)((long)pvVar12 + 0x180);
                uVar8 = 0;
                do {
                  uVar1 = *(undefined2 *)(lVar10 + (lVar14 + -1) * 0x80);
                  if ((ulong)uVar3 - 1 < 3) {
                    uVar16 = 0;
                  }
                  else {
                    uVar16 = 0;
                    puVar18 = puVar15;
                    do {
                      puVar18[-0xc0] = uVar1;
                      puVar18[-0x80] = uVar1;
                      puVar18[-0x40] = uVar1;
                      *puVar18 = uVar1;
                      uVar16 = uVar16 + 4;
                      puVar18 = puVar18 + 0x100;
                    } while ((uVar3 & 0xfffffffc) != uVar16);
                  }
                  if ((ulong)(uVar3 & 3) != 0) {
                    lVar20 = 0;
                    do {
                      *(undefined2 *)((long)pvVar12 + lVar20 + uVar16 * 0x80) = uVar1;
                      lVar20 = lVar20 + 0x80;
                    } while ((ulong)(uVar3 & 3) * 0x80 != lVar20);
                  }
                  lVar10 = lVar10 + lVar14 * 0x80;
                  uVar8 = uVar8 + 1;
                  puVar15 = puVar15 + lVar14 * 0x40;
                  pvVar12 = (void *)((long)pvVar12 + lVar14 * 0x80);
                } while (uVar8 != uVar6);
              }
              uVar19 = uVar19 + 1;
            } while ((long)uVar19 < (long)*(int *)(lVar21 + 0xc));
          }
        }
      }
      else {
        pcVar5 = *(code **)(*(long *)(param_1 + 0x218) + 8 + lVar13 * 8);
        lVar10 = *(long *)(param_2 + lVar13 * 8);
        if (0 < (int)uVar17) {
          uVar19 = 0;
          do {
            lVar10 = *(long *)(lVar7 + uVar19 * 8);
            (*pcVar5)(param_1);
            lVar20 = (ulong)uVar8 * 0x80;
            pvVar12 = (void *)(lVar20 + lVar10);
            memset(pvVar12,0,uVar16 << 7);
            uVar1 = *(undefined2 *)(lVar10 + -0x80 + lVar20);
            if (uVar16 - 1 < 7) {
              uVar9 = 0;
            }
            else {
              puVar15 = (undefined2 *)((ulong)uVar8 * 0x80 + 0x380 + lVar10);
              uVar9 = 0;
              do {
                puVar15[-0x1c0] = uVar1;
                puVar15[-0x180] = uVar1;
                puVar15[-0x140] = uVar1;
                puVar15[-0x100] = uVar1;
                puVar15[-0xc0] = uVar1;
                puVar15[-0x80] = uVar1;
                puVar15[-0x40] = uVar1;
                *puVar15 = uVar1;
                uVar9 = uVar9 + 8;
                puVar15 = puVar15 + 0x200;
              } while ((uVar17 & 0xfffffff8) != uVar9);
            }
            if ((ulong)(uVar17 & 7) != 0) {
              lVar10 = 0;
              do {
                *(undefined2 *)((long)pvVar12 + lVar10 + uVar9 * 0x80) = uVar1;
                lVar10 = lVar10 + 0x80;
              } while ((ulong)(uVar17 & 7) * 0x80 != lVar10);
            }
            uVar19 = uVar19 + 1;
          } while (uVar19 != uVar6);
          uVar19 = (ulong)uVar6;
          goto LAB_00361974;
        }
        uVar16 = 0;
        do {
          (*pcVar5)(param_1,lVar21,lVar10,*(undefined8 *)(lVar7 + uVar16 * 8),0,uVar8);
          lVar10 = (long)*(int *)(lVar21 + 0x28) * 8 + lVar10;
          uVar16 = uVar16 + 1;
        } while (uVar6 != uVar16);
        uVar19 = (ulong)uVar6;
        if ((int)uVar6 < *(int *)(lVar21 + 0xc)) goto LAB_0036197e;
      }
      lVar13 = lVar13 + 1;
      lVar21 = lVar21 + 0x60;
    } while (lVar13 < *(int *)(param_1 + 0x5c));
  }
  compress_output(param_1);
  return;
}


