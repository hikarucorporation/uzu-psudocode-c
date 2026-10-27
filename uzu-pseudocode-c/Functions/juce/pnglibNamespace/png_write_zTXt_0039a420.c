// Function : png_write_zTXt
// Namespace: juce:pnglibNamespace
// Entry    : 0039a420
// Prototype: undefined png_write_zTXt(pnglibNamespace * param_1, byte * param_2, char * param_3)
// Body     : 0039a420 - 0039a62a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_write_zTXt(juce::pnglibNamespace::png_struct_def*, char const*, char
   const*, int) */

void __cdecl
juce::pnglibNamespace::png_write_zTXt(pnglibNamespace *param_1,byte *param_2,char *param_3)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  undefined4 local_4a0;
  undefined4 local_49c;
  ulong local_498 [11];
  char *local_440;
  size_t local_438;
  int local_430;
  
  iVar2 = png_check_keyword((long)param_1,param_2,(byte *)local_498);
  if (iVar2 != 0) {
    *(undefined1 *)((long)local_498 + (ulong)(iVar2 + 1)) = 0;
    uVar6 = iVar2 + 2;
    if (param_3 == (char *)0x0) {
      local_438 = 0;
    }
    else {
      local_438 = strlen(param_3);
    }
    local_430 = 0;
    local_440 = param_3;
    uVar3 = png_text_compress((long)param_1,0x7a545874,&local_440,uVar6);
    if ((int)uVar3 == 0) {
      if (param_1 == (pnglibNamespace *)0x0) {
        png_write_compressed_data_out((pnglibNamespace *)0x0,(long)&local_440);
        return;
      }
      iVar2 = local_430 + uVar6;
      *(undefined4 *)(param_1 + 0x36c) = 0x22;
      local_4a0 = CONCAT13((char)iVar2,
                           CONCAT12((char)((uint)iVar2 >> 8),
                                    CONCAT11((char)((uint)iVar2 >> 0x10),(char)((uint)iVar2 >> 0x18)
                                            )));
      local_49c = 0x7458547a;
      if (*(code **)(param_1 + 0x18) != (code *)0x0) {
        (**(code **)(param_1 + 0x18))(param_1,&local_4a0,8);
        *(undefined4 *)(param_1 + 0x138) = 0x7a545874;
        *(undefined4 *)(param_1 + 0x16c) = 0;
        if ((~*(uint *)(param_1 + 0x50) & 0x300) != 0) {
          uVar3 = zlibNamespace::crc32_z(0,(ulong *)&local_49c,4);
          *(int *)(param_1 + 0x16c) = (int)uVar3;
        }
        *(undefined4 *)(param_1 + 0x36c) = 0x42;
        if (uVar6 != 0) {
          if (*(code **)(param_1 + 0x18) == (code *)0x0) goto LAB_0039a623;
          uVar3 = (ulong)uVar6;
          puVar7 = local_498;
          (**(code **)(param_1 + 0x18))(param_1,puVar7,uVar3);
          bVar1 = (~*(uint *)(param_1 + 0x50) & 0x300) != 0;
          if (((byte)param_1[0x13b] & 0x20) == 0) {
            bVar1 = (*(uint *)(param_1 + 0x50) & 0x800) == 0;
          }
          if (bVar1) {
            uVar4 = (ulong)*(uint *)(param_1 + 0x16c);
            do {
              uVar5 = uVar3 & 0xffffffff;
              if ((int)uVar3 == 0) {
                uVar5 = 0xffffffff;
              }
              uVar4 = zlibNamespace::crc32_z((uint)uVar4,puVar7,uVar5);
              puVar7 = (ulong *)((long)puVar7 + uVar5);
              uVar3 = uVar3 - uVar5;
            } while (uVar3 != 0);
            *(int *)(param_1 + 0x16c) = (int)uVar4;
          }
        }
        png_write_compressed_data_out(param_1,(long)&local_440);
        *(undefined4 *)(param_1 + 0x36c) = 0x82;
        uVar6 = *(uint *)(param_1 + 0x16c);
        local_4a0 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
        if (*(code **)(param_1 + 0x18) != (code *)0x0) {
          (**(code **)(param_1 + 0x18))(param_1,&local_4a0,4);
          return;
        }
      }
    }
  }
LAB_0039a623:
                    /* WARNING: Subroutine does not return */
  png_err(param_1);
}


