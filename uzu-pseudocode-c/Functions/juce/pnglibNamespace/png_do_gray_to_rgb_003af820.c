// Function : png_do_gray_to_rgb
// Namespace: juce:pnglibNamespace
// Entry    : 003af820
// Prototype: undefined png_do_gray_to_rgb(uint * param_1, long param_2)
// Body     : 003af820 - 003afb2b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_do_gray_to_rgb(juce::pnglibNamespace::png_row_info_struct*, unsigned
   char*) */

void __cdecl juce::pnglibNamespace::png_do_gray_to_rgb(uint *param_1,long param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  undefined1 *puVar5;
  ulong uVar6;
  char cVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  
  bVar4 = *(byte *)((long)param_1 + 0x11);
  if (bVar4 < 8) {
    return;
  }
  bVar2 = (byte)param_1[4];
  if ((bVar2 & 2) != 0) {
    return;
  }
  uVar3 = *param_1;
  uVar11 = (ulong)uVar3;
  if (bVar2 == 0) {
    if (bVar4 == 8) {
      if (uVar11 != 0) {
        puVar8 = (undefined1 *)(param_2 + uVar11 + -1);
        puVar5 = puVar8 + uVar11 * 2;
        if (uVar3 != 1) {
          uVar9 = (uVar3 - 2 >> 1) + 1;
          if (1 < uVar3 - 2) {
            uVar10 = uVar9 & 0xfffffffe;
            do {
              *puVar5 = *puVar8;
              puVar5[-1] = *puVar8;
              puVar5[-2] = *puVar8;
              puVar5[-3] = puVar8[-1];
              puVar5[-4] = puVar8[-1];
              puVar5[-5] = puVar8[-1];
              puVar5[-6] = puVar8[-2];
              puVar5[-7] = puVar8[-2];
              puVar5[-8] = puVar8[-2];
              puVar5[-9] = puVar8[-3];
              puVar5[-10] = puVar8[-3];
              puVar1 = puVar8 + -3;
              puVar8 = puVar8 + -4;
              puVar5[-0xb] = *puVar1;
              puVar5 = puVar5 + -0xc;
              uVar10 = uVar10 - 2;
            } while (uVar10 != 0);
          }
          if ((uVar9 & 1) != 0) {
            *puVar5 = *puVar8;
            puVar5[-1] = *puVar8;
            puVar5[-2] = *puVar8;
            puVar5[-3] = puVar8[-1];
            puVar5[-4] = puVar8[-1];
            puVar1 = puVar8 + -1;
            puVar8 = puVar8 + -2;
            puVar5[-5] = *puVar1;
            puVar5 = puVar5 + -6;
          }
          if ((uVar3 & 1) == 0) goto LAB_003afaf3;
        }
        *puVar5 = *puVar8;
        puVar5[-1] = *puVar8;
        puVar5[-2] = *puVar8;
      }
    }
    else if (uVar11 != 0) {
      puVar8 = (undefined1 *)(param_2 + uVar11 * 2 + -1);
      puVar5 = puVar8 + uVar11 * 4;
      if (uVar3 != 1) {
        uVar9 = uVar3 & 0xfffffffe;
        do {
          *puVar5 = *puVar8;
          puVar5[-1] = puVar8[-1];
          puVar5[-2] = *puVar8;
          puVar5[-3] = puVar8[-1];
          puVar5[-4] = *puVar8;
          puVar5[-5] = puVar8[-1];
          puVar5[-6] = puVar8[-2];
          puVar5[-7] = puVar8[-3];
          puVar5[-8] = puVar8[-2];
          puVar5[-9] = puVar8[-3];
          puVar5[-10] = puVar8[-2];
          puVar1 = puVar8 + -3;
          puVar8 = puVar8 + -4;
          puVar5[-0xb] = *puVar1;
          puVar5 = puVar5 + -0xc;
          uVar9 = uVar9 - 2;
        } while (uVar9 != 0);
        if ((uVar3 & 1) == 0) goto LAB_003afaf3;
      }
      *puVar5 = *puVar8;
      puVar5[-1] = puVar8[-1];
      puVar5[-2] = *puVar8;
      puVar5[-3] = puVar8[-1];
      puVar5[-4] = *puVar8;
      puVar5[-5] = puVar8[-1];
    }
  }
  else if (bVar2 == 4) {
    if (bVar4 == 8) {
      if (uVar11 != 0) {
        puVar8 = (undefined1 *)(param_2 + uVar11 * 2 + -1);
        puVar5 = puVar8 + uVar11 * 2;
        if (uVar3 != 1) {
          uVar9 = uVar3 & 0xfffffffe;
          do {
            *puVar5 = *puVar8;
            puVar5[-1] = puVar8[-1];
            puVar5[-2] = puVar8[-1];
            puVar5[-3] = puVar8[-1];
            puVar5[-4] = puVar8[-2];
            puVar5[-5] = puVar8[-3];
            puVar5[-6] = puVar8[-3];
            puVar1 = puVar8 + -3;
            puVar8 = puVar8 + -4;
            puVar5[-7] = *puVar1;
            puVar5 = puVar5 + -8;
            uVar9 = uVar9 - 2;
          } while (uVar9 != 0);
          if ((uVar3 & 1) == 0) goto LAB_003afaf3;
        }
        *puVar5 = *puVar8;
        puVar5[-1] = puVar8[-1];
        puVar5[-2] = puVar8[-1];
        puVar5[-3] = puVar8[-1];
      }
    }
    else if (uVar11 != 0) {
      uVar6 = uVar11;
      do {
        *(undefined1 *)(param_2 + -1 + uVar6 * 8) = *(undefined1 *)(param_2 + -1 + uVar6 * 4);
        *(undefined1 *)(param_2 + -2 + uVar6 * 8) = *(undefined1 *)(param_2 + -2 + uVar6 * 4);
        *(undefined1 *)(param_2 + -3 + uVar6 * 8) = *(undefined1 *)(param_2 + -3 + uVar6 * 4);
        *(undefined1 *)(param_2 + -4 + uVar6 * 8) = *(undefined1 *)(param_2 + -4 + uVar6 * 4);
        *(undefined1 *)(param_2 + -5 + uVar6 * 8) = *(undefined1 *)(param_2 + -3 + uVar6 * 4);
        *(undefined1 *)(param_2 + -6 + uVar6 * 8) = *(undefined1 *)(param_2 + -4 + uVar6 * 4);
        *(undefined1 *)(param_2 + -7 + uVar6 * 8) = *(undefined1 *)(param_2 + -3 + uVar6 * 4);
        *(undefined1 *)(param_2 + -8 + uVar6 * 8) = *(undefined1 *)(param_2 + -4 + uVar6 * 4);
        uVar6 = uVar6 - 1;
      } while ((int)uVar6 != 0);
    }
  }
LAB_003afaf3:
  cVar7 = *(char *)((long)param_1 + 0x12) + '\x02';
  *(char *)((long)param_1 + 0x12) = cVar7;
  *(byte *)(param_1 + 4) = (byte)param_1[4] | 2;
  bVar4 = *(char *)((long)param_1 + 0x11) * cVar7;
  *(byte *)((long)param_1 + 0x13) = bVar4;
  if (bVar4 < 8) {
    uVar11 = uVar11 * bVar4 + 7 >> 3;
  }
  else {
    uVar11 = uVar11 * (bVar4 >> 3);
  }
  *(ulong *)(param_1 + 2) = uVar11;
  return;
}


