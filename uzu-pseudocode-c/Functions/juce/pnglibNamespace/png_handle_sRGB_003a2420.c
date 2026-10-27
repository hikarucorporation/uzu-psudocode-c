// Function : png_handle_sRGB
// Namespace: juce:pnglibNamespace
// Entry    : 003a2420
// Prototype: undefined png_handle_sRGB(pnglibNamespace * param_1, long param_2, uint param_3)
// Body     : 003a2420 - 003a256a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_handle_sRGB(juce::pnglibNamespace::png_struct_def*,
   juce::pnglibNamespace::png_info_def*, unsigned int) */

void __cdecl
juce::pnglibNamespace::png_handle_sRGB(pnglibNamespace *param_1,long param_2,uint param_3)

{
  ushort uVar1;
  bool bVar2;
  undefined8 in_RAX;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  byte local_11;
  
  local_11 = (byte)((ulong)in_RAX >> 0x38);
  if ((*(uint *)(param_1 + 0x4c) & 1) != 0) {
    if ((*(uint *)(param_1 + 0x4c) & 6) == 0) {
      if (param_3 == 1) {
        if (*(code **)(param_1 + 0x20) != (code *)0x0) {
          (**(code **)(param_1 + 0x20))(param_1,&local_11,1);
          bVar2 = (~*(uint *)(param_1 + 0x50) & 0x300) != 0;
          if (((byte)param_1[0x13b] & 0x20) == 0) {
            bVar2 = (*(uint *)(param_1 + 0x50) & 0x800) == 0;
          }
          if (bVar2) {
            uVar3 = zlibNamespace::crc32_z(*(uint *)(param_1 + 0x16c),(ulong *)&local_11,1);
            *(int *)(param_1 + 0x16c) = (int)uVar3;
          }
          uVar4 = png_crc_finish(param_1,0);
          if (((int)uVar4 != 0) || (uVar1 = *(ushort *)(param_1 + 0x3e2), (uVar1 & 0x8000) != 0)) {
            return;
          }
          if ((uVar1 & 4) == 0) {
            png_colorspace_set_sRGB(param_1,(int *)(param_1 + 0x398),(uint)local_11);
            png_colorspace_sync((long)param_1,param_2);
            return;
          }
          *(ushort *)(param_1 + 0x3e2) = uVar1 | 0x8000;
          png_colorspace_sync((long)param_1,param_2);
          png_chunk_benign_error(param_1,0x5e44d8);
          return;
        }
      }
      else {
        png_crc_finish(param_1,param_3);
        if (((byte)param_1[0x52] & 0x10) != 0) {
          pcVar5 = "invalid";
          goto LAB_003a24ed;
        }
      }
    }
    else {
      png_crc_finish(param_1,param_3);
      if (((byte)param_1[0x52] & 0x10) != 0) {
        pcVar5 = "out of place";
LAB_003a24ed:
        png_chunk_warning((long)param_1,(long)pcVar5);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  png_err(param_1);
}


