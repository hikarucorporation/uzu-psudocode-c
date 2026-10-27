// Function : png_write_tEXt
// Namespace: juce:pnglibNamespace
// Entry    : 0039a630
// Prototype: undefined png_write_tEXt(pnglibNamespace * param_1, byte * param_2, ulong * param_3)
// Body     : 0039a630 - 0039a895


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_write_tEXt(juce::pnglibNamespace::png_struct_def*, char const*, char
   const*, unsigned long) */

void __cdecl
juce::pnglibNamespace::png_write_tEXt(pnglibNamespace *param_1,byte *param_2,ulong *param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  undefined4 local_98;
  undefined4 local_94;
  pnglibNamespace *local_90;
  ulong local_88 [11];
  
  iVar3 = png_check_keyword((long)param_1,param_2,(byte *)local_88);
  if (iVar3 != 0) {
    if (param_3 == (ulong *)0x0) {
      sVar5 = 0;
    }
    else if ((char)*param_3 == '\0') {
      sVar5 = 0;
    }
    else {
      sVar5 = strlen((char *)param_3);
      if (0x7ffffffe - iVar3 < sVar5) goto LAB_0039a88e;
    }
    if (param_1 == (pnglibNamespace *)0x0) {
      return;
    }
    iVar4 = iVar3 + (int)sVar5 + 1;
    *(undefined4 *)(param_1 + 0x36c) = 0x22;
    local_98 = CONCAT13((char)iVar4,
                        CONCAT12((char)((uint)iVar4 >> 8),
                                 CONCAT11((char)((uint)iVar4 >> 0x10),(char)((uint)iVar4 >> 0x18))))
    ;
    local_94 = 0x74584574;
    if (*(code **)(param_1 + 0x18) != (code *)0x0) {
      (**(code **)(param_1 + 0x18))(param_1,&local_98,8);
      *(undefined4 *)(param_1 + 0x138) = 0x74455874;
      *(undefined4 *)(param_1 + 0x16c) = 0;
      if ((~*(uint *)(param_1 + 0x50) & 0x300) != 0) {
        uVar6 = zlibNamespace::crc32_z(0,(ulong *)&local_94,4);
        *(int *)(param_1 + 0x16c) = (int)uVar6;
      }
      *(undefined4 *)(param_1 + 0x36c) = 0x42;
      if (iVar3 + 1U != 0) {
        if (*(code **)(param_1 + 0x18) == (code *)0x0) goto LAB_0039a88e;
        uVar6 = (ulong)(iVar3 + 1U);
        puVar9 = local_88;
        (**(code **)(param_1 + 0x18))(param_1,puVar9,uVar6);
        bVar2 = (~*(uint *)(param_1 + 0x50) & 0x300) != 0;
        if (((byte)param_1[0x13b] & 0x20) == 0) {
          bVar2 = (*(uint *)(param_1 + 0x50) & 0x800) == 0;
        }
        if (bVar2) {
          uVar7 = (ulong)*(uint *)(param_1 + 0x16c);
          local_90 = param_1;
          do {
            uVar8 = uVar6 & 0xffffffff;
            if ((int)uVar6 == 0) {
              uVar8 = 0xffffffff;
            }
            uVar7 = zlibNamespace::crc32_z((uint)uVar7,puVar9,uVar8);
            puVar9 = (ulong *)((long)puVar9 + uVar8);
            uVar6 = uVar6 - uVar8;
          } while (uVar6 != 0);
          *(int *)(local_90 + 0x16c) = (int)uVar7;
          param_1 = local_90;
        }
      }
      if ((param_3 != (ulong *)0x0) && (sVar5 != 0)) {
        if (*(code **)(param_1 + 0x18) == (code *)0x0) goto LAB_0039a88e;
        (**(code **)(param_1 + 0x18))(param_1,param_3,sVar5);
        bVar2 = (~*(uint *)(param_1 + 0x50) & 0x300) != 0;
        if (((byte)param_1[0x13b] & 0x20) == 0) {
          bVar2 = (*(uint *)(param_1 + 0x50) & 0x800) == 0;
        }
        if (bVar2) {
          uVar6 = (ulong)*(uint *)(param_1 + 0x16c);
          do {
            uVar7 = sVar5 & 0xffffffff;
            if ((int)sVar5 == 0) {
              uVar7 = 0xffffffff;
            }
            uVar6 = zlibNamespace::crc32_z((uint)uVar6,param_3,uVar7);
            param_3 = (ulong *)((long)param_3 + uVar7);
            sVar5 = sVar5 - uVar7;
          } while (sVar5 != 0);
          *(int *)(param_1 + 0x16c) = (int)uVar6;
        }
      }
      *(undefined4 *)(param_1 + 0x36c) = 0x82;
      uVar1 = *(uint *)(param_1 + 0x16c);
      local_98 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      if (*(code **)(param_1 + 0x18) != (code *)0x0) {
        (**(code **)(param_1 + 0x18))(param_1,&local_98,4);
        return;
      }
    }
  }
LAB_0039a88e:
                    /* WARNING: Subroutine does not return */
  png_err(param_1);
}


