// Function : png_handle_pHYs
// Namespace: juce:pnglibNamespace
// Entry    : 003a2040
// Prototype: undefined png_handle_pHYs(pnglibNamespace * param_1, long param_2, uint param_3)
// Body     : 003a2040 - 003a217f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_handle_pHYs(juce::pnglibNamespace::png_struct_def*,
   juce::pnglibNamespace::png_info_def*, unsigned int) */

void __cdecl
juce::pnglibNamespace::png_handle_pHYs(pnglibNamespace *param_1,long param_2,uint param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 local_19;
  undefined1 local_11;
  
  if ((*(uint *)(param_1 + 0x4c) & 1) != 0) {
    if ((*(uint *)(param_1 + 0x4c) & 4) == 0) {
      if ((param_2 == 0) || ((*(byte *)(param_2 + 8) & 0x80) == 0)) {
        if (param_3 == 9) {
          if (*(code **)(param_1 + 0x20) != (code *)0x0) {
            (**(code **)(param_1 + 0x20))(param_1,&local_19,9);
            bVar1 = (~*(uint *)(param_1 + 0x50) & 0x300) != 0;
            if (((byte)param_1[0x13b] & 0x20) == 0) {
              bVar1 = (*(uint *)(param_1 + 0x50) & 0x800) == 0;
            }
            if (bVar1) {
              uVar2 = zlibNamespace::crc32_z(*(uint *)(param_1 + 0x16c),&local_19,9);
              *(int *)(param_1 + 0x16c) = (int)uVar2;
            }
            uVar3 = png_crc_finish(param_1,0);
            if ((param_2 != 0) && ((int)uVar3 == 0)) {
              *(uint *)(param_2 + 0xe0) =
                   (uint)local_19 >> 0x18 | ((uint)local_19 & 0xff0000) >> 8 |
                   ((uint)local_19 & 0xff00) << 8 | (uint)local_19 << 0x18;
              *(uint *)(param_2 + 0xe4) =
                   local_19._4_4_ >> 0x18 | (local_19._4_4_ & 0xff0000) >> 8 |
                   (local_19._4_4_ & 0xff00) << 8 | local_19._4_4_ << 0x18;
              *(undefined1 *)(param_2 + 0xe8) = local_11;
              *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) | 0x80;
            }
            return;
          }
        }
        else {
          png_crc_finish(param_1,param_3);
          if (((byte)param_1[0x52] & 0x10) != 0) {
            pcVar4 = "invalid";
            goto LAB_003a2169;
          }
        }
      }
      else {
        png_crc_finish(param_1,param_3);
        if (((byte)param_1[0x52] & 0x10) != 0) {
          pcVar4 = "duplicate";
          goto LAB_003a2169;
        }
      }
    }
    else {
      png_crc_finish(param_1,param_3);
      if (((byte)param_1[0x52] & 0x10) != 0) {
        pcVar4 = "out of place";
LAB_003a2169:
        png_chunk_warning((long)param_1,(long)pcVar4);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  png_err(param_1);
}


