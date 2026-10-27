// Function : decompress_onepass
// Namespace: juce:jpeglibNamespace
// Entry    : 0037b4c0
// Prototype: undefined8 decompress_onepass(long param_1, long param_2)
// Body     : 0037b4c0 - 0037b7ff


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::decompress_onepass(juce::jpeglibNamespace::jpeg_decompress_struct*,
   unsigned char***) */

undefined8 __cdecl juce::jpeglibNamespace::decompress_onepass(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined4 uVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  void *pvVar16;
  void *pvVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  
  lVar2 = *(long *)(param_1 + 0x230);
  uVar6 = *(int *)(param_1 + 400) - 1;
  iVar15 = *(int *)(lVar2 + 0x2c);
  iVar10 = *(int *)(lVar2 + 0x30);
  if (iVar15 < iVar10) {
    uVar13 = *(int *)(param_1 + 0x1c8) - 1;
    uVar19 = *(uint *)(lVar2 + 0x28);
    do {
      if (uVar19 <= uVar13) {
        do {
          if (*(int *)(param_1 + 0x218) != 0) {
            memset((void *)(lVar2 + 0xe0),0,(long)*(int *)(param_1 + 0x1d0) << 7);
          }
          cVar5 = (**(code **)(*(long *)(param_1 + 0x250) + 8))(param_1,lVar2 + 0x38);
          if (cVar5 == '\0') {
            *(int *)(lVar2 + 0x2c) = iVar15;
            *(uint *)(lVar2 + 0x28) = uVar19;
            return 0;
          }
          iVar10 = *(int *)(param_1 + 0x1a0);
          if (0 < iVar10) {
            lVar11 = 0;
            pvVar16 = (void *)(lVar2 + 0xe0);
            do {
              while (lVar3 = *(long *)(param_1 + 0x1a8 + lVar11 * 8),
                    *(char *)(lVar3 + 0x34) != '\0') {
                iVar7 = *(int *)(lVar3 + 0x3c);
                if (0 < iVar7) {
                  uVar1 = *(uint *)((ulong)(uVar13 <= uVar19) * 0x10 + 0x38 + lVar3);
                  if ((int)uVar1 < 1) {
                    pvVar16 = (void *)((long)pvVar16 +
                                      ((ulong)(iVar7 - 1) * 0x80 + 0x80) *
                                      (long)*(int *)(lVar3 + 0x38));
                  }
                  else {
                    lVar14 = (long)iVar15 * (long)*(int *)(lVar3 + 0x28) * 8 +
                             *(long *)(param_2 + (long)*(int *)(lVar3 + 4) * 8);
                    pcVar4 = *(code **)(*(long *)(param_1 + 600) + 8 + (long)*(int *)(lVar3 + 4) * 8
                                       );
                    iVar9 = *(int *)(lVar3 + 0x44) * uVar19;
                    iVar10 = 0;
                    do {
                      pvVar17 = pvVar16;
                      uVar18 = (ulong)uVar1;
                      iVar20 = iVar9;
                      if ((*(uint *)(param_1 + 0xa0) < uVar6) ||
                         (iVar15 + iVar10 < *(int *)(lVar3 + 0x4c))) {
                        do {
                          (*pcVar4)(param_1,lVar3,pvVar17,lVar14,iVar20);
                          iVar20 = iVar20 + *(int *)(lVar3 + 0x24);
                          pvVar17 = (void *)((long)pvVar17 + 0x80);
                          uVar18 = uVar18 - 1;
                        } while (uVar18 != 0);
                        lVar14 = lVar14 + (long)*(int *)(lVar3 + 0x28) * 8;
                        iVar7 = *(int *)(lVar3 + 0x3c);
                      }
                      pvVar16 = (void *)((long)pvVar16 + (long)*(int *)(lVar3 + 0x38) * 0x80);
                      iVar10 = iVar10 + 1;
                    } while (iVar10 < iVar7);
                    iVar10 = *(int *)(param_1 + 0x1a0);
                  }
                }
                lVar11 = lVar11 + 1;
                if (iVar10 <= lVar11) goto LAB_0037b540;
              }
              pvVar16 = (void *)((long)pvVar16 + (long)*(int *)(lVar3 + 0x40) * 0x80);
              lVar11 = lVar11 + 1;
            } while (lVar11 < iVar10);
          }
LAB_0037b540:
          uVar19 = uVar19 + 1;
        } while (uVar19 <= uVar13);
        iVar10 = *(int *)(lVar2 + 0x30);
      }
      *(undefined4 *)(lVar2 + 0x28) = 0;
      iVar15 = iVar15 + 1;
      uVar19 = 0;
    } while (iVar15 < iVar10);
  }
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
  uVar19 = *(int *)(param_1 + 0xa0) + 1;
  *(uint *)(param_1 + 0xa0) = uVar19;
  if (uVar6 < uVar19) {
    (**(code **)(*(long *)(param_1 + 0x240) + 0x18))(param_1,iVar15,iVar15);
    uVar8 = 4;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x230);
    uVar12 = 1;
    if (*(int *)(param_1 + 0x1a0) < 2) {
      uVar12 = *(undefined4 *)
                ((ulong)(*(int *)(param_1 + 400) - 1U <= uVar19) * 0x40 + 0xc +
                *(long *)(param_1 + 0x1a8));
    }
    *(undefined4 *)(lVar2 + 0x30) = uVar12;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    uVar8 = 3;
  }
  return uVar8;
}


