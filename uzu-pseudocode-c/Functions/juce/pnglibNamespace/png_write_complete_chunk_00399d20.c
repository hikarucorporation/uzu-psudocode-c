// Function : png_write_complete_chunk
// Namespace: juce:pnglibNamespace
// Entry    : 00399d20
// Prototype: undefined png_write_complete_chunk(pnglibNamespace * param_1, uint param_2, ulong * param_3, ulong param_4)
// Body     : 00399d20 - 00399ee9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_write_complete_chunk(juce::pnglibNamespace::png_struct_def*, unsigned
   int, unsigned char const*, unsigned long) */

void __cdecl
juce::pnglibNamespace::png_write_complete_chunk
          (pnglibNamespace *param_1,uint param_2,ulong *param_3,ulong param_4)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  if (param_1 == (pnglibNamespace *)0x0) {
    return;
  }
  if ((param_4 & 0xffffffff80000000) == 0) {
    *(undefined4 *)(param_1 + 0x36c) = 0x22;
    local_30 = (undefined1)(param_4 >> 0x18);
    local_2f = (undefined1)(param_4 >> 0x10);
    local_2e = (undefined1)(param_4 >> 8);
    local_2d = (undefined1)param_4;
    local_2c = (undefined1)(param_2 >> 0x18);
    local_2b = (undefined1)(param_2 >> 0x10);
    local_2a = (undefined1)(param_2 >> 8);
    local_29 = (undefined1)param_2;
    if (*(code **)(param_1 + 0x18) != (code *)0x0) {
      (**(code **)(param_1 + 0x18))(param_1,&local_30,8);
      *(uint *)(param_1 + 0x138) = param_2;
      *(undefined4 *)(param_1 + 0x16c) = 0;
      bVar1 = (~*(uint *)(param_1 + 0x50) & 0x300) != 0;
      if ((param_2 & 0x20000000) == 0) {
        bVar1 = (*(uint *)(param_1 + 0x50) & 0x800) == 0;
      }
      uVar2 = 0;
      if (bVar1) {
        uVar3 = zlibNamespace::crc32_z(0,(ulong *)&local_2c,4);
        uVar2 = (uint)uVar3;
        *(uint *)(param_1 + 0x16c) = uVar2;
      }
      *(undefined4 *)(param_1 + 0x36c) = 0x42;
      if ((param_3 != (ulong *)0x0) && (param_4 != 0)) {
        if (*(code **)(param_1 + 0x18) == (code *)0x0) goto LAB_00399ee2;
        (**(code **)(param_1 + 0x18))(param_1,param_3,param_4);
        uVar2 = *(uint *)(param_1 + 0x16c);
        uVar3 = (ulong)uVar2;
        bVar1 = (~*(uint *)(param_1 + 0x50) & 0x300) != 0;
        if (((byte)param_1[0x13b] & 0x20) == 0) {
          bVar1 = (*(uint *)(param_1 + 0x50) & 0x800) == 0;
        }
        if (bVar1) {
          do {
            uVar4 = param_4 & 0xffffffff;
            if ((int)param_4 == 0) {
              uVar4 = 0xffffffff;
            }
            uVar3 = zlibNamespace::crc32_z((uint)uVar3,param_3,uVar4);
            uVar2 = (uint)uVar3;
            param_3 = (ulong *)((long)param_3 + uVar4);
            param_4 = param_4 - uVar4;
          } while (param_4 != 0);
          *(uint *)(param_1 + 0x16c) = uVar2;
        }
      }
      *(undefined4 *)(param_1 + 0x36c) = 0x82;
      local_34 = (undefined1)(uVar2 >> 0x18);
      local_33 = (undefined1)(uVar2 >> 0x10);
      local_32 = (undefined1)(uVar2 >> 8);
      local_31 = (undefined1)uVar2;
      if (*(code **)(param_1 + 0x18) != (code *)0x0) {
        (**(code **)(param_1 + 0x18))(param_1,&local_34,4);
        return;
      }
    }
  }
LAB_00399ee2:
                    /* WARNING: Subroutine does not return */
  png_err(param_1);
}


