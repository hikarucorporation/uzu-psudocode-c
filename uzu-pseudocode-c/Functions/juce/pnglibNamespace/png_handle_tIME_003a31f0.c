// Function : png_handle_tIME
// Namespace: juce:pnglibNamespace
// Entry    : 003a31f0
// Prototype: undefined png_handle_tIME(pnglibNamespace * param_1, long param_2, uint param_3)
// Body     : 003a31f0 - 003a338f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_handle_tIME(juce::pnglibNamespace::png_struct_def*,
   juce::pnglibNamespace::png_info_def*, unsigned int) */

void __cdecl
juce::pnglibNamespace::png_handle_tIME(pnglibNamespace *param_1,long param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  ulong in_RAX;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uStack_18;
  
  uVar1 = *(uint *)(param_1 + 0x4c);
  if ((uVar1 & 1) != 0) {
    if ((param_2 == 0) || ((*(byte *)(param_2 + 9) & 2) == 0)) {
      if ((uVar1 & 4) != 0) {
        *(uint *)(param_1 + 0x4c) = uVar1 | 8;
      }
      if (param_3 == 7) {
        if (*(code **)(param_1 + 0x20) != (code *)0x0) {
          uStack_18 = in_RAX;
          (**(code **)(param_1 + 0x20))(param_1,(long)&uStack_18 + 1,7);
          bVar2 = (~*(uint *)(param_1 + 0x50) & 0x300) != 0;
          if (((byte)param_1[0x13b] & 0x20) == 0) {
            bVar2 = (*(uint *)(param_1 + 0x50) & 0x800) == 0;
          }
          if (bVar2) {
            uVar3 = zlibNamespace::crc32_z
                              (*(uint *)(param_1 + 0x16c),(ulong *)((long)&uStack_18 + 1),7);
            *(int *)(param_1 + 0x16c) = (int)uVar3;
          }
          uVar4 = png_crc_finish(param_1,0);
          if ((((int)uVar4 != 0) || (param_2 == 0)) || (((byte)param_1[0x4d] & 2) != 0)) {
            return;
          }
          if ((((byte)(uStack_18._3_1_ - 0xd) < 0xf4) || ((byte)(uStack_18._4_1_ - 0x20) < 0xe1)) ||
             ((0x17 < uStack_18._5_1_ || ((0x3b < uStack_18._6_1_ || (0x3c < uStack_18._7_1_)))))) {
            png_warning((long)param_1,"Ignoring invalid time value");
            return;
          }
          *(ulong *)(param_2 + 0xa8) =
               (ulong)uStack_18._3_1_ << 0x10 |
               (ulong)uStack_18._4_1_ << 0x18 |
               (ulong)uStack_18._5_1_ << 0x20 |
               (ulong)uStack_18._6_1_ << 0x28 | (ulong)uStack_18._7_1_ << 0x30 |
               uStack_18 >> 0x10 & 0xff | (uStack_18 >> 8 & 0xff) << 8;
          *(byte *)(param_2 + 9) = *(byte *)(param_2 + 9) | 2;
          return;
        }
      }
      else {
        png_crc_finish(param_1,param_3);
        if (((byte)param_1[0x52] & 0x10) != 0) {
          pcVar5 = "invalid";
          goto LAB_003a32d4;
        }
      }
    }
    else {
      png_crc_finish(param_1,param_3);
      if (((byte)param_1[0x52] & 0x10) != 0) {
        pcVar5 = "duplicate";
LAB_003a32d4:
        png_chunk_warning((long)param_1,(long)pcVar5);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  png_err(param_1);
}


