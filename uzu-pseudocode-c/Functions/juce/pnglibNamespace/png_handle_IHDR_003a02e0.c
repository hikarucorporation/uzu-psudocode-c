// Function : png_handle_IHDR
// Namespace: juce:pnglibNamespace
// Entry    : 003a02e0
// Prototype: undefined png_handle_IHDR(pnglibNamespace * param_1, uint * param_2, int param_3)
// Body     : 003a02e0 - 003a04fe


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_handle_IHDR(juce::pnglibNamespace::png_struct_def*,
   juce::pnglibNamespace::png_info_def*, unsigned int) */

void __cdecl
juce::pnglibNamespace::png_handle_IHDR(pnglibNamespace *param_1,uint *param_2,int param_3)

{
  bool bVar1;
  pnglibNamespace pVar2;
  char cVar3;
  byte bVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 local_35;
  pnglibNamespace local_2d;
  pnglibNamespace local_2c;
  pnglibNamespace local_2b;
  byte local_2a;
  pnglibNamespace local_29;
  
  if (((*(uint *)(param_1 + 0x4c) & 1) == 0) && (param_3 == 0xd)) {
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 1;
    if (*(code **)(param_1 + 0x20) != (code *)0x0) {
      (**(code **)(param_1 + 0x20))(param_1,&local_35,0xd);
      bVar1 = (~*(uint *)(param_1 + 0x50) & 0x300) != 0;
      if (((byte)param_1[0x13b] & 0x20) == 0) {
        bVar1 = (*(uint *)(param_1 + 0x50) & 0x800) == 0;
      }
      if (bVar1) {
        uVar5 = zlibNamespace::crc32_z(*(uint *)(param_1 + 0x16c),&local_35,0xd);
        *(int *)(param_1 + 0x16c) = (int)uVar5;
      }
      png_crc_finish(param_1,0);
      uVar5 = (ulong)(uint)local_35 << 0x20;
      uVar5 = (ulong)((uint)local_35 >> 0x18) | (uVar5 & 0xff000000000000) >> 0x28 |
              (uVar5 & 0xff0000000000) >> 0x18 | (uVar5 & 0xff00000000) >> 8;
      uVar7 = (uint)uVar5;
      if ((-1 < (int)uVar7) &&
         (uVar6 = local_35._4_4_ >> 0x18 | (local_35._4_4_ & 0xff0000) >> 8 |
                  (local_35._4_4_ & 0xff00) << 8 | local_35._4_4_ << 0x18, -1 < (int)uVar6)) {
        *(uint *)(param_1 + 0x118) = uVar7;
        *(uint *)(param_1 + 0x11c) = uVar6;
        param_1[0x188] = local_2d;
        param_1[0x184] = local_29;
        param_1[0x187] = local_2c;
        param_1[0x318] = local_2b;
        pVar2 = (pnglibNamespace)0x1;
        if ((byte)((char)local_2c - 2U) < 5) {
          pVar2 = SUB81(0x401020103 >> (((char)local_2c - 2U) * '\b' & 0x3f),0);
        }
        param_1[0x18b] = pVar2;
        pVar2 = (pnglibNamespace)((char)pVar2 * (char)local_2d);
        param_1[0x18a] = pVar2;
        if ((byte)pVar2 < 8) {
          *(ulong *)(param_1 + 0x128) = (byte)pVar2 * uVar5 + 7 >> 3;
        }
        else {
          *(ulong *)(param_1 + 0x128) = ((byte)pVar2 >> 3) * uVar5;
        }
        if (param_2 != (uint *)0x0) {
          *param_2 = uVar7;
          param_2[1] = uVar6;
          *(pnglibNamespace *)(param_2 + 9) = local_2d;
          *(pnglibNamespace *)((long)param_2 + 0x25) = local_2c;
          *(pnglibNamespace *)((long)param_2 + 0x26) = local_2b;
          *(byte *)((long)param_2 + 0x27) = local_2a;
          *(pnglibNamespace *)(param_2 + 10) = local_29;
          png_check_IHDR(param_1,uVar7,uVar6,(uint)(byte)local_2d,(uint)(byte)local_2c,
                         (uint)(byte)local_29,(uint)(byte)local_2b,(uint)local_2a);
          bVar4 = *(byte *)((long)param_2 + 0x25);
          if (bVar4 == 3) {
            *(undefined1 *)((long)param_2 + 0x29) = 1;
            cVar3 = '\x01';
          }
          else {
            cVar3 = (bVar4 & 2) + 1;
            *(char *)((long)param_2 + 0x29) = cVar3;
            if ((bVar4 & 4) != 0) {
              cVar3 = (bVar4 & 2) + 2;
              *(char *)((long)param_2 + 0x29) = cVar3;
            }
          }
          bVar4 = (char)param_2[9] * cVar3;
          *(byte *)((long)param_2 + 0x2a) = bVar4;
          if (bVar4 < 8) {
            uVar5 = bVar4 * uVar5 + 7 >> 3;
          }
          else {
            uVar5 = (bVar4 >> 3) * uVar5;
          }
          *(ulong *)(param_2 + 4) = uVar5;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  png_err(param_1);
}


