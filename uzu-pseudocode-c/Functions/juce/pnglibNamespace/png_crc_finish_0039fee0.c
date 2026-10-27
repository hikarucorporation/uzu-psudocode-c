// Function : png_crc_finish
// Namespace: juce:pnglibNamespace
// Entry    : 0039fee0
// Prototype: undefined8 png_crc_finish(pnglibNamespace * param_1, uint param_2)
// Body     : 0039fee0 - 003a008d


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_crc_finish(juce::pnglibNamespace::png_struct_def*, unsigned int) */

undefined8 __cdecl juce::pnglibNamespace::png_crc_finish(pnglibNamespace *param_1,uint param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  bool bVar6;
  bool bVar7;
  ulong local_438 [129];
  
  if (param_2 != 0) {
    if (param_1 == (pnglibNamespace *)0x0) {
      do {
        bVar6 = 0x3ff < param_2;
        param_2 = param_2 - 0x400;
        bVar7 = param_2 != 0;
        if (!bVar6) {
          param_2 = 0;
        }
      } while (bVar6 && bVar7);
    }
    else {
      do {
        uVar5 = 0x400;
        if (param_2 < 0x400) {
          uVar5 = (ulong)param_2;
        }
        if (*(code **)(param_1 + 0x20) == (code *)0x0) goto LAB_003a0086;
        param_2 = param_2 - (int)uVar5;
        (**(code **)(param_1 + 0x20))(param_1,local_438,uVar5);
        bVar6 = (~*(uint *)(param_1 + 0x50) & 0x300) != 0;
        if (((byte)param_1[0x13b] & 0x20) == 0) {
          bVar6 = (*(uint *)(param_1 + 0x50) & 0x800) == 0;
        }
        if (bVar6) {
          uVar1 = (ulong)*(uint *)(param_1 + 0x16c);
          puVar4 = local_438;
          do {
            uVar3 = uVar5 & 0xffffffff;
            if ((int)uVar5 == 0) {
              uVar3 = 0xffffffff;
            }
            uVar1 = zlibNamespace::crc32_z((uint)uVar1,puVar4,uVar3);
            puVar4 = (ulong *)((long)puVar4 + uVar3);
            uVar5 = uVar5 - uVar3;
          } while (uVar5 != 0);
          *(int *)(param_1 + 0x16c) = (int)uVar1;
        }
      } while (param_2 != 0);
    }
  }
  *(undefined4 *)(param_1 + 0x36c) = 0x81;
  if (*(code **)(param_1 + 0x20) == (code *)0x0) goto LAB_003a0086;
  bVar6 = (~*(uint *)(param_1 + 0x50) & 0x300) == 0;
  if ((*(uint *)(param_1 + 0x138) & 0x20000000) == 0) {
    bVar6 = (bool)((byte)(*(uint *)(param_1 + 0x50) >> 0xb) & 1);
  }
  (**(code **)(param_1 + 0x20))(param_1,local_438,4);
  if (bVar6 == true) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (((uint)local_438[0] >> 0x18 | ((uint)local_438[0] & 0xff0000) >> 8 |
         ((uint)local_438[0] & 0xff00) << 8 | (uint)local_438[0] << 0x18) !=
        *(uint *)(param_1 + 0x16c)) {
      if (((byte)param_1[0x13b] & 0x20) == 0) {
        if ((*(uint *)(param_1 + 0x50) & 0x400) == 0) {
LAB_003a0086:
                    /* WARNING: Subroutine does not return */
          png_err(param_1);
        }
      }
      else if ((*(uint *)(param_1 + 0x50) & 0x200) != 0) goto LAB_003a0086;
      png_chunk_warning((long)param_1,0x5e443b);
      uVar2 = 1;
    }
  }
  return uVar2;
}


