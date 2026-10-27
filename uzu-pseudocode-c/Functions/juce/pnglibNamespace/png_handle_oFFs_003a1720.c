// Function : png_handle_oFFs
// Namespace: juce:pnglibNamespace
// Entry    : 003a1720
// Prototype: undefined png_handle_oFFs(pnglibNamespace * param_1, long param_2, uint param_3)
// Body     : 003a1720 - 003a1915


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_handle_oFFs(juce::pnglibNamespace::png_struct_def*,
   juce::pnglibNamespace::png_info_def*, unsigned int) */

void __cdecl
juce::pnglibNamespace::png_handle_oFFs(pnglibNamespace *param_1,long param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  char *pcVar6;
  byte local_19;
  byte local_18;
  byte local_17;
  byte local_16;
  byte local_15;
  byte local_14;
  byte local_13;
  byte local_12;
  undefined1 local_11;
  
  if ((*(uint *)(param_1 + 0x4c) & 1) != 0) {
    if ((*(uint *)(param_1 + 0x4c) & 4) == 0) {
      if ((param_2 == 0) || ((*(byte *)(param_2 + 9) & 1) == 0)) {
        if (param_3 == 9) {
          if (*(code **)(param_1 + 0x20) != (code *)0x0) {
            (**(code **)(param_1 + 0x20))(param_1,&local_19,9);
            bVar1 = (~*(uint *)(param_1 + 0x50) & 0x300) != 0;
            if (((byte)param_1[0x13b] & 0x20) == 0) {
              bVar1 = (*(uint *)(param_1 + 0x50) & 0x800) == 0;
            }
            if (bVar1) {
              uVar3 = zlibNamespace::crc32_z(*(uint *)(param_1 + 0x16c),(ulong *)&local_19,9);
              *(int *)(param_1 + 0x16c) = (int)uVar3;
            }
            uVar4 = png_crc_finish(param_1,0);
            if ((int)uVar4 != 0) {
              return;
            }
            if ((local_19 & 0x80) == 0) {
              uVar2 = (uint)local_16 |
                      (uint)local_17 << 8 | (uint)local_18 << 0x10 | (uint)local_19 << 0x18;
            }
            else {
              uVar2 = -(-((uint)local_16 |
                         (uint)local_17 << 8 | (uint)local_18 << 0x10 | (uint)local_19 << 0x18) &
                       0x7fffffff);
            }
            if ((local_15 & 0x80) == 0) {
              uVar5 = (uint)local_12 |
                      (uint)local_13 << 8 | (uint)local_14 << 0x10 | (uint)local_15 << 0x18;
            }
            else {
              uVar5 = -(-((uint)local_12 |
                         (uint)local_13 << 8 | (uint)local_14 << 0x10 | (uint)local_15 << 0x18) &
                       0x7fffffff);
            }
            if (param_2 == 0) {
              return;
            }
            *(uint *)(param_2 + 0xd4) = uVar2;
            *(uint *)(param_2 + 0xd8) = uVar5;
            *(undefined1 *)(param_2 + 0xdc) = local_11;
            *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) | 1;
            return;
          }
        }
        else {
          png_crc_finish(param_1,param_3);
          if (((byte)param_1[0x52] & 0x10) != 0) {
            pcVar6 = "invalid";
            goto LAB_003a1826;
          }
        }
      }
      else {
        png_crc_finish(param_1,param_3);
        if (((byte)param_1[0x52] & 0x10) != 0) {
          pcVar6 = "duplicate";
          goto LAB_003a1826;
        }
      }
    }
    else {
      png_crc_finish(param_1,param_3);
      if (((byte)param_1[0x52] & 0x10) != 0) {
        pcVar6 = "out of place";
LAB_003a1826:
        png_chunk_warning((long)param_1,(long)pcVar6);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  png_err(param_1);
}


