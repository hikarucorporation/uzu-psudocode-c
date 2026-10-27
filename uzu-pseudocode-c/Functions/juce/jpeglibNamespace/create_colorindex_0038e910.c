// Function : create_colorindex
// Namespace: juce:jpeglibNamespace
// Entry    : 0038e910
// Prototype: undefined create_colorindex(long param_1)
// Body     : 0038e910 - 0038eabf


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::create_colorindex(juce::jpeglibNamespace::jpeg_decompress_struct*) */

void __cdecl juce::jpeglibNamespace::create_colorindex(long param_1)

{
  long *plVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 uVar11;
  undefined8 uVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  
  lVar4 = *(long *)(param_1 + 0x270);
  iVar3 = *(int *)(param_1 + 100);
  *(bool *)(lVar4 + 0x38) = iVar3 == 1;
  uVar12 = 0x100;
  if (iVar3 == 1) {
    uVar12 = 0x2fe;
  }
  uVar12 = (**(code **)(*(long *)(param_1 + 8) + 0x10))(param_1,1,uVar12);
  *(undefined8 *)(lVar4 + 0x30) = uVar12;
  if (0 < *(int *)(param_1 + 0x7c)) {
    iVar7 = *(int *)(lVar4 + 0x28);
    lVar16 = 0;
    do {
      iVar13 = *(int *)(lVar4 + 0x3c + lVar16 * 4);
      iVar7 = iVar7 / iVar13;
      if (iVar3 == 1) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x30) + lVar16 * 8);
        *plVar1 = *plVar1 + 0xff;
      }
      puVar5 = *(undefined1 **)(*(long *)(lVar4 + 0x30) + lVar16 * 8);
      lVar10 = (long)iVar13 + -1;
      uVar17 = (long)iVar13 + 0xfe;
      uVar6 = (int)lVar10 * 2;
      uVar14 = (ulong)(int)uVar6;
      if ((uVar17 | uVar14) >> 0x20 == 0) {
        uVar17 = (uVar17 & 0xffffffff) / (ulong)uVar6;
      }
      else {
        uVar17 = (long)uVar17 / (long)uVar14;
      }
      lVar9 = 0;
      iVar13 = 0;
      do {
        if ((int)uVar17 < lVar9) {
          iVar15 = iVar13 * 2 + 3;
          do {
            uVar17 = (long)iVar15 * 0xff + lVar10;
            if ((uVar17 | uVar14) >> 0x20 == 0) {
              uVar17 = (uVar17 & 0xffffffff) / (ulong)uVar6;
            }
            else {
              uVar17 = (long)uVar17 / (long)uVar14;
            }
            iVar13 = iVar13 + 1;
            iVar15 = iVar15 + 2;
          } while ((int)uVar17 < lVar9);
        }
        puVar5[lVar9] = (char)iVar13 * (char)iVar7;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x100);
      if (iVar3 == 1) {
        uVar11 = *puVar5;
        puVar8 = puVar5 + -1;
        lVar10 = 0x101;
        while( true ) {
          *puVar8 = uVar11;
          uVar2 = puVar5[0xff];
          puVar5[lVar10 + -1] = uVar2;
          if (lVar10 == 0x1ff) break;
          uVar11 = *puVar5;
          puVar8[-1] = uVar11;
          puVar5[lVar10] = uVar2;
          puVar8 = puVar8 + -2;
          lVar10 = lVar10 + 2;
        }
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < *(int *)(param_1 + 0x7c));
  }
  return;
}


