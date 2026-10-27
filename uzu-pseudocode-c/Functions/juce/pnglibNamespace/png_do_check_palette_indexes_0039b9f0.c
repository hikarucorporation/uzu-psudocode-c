// Function : png_do_check_palette_indexes
// Namespace: juce:pnglibNamespace
// Entry    : 0039b9f0
// Prototype: undefined png_do_check_palette_indexes(long param_1, undefined4 * param_2)
// Body     : 0039b9f0 - 0039bde1


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_do_check_palette_indexes(juce::pnglibNamespace::png_struct_def*,
   juce::pnglibNamespace::png_row_info_struct*) */

void __cdecl juce::pnglibNamespace::png_do_check_palette_indexes(long param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  
  bVar1 = *(byte *)((long)param_2 + 0x11);
  if (((*(ushort *)(param_1 + 0x178) != 0) &&
      ((int)(uint)*(ushort *)(param_1 + 0x178) < 1 << (bVar1 & 0x1f))) && ((byte)(bVar1 - 1) < 8)) {
    bVar4 = -(*(char *)((long)param_2 + 0x13) * (char)*param_2);
    pbVar2 = *(byte **)(param_1 + 0x148);
    uVar3 = *(ulong *)(param_2 + 2);
    pbVar15 = pbVar2 + (uVar3 - 1);
    switch(bVar1) {
    case 1:
      if (pbVar2 < pbVar15) {
        if (*pbVar15 >> (bVar4 & 7) != 0) {
          *(undefined4 *)(param_1 + 0x17c) = 1;
        }
        pbVar15 = pbVar2 + (uVar3 - 2);
        if (pbVar2 < pbVar15) {
          uVar14 = (int)uVar3 + 2;
          uVar10 = (ulong)uVar14 & 3;
          if ((uVar14 & 3) != 0) {
            do {
              if (*pbVar15 != 0) {
                *(undefined4 *)(param_1 + 0x17c) = 1;
              }
              pbVar15 = pbVar15 + -1;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          if (2 < uVar3 - 3) {
            do {
              if (*pbVar15 != 0) {
                *(undefined4 *)(param_1 + 0x17c) = 1;
              }
              if (pbVar15[-1] != 0) {
                *(undefined4 *)(param_1 + 0x17c) = 1;
              }
              if (pbVar15[-2] != 0) {
                *(undefined4 *)(param_1 + 0x17c) = 1;
              }
              if (pbVar15[-3] != 0) {
                *(undefined4 *)(param_1 + 0x17c) = 1;
              }
              pbVar15 = pbVar15 + -4;
            } while (pbVar2 < pbVar15);
          }
        }
      }
      break;
    case 2:
      if (pbVar2 < pbVar15) {
        bVar1 = *pbVar15 >> (bVar4 & 7);
        uVar14 = *(uint *)(param_1 + 0x17c);
        uVar13 = bVar1 & 3;
        uVar9 = uVar14;
        if ((int)uVar14 < (int)uVar13) {
          uVar9 = uVar13;
        }
        uVar7 = bVar1 >> 2 & 3;
        uVar8 = uVar9;
        if (uVar9 < uVar7) {
          uVar8 = uVar7;
        }
        uVar11 = bVar1 >> 4 & 3;
        uVar6 = uVar8;
        if (uVar8 < uVar11) {
          uVar6 = uVar11;
        }
        uVar12 = (uint)(bVar1 >> 6);
        uVar5 = uVar6;
        if (uVar6 < uVar12) {
          uVar5 = uVar12;
        }
        if (((((int)uVar14 < (int)uVar13) || (uVar9 < uVar7)) || (uVar8 < uVar11)) ||
           (uVar6 < uVar12)) {
          *(uint *)(param_1 + 0x17c) = uVar5;
        }
        for (pbVar15 = pbVar2 + (uVar3 - 2); pbVar2 < pbVar15; pbVar15 = pbVar15 + -1) {
          bVar1 = *pbVar15;
          uVar9 = bVar1 & 3;
          uVar14 = uVar9;
          if (uVar9 <= uVar5) {
            uVar14 = uVar5;
          }
          uVar8 = bVar1 >> 2 & 3;
          uVar13 = uVar8;
          if ((int)uVar8 <= (int)uVar14) {
            uVar13 = uVar14;
          }
          uVar7 = bVar1 >> 4 & 3;
          if (uVar13 < uVar7) {
            uVar12 = (uint)(bVar1 >> 6);
            uVar11 = (uint)(bVar1 >> 6);
            uVar6 = uVar7;
            if (uVar11 <= uVar7) goto LAB_0039bbed;
LAB_0039bbd6:
            if (uVar9 <= uVar5) goto LAB_0039bbf5;
LAB_0039bb80:
            *(uint *)(param_1 + 0x17c) = uVar11;
          }
          else {
            uVar12 = (uint)(bVar1 >> 6);
            uVar11 = (uint)(bVar1 >> 6);
            uVar6 = uVar13;
            if (uVar13 < uVar11) goto LAB_0039bbd6;
LAB_0039bbed:
            uVar11 = uVar6;
            uVar6 = uVar11;
            if (uVar5 < uVar9) goto LAB_0039bb80;
LAB_0039bbf5:
            if ((((int)uVar14 < (int)uVar8) || (uVar13 < uVar7)) || (uVar6 < uVar12))
            goto LAB_0039bb80;
          }
          uVar5 = uVar11;
        }
      }
      break;
    case 4:
      if (pbVar2 < pbVar15) {
        bVar1 = *pbVar15 >> (bVar4 & 7);
        uVar14 = *(uint *)(param_1 + 0x17c);
        uVar13 = bVar1 & 0xf;
        uVar9 = uVar14;
        if ((int)uVar14 < (int)uVar13) {
          uVar9 = uVar13;
        }
        uVar7 = (uint)(bVar1 >> 4);
        uVar8 = uVar9;
        if (uVar9 < uVar7) {
          uVar8 = uVar7;
        }
        if (((int)uVar14 < (int)uVar13) || (uVar9 < uVar7)) {
          *(uint *)(param_1 + 0x17c) = uVar8;
        }
        pbVar15 = pbVar2 + (uVar3 - 2);
        if (pbVar2 < pbVar15) {
          if ((uVar3 & 1) != 0) {
            uVar9 = *pbVar15 & 0xf;
            uVar14 = uVar8;
            if (uVar8 < uVar9) {
              uVar14 = uVar9;
            }
            bVar1 = *pbVar15 >> 4;
            uVar13 = uVar14;
            if ((int)uVar14 < (int)(uint)bVar1) {
              uVar13 = (uint)bVar1;
            }
            if ((uVar8 < uVar9) || ((int)uVar14 < (int)(uint)bVar1)) {
              *(uint *)(param_1 + 0x17c) = uVar13;
            }
            pbVar15 = pbVar2 + (uVar3 - 3);
            uVar8 = uVar13;
          }
          if (uVar3 != 3) {
            do {
              bVar1 = *pbVar15;
              uVar14 = bVar1 & 0xf;
              if (uVar8 < uVar14) {
                uVar13 = (uint)(bVar1 >> 4);
                uVar9 = uVar14;
                if (uVar13 <= uVar14) goto LAB_0039bd8b;
LAB_0039bd76:
                uVar7 = uVar13;
                if (uVar14 <= uVar8) goto LAB_0039bd91;
LAB_0039bd95:
                *(uint *)(param_1 + 0x17c) = uVar7;
              }
              else {
                uVar13 = (uint)(bVar1 >> 4);
                uVar9 = uVar8;
                if ((int)uVar8 < (int)uVar13) goto LAB_0039bd76;
LAB_0039bd8b:
                uVar7 = uVar9;
                if (uVar8 < uVar14) goto LAB_0039bd95;
LAB_0039bd91:
                if ((int)uVar9 < (int)uVar13) goto LAB_0039bd95;
              }
              bVar1 = pbVar15[-1];
              uVar14 = bVar1 & 0xf;
              if (uVar7 < uVar14) {
                uVar13 = (uint)(bVar1 >> 4);
                uVar9 = uVar14;
                if (uVar13 <= uVar14) goto LAB_0039bdcb;
LAB_0039bdb3:
                uVar8 = uVar13;
                if (uVar14 <= uVar7) goto LAB_0039bdd5;
LAB_0039bd50:
                *(uint *)(param_1 + 0x17c) = uVar8;
              }
              else {
                uVar13 = (uint)(bVar1 >> 4);
                uVar9 = uVar7;
                if ((int)uVar7 < (int)uVar13) goto LAB_0039bdb3;
LAB_0039bdcb:
                uVar8 = uVar9;
                if (uVar7 < uVar14) goto LAB_0039bd50;
LAB_0039bdd5:
                if ((int)uVar9 < (int)uVar13) goto LAB_0039bd50;
              }
              pbVar15 = pbVar15 + -2;
            } while (pbVar2 < pbVar15);
          }
        }
      }
      break;
    case 8:
      if (pbVar2 < pbVar15) {
        uVar14 = *(uint *)(param_1 + 0x17c);
        uVar9 = (int)uVar3 - 1;
        uVar10 = (ulong)uVar9 & 3;
        if ((uVar9 & 3) != 0) {
          do {
            if ((int)uVar14 < (int)(uint)*pbVar15) {
              uVar14 = (uint)*pbVar15;
              *(uint *)(param_1 + 0x17c) = uVar14;
            }
            pbVar15 = pbVar15 + -1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        if (2 < uVar3 - 2) {
          do {
            if ((int)uVar14 < (int)(uint)*pbVar15) {
              uVar14 = (uint)*pbVar15;
              *(uint *)(param_1 + 0x17c) = uVar14;
              bVar1 = pbVar15[-1];
              if (bVar1 <= uVar14) goto LAB_0039bccc;
LAB_0039bcf0:
              uVar14 = (uint)bVar1;
              *(uint *)(param_1 + 0x17c) = uVar14;
              bVar1 = pbVar15[-2];
              if (bVar1 <= uVar14) goto LAB_0039bcd4;
LAB_0039bd00:
              uVar14 = (uint)bVar1;
              *(uint *)(param_1 + 0x17c) = uVar14;
              bVar1 = pbVar15[-3];
              if (uVar14 < bVar1) goto LAB_0039bd10;
            }
            else {
              bVar1 = pbVar15[-1];
              if ((int)uVar14 < (int)(uint)bVar1) goto LAB_0039bcf0;
LAB_0039bccc:
              bVar1 = pbVar15[-2];
              if ((int)uVar14 < (int)(uint)bVar1) goto LAB_0039bd00;
LAB_0039bcd4:
              bVar1 = pbVar15[-3];
              if ((int)uVar14 < (int)(uint)bVar1) {
LAB_0039bd10:
                uVar14 = (uint)bVar1;
                *(uint *)(param_1 + 0x17c) = uVar14;
              }
            }
            pbVar15 = pbVar15 + -4;
          } while (pbVar2 < pbVar15);
        }
      }
    }
  }
  return;
}


