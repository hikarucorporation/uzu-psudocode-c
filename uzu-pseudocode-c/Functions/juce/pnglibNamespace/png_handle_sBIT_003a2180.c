// Function : png_handle_sBIT
// Namespace: juce:pnglibNamespace
// Entry    : 003a2180
// Prototype: undefined png_handle_sBIT(pnglibNamespace * param_1, long param_2, uint param_3)
// Body     : 003a2180 - 003a2410


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_handle_sBIT(juce::pnglibNamespace::png_struct_def*,
   juce::pnglibNamespace::png_info_def*, unsigned int) */

void __cdecl
juce::pnglibNamespace::png_handle_sBIT(pnglibNamespace *param_1,long param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  pnglibNamespace *ppVar5;
  ulong uVar6;
  ulong *puVar7;
  char *pcVar8;
  pnglibNamespace pVar9;
  ulong uVar10;
  undefined8 local_48;
  ulong local_40;
  long local_38;
  
  puVar7 = &local_48;
  if ((*(uint *)(param_1 + 0x4c) & 1) != 0) {
    if ((*(uint *)(param_1 + 0x4c) & 6) == 0) {
      if ((param_2 == 0) || ((*(byte *)(param_2 + 8) & 2) == 0)) {
        if (param_1[0x187] == (pnglibNamespace)0x3) {
          pVar9 = (pnglibNamespace)0x8;
          uVar2 = 3;
        }
        else {
          uVar2 = (uint)(byte)param_1[0x18b];
          pVar9 = param_1[0x188];
        }
        if ((param_3 < 5) && (uVar2 == param_3)) {
          local_48._0_4_ = (uint)(byte)pVar9 * 0x1010101;
          if (*(code **)(param_1 + 0x20) != (code *)0x0) {
            uVar10 = (ulong)param_3;
            (**(code **)(param_1 + 0x20))(param_1,&local_48,uVar10);
            bVar1 = (~*(uint *)(param_1 + 0x50) & 0x300) != 0;
            if (((byte)param_1[0x13b] & 0x20) == 0) {
              bVar1 = (*(uint *)(param_1 + 0x50) & 0x800) == 0;
            }
            if ((param_3 != 0) && (bVar1)) {
              uVar3 = (ulong)*(uint *)(param_1 + 0x16c);
              local_48._7_1_ = pVar9;
              local_40 = uVar10;
              local_38 = param_2;
              do {
                uVar6 = uVar10 & 0xffffffff;
                if ((int)uVar10 == 0) {
                  uVar6 = 0xffffffff;
                }
                uVar3 = zlibNamespace::crc32_z((uint)uVar3,puVar7,uVar6);
                puVar7 = (ulong *)((long)puVar7 + uVar6);
                uVar10 = uVar10 - uVar6;
              } while (uVar10 != 0);
              *(int *)(param_1 + 0x16c) = (int)uVar3;
              param_2 = local_38;
              uVar10 = local_40;
              pVar9 = local_48._7_1_;
            }
            uVar4 = png_crc_finish(param_1,0);
            if ((int)uVar4 == 0) {
              if (param_3 != 0) {
                uVar3 = 0;
                do {
                  if ((*(pnglibNamespace *)((long)&local_48 + uVar3) == (pnglibNamespace)0x0) ||
                     ((byte)pVar9 < (byte)*(pnglibNamespace *)((long)&local_48 + uVar3))) {
                    if (((byte)param_1[0x52] & 0x10) != 0) {
                      png_chunk_warning((long)param_1,0x5e4488);
                      return;
                    }
                    goto LAB_003a2409;
                  }
                  uVar3 = uVar3 + 1;
                } while (uVar10 != uVar3);
              }
              if (((byte)param_1[0x187] & 2) == 0) {
                ppVar5 = (pnglibNamespace *)((long)&local_48 + 1);
                param_1[0x1fb] = local_48._0_1_;
                local_48._2_1_ = local_48._0_1_;
                local_48._1_1_ = local_48._0_1_;
              }
              else {
                ppVar5 = (pnglibNamespace *)((long)&local_48 + 3);
              }
              pVar9 = *ppVar5;
              param_1[0x1f8] = local_48._0_1_;
              param_1[0x1f9] = local_48._1_1_;
              param_1[0x1fa] = local_48._2_1_;
              param_1[0x1fc] = pVar9;
              if (param_2 != 0) {
                *(pnglibNamespace *)(param_2 + 0xb4) = param_1[0x1fc];
                *(undefined4 *)(param_2 + 0xb0) = *(undefined4 *)(param_1 + 0x1f8);
                *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 2;
              }
            }
            return;
          }
        }
        else if (((byte)param_1[0x52] & 0x10) != 0) {
          png_chunk_warning((long)param_1,0x5e4488);
          png_crc_finish(param_1,param_3);
          return;
        }
      }
      else {
        png_crc_finish(param_1,param_3);
        if (((byte)param_1[0x52] & 0x10) != 0) {
          pcVar8 = "duplicate";
          goto LAB_003a21c0;
        }
      }
    }
    else {
      png_crc_finish(param_1,param_3);
      if (((byte)param_1[0x52] & 0x10) != 0) {
        pcVar8 = "out of place";
LAB_003a21c0:
        png_chunk_warning((long)param_1,(long)pcVar8);
        return;
      }
    }
  }
LAB_003a2409:
                    /* WARNING: Subroutine does not return */
  png_err(param_1);
}


