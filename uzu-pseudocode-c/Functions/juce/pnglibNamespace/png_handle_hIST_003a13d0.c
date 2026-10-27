// Function : png_handle_hIST
// Namespace: juce:pnglibNamespace
// Entry    : 003a13d0
// Prototype: undefined png_handle_hIST(pnglibNamespace * param_1, long param_2, uint param_3)
// Body     : 003a13d0 - 003a171e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_handle_hIST(juce::pnglibNamespace::png_struct_def*,
   juce::pnglibNamespace::png_info_def*, unsigned int) */

void __cdecl
juce::pnglibNamespace::png_handle_hIST(pnglibNamespace *param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 uVar8;
  void *pvVar9;
  ulong uVar10;
  long lVar11;
  char *pcVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ushort local_22a;
  ushort auStack_228 [4];
  undefined8 auStack_220 [63];
  
  if ((*(uint *)(param_1 + 0x4c) & 1) != 0) {
    if ((*(uint *)(param_1 + 0x4c) & 6) == 2) {
      if ((param_2 == 0) || ((*(byte *)(param_2 + 8) & 0x40) == 0)) {
        if ((param_3 < 0x202) && (uVar7 = param_3 >> 1, uVar7 == *(ushort *)(param_1 + 0x178))) {
          if (1 < param_3) {
            uVar16 = 1;
            if (1 < uVar7) {
              uVar16 = (ulong)uVar7;
            }
            uVar10 = 0;
            do {
              if (*(code **)(param_1 + 0x20) == (code *)0x0) goto LAB_003a1717;
              (**(code **)(param_1 + 0x20))(param_1,&local_22a,2);
              bVar4 = (~*(uint *)(param_1 + 0x50) & 0x300) != 0;
              if (((byte)param_1[0x13b] & 0x20) == 0) {
                bVar4 = (*(uint *)(param_1 + 0x50) & 0x800) == 0;
              }
              if (bVar4) {
                uVar14 = zlibNamespace::crc32_z(*(uint *)(param_1 + 0x16c),(ulong *)&local_22a,2);
                *(int *)(param_1 + 0x16c) = (int)uVar14;
              }
              auStack_228[uVar10] = local_22a << 8 | local_22a >> 8;
              uVar10 = uVar10 + 1;
            } while (uVar16 != uVar10);
          }
          uVar8 = png_crc_finish(param_1,0);
          if ((int)uVar8 != 0) {
            return;
          }
          if (param_1 == (pnglibNamespace *)0x0) {
            return;
          }
          if (param_2 == 0) {
            return;
          }
          if ((*(int *)(param_2 + 0x20) - 0x101U & 0xffff) < 0xff00) {
            pcVar12 = "Invalid palette size, hIST allocation skipped";
          }
          else {
            uVar7 = *(uint *)(param_2 + 0x11c);
            if ((uVar7 & 8) != 0) {
              if (*(void **)(param_2 + 0xf0) != (void *)0x0) {
                free(*(void **)(param_2 + 0xf0));
                uVar7 = *(uint *)(param_2 + 0x11c);
              }
              *(undefined8 *)(param_2 + 0xf0) = 0;
              *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xbf;
            }
            *(uint *)(param_2 + 0x11c) = uVar7 & 0xfffffff7;
            pvVar9 = malloc(0x200);
            if (pvVar9 != (void *)0x0) {
              *(void **)(param_2 + 0xf0) = pvVar9;
              *(uint *)(param_2 + 0x11c) = uVar7 | 8;
              uVar3 = *(ushort *)(param_2 + 0x20);
              uVar16 = (ulong)uVar3;
              if (uVar16 != 0) {
                if (uVar3 < 0x10) {
                  uVar10 = 0;
                }
                else {
                  uVar10 = (ulong)(uVar3 & 0xfffffff0);
                  uVar14 = (uVar10 - 0x10 >> 4) + 1;
                  uVar15 = (ulong)((uint)uVar14 & 3);
                  if (uVar10 - 0x10 < 0x30) {
                    lVar11 = 0;
                  }
                  else {
                    uVar14 = uVar14 & 0xfffffffffffffffc;
                    lVar11 = 0;
                    do {
                      uVar8 = *(undefined8 *)((long)auStack_220 + lVar11 * 2);
                      uVar5 = *(undefined8 *)((long)auStack_220 + lVar11 * 2 + 8);
                      uVar6 = *(undefined8 *)((long)auStack_220 + lVar11 * 2 + 0x10);
                      puVar2 = (undefined8 *)((long)pvVar9 + lVar11 * 2);
                      *puVar2 = *(undefined8 *)(auStack_228 + lVar11);
                      puVar2[1] = uVar8;
                      puVar2 = (undefined8 *)((long)pvVar9 + lVar11 * 2 + 0x10);
                      *puVar2 = uVar5;
                      puVar2[1] = uVar6;
                      uVar8 = *(undefined8 *)((long)auStack_220 + lVar11 * 2 + 0x20);
                      uVar5 = *(undefined8 *)((long)auStack_220 + lVar11 * 2 + 0x28);
                      uVar6 = *(undefined8 *)((long)auStack_220 + lVar11 * 2 + 0x30);
                      puVar2 = (undefined8 *)((long)pvVar9 + lVar11 * 2 + 0x20);
                      *puVar2 = *(undefined8 *)((long)auStack_220 + lVar11 * 2 + 0x18);
                      puVar2[1] = uVar8;
                      puVar2 = (undefined8 *)((long)pvVar9 + lVar11 * 2 + 0x30);
                      *puVar2 = uVar5;
                      puVar2[1] = uVar6;
                      uVar8 = *(undefined8 *)((long)auStack_220 + lVar11 * 2 + 0x40);
                      uVar5 = *(undefined8 *)((long)auStack_220 + lVar11 * 2 + 0x48);
                      uVar6 = *(undefined8 *)((long)auStack_220 + lVar11 * 2 + 0x50);
                      puVar2 = (undefined8 *)((long)pvVar9 + lVar11 * 2 + 0x40);
                      *puVar2 = *(undefined8 *)((long)auStack_220 + lVar11 * 2 + 0x38);
                      puVar2[1] = uVar8;
                      puVar2 = (undefined8 *)((long)pvVar9 + lVar11 * 2 + 0x50);
                      *puVar2 = uVar5;
                      puVar2[1] = uVar6;
                      uVar8 = *(undefined8 *)((long)auStack_220 + lVar11 * 2 + 0x60);
                      uVar5 = *(undefined8 *)((long)auStack_220 + lVar11 * 2 + 0x68);
                      uVar6 = *(undefined8 *)((long)auStack_220 + lVar11 * 2 + 0x70);
                      puVar2 = (undefined8 *)((long)pvVar9 + lVar11 * 2 + 0x60);
                      *puVar2 = *(undefined8 *)((long)auStack_220 + lVar11 * 2 + 0x58);
                      puVar2[1] = uVar8;
                      puVar2 = (undefined8 *)((long)pvVar9 + lVar11 * 2 + 0x70);
                      *puVar2 = uVar5;
                      puVar2[1] = uVar6;
                      lVar11 = lVar11 + 0x40;
                      uVar14 = uVar14 - 4;
                    } while (uVar14 != 0);
                  }
                  if (uVar15 != 0) {
                    lVar13 = 0;
                    do {
                      puVar1 = (undefined8 *)((long)auStack_228 + lVar13 + lVar11 * 2);
                      uVar8 = puVar1[1];
                      puVar2 = (undefined8 *)((long)auStack_220 + lVar13 + lVar11 * 2 + 8);
                      uVar5 = *puVar2;
                      uVar6 = puVar2[1];
                      puVar2 = (undefined8 *)((long)pvVar9 + lVar13 + lVar11 * 2);
                      *puVar2 = *puVar1;
                      puVar2[1] = uVar8;
                      puVar2 = (undefined8 *)((long)pvVar9 + lVar13 + lVar11 * 2 + 0x10);
                      *puVar2 = uVar5;
                      puVar2[1] = uVar6;
                      lVar13 = lVar13 + 0x20;
                    } while (uVar15 * 0x20 != lVar13);
                  }
                  if (uVar10 == uVar16) goto LAB_003a170d;
                }
                do {
                  *(ushort *)((long)pvVar9 + uVar10 * 2) = auStack_228[uVar10];
                  uVar10 = uVar10 + 1;
                } while (uVar10 < uVar16);
              }
LAB_003a170d:
              *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 0x40;
              return;
            }
            png_warning((long)param_1,"Out of memory");
            *(undefined8 *)(param_2 + 0xf0) = 0;
            pcVar12 = "Insufficient memory for hIST chunk data";
          }
          png_warning((long)param_1,pcVar12);
          return;
        }
        png_crc_finish(param_1,param_3);
        if (((byte)param_1[0x52] & 0x10) != 0) {
          pcVar12 = "invalid";
          goto LAB_003a14a5;
        }
      }
      else {
        png_crc_finish(param_1,param_3);
        if (((byte)param_1[0x52] & 0x10) != 0) {
          pcVar12 = "duplicate";
          goto LAB_003a14a5;
        }
      }
    }
    else {
      png_crc_finish(param_1,param_3);
      if (((byte)param_1[0x52] & 0x10) != 0) {
        pcVar12 = "out of place";
LAB_003a14a5:
        png_chunk_warning((long)param_1,(long)pcVar12);
        return;
      }
    }
  }
LAB_003a1717:
                    /* WARNING: Subroutine does not return */
  png_err(param_1);
}


