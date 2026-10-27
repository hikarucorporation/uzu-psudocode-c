// Function : start_pass
// Namespace: juce:jpeglibNamespace
// Entry    : 0035dfc0
// Prototype: undefined start_pass(long * param_1, int param_2)
// Body     : 0035dfc0 - 0035e248


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::start_pass(juce::jpeglibNamespace::jpeg_compress_struct*, unsigned char)
    */

void __cdecl juce::jpeglibNamespace::start_pass(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  
  lVar2 = param_1[0x44];
  if (param_2 != 0) {
    puVar6 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar6 + 5) = 0x31;
    (*(code *)*puVar6)(param_1);
  }
  if (*(char *)((long)param_1 + 0x14c) == '\0') {
    *(code **)(lVar2 + 8) =
         _ZN4juce16jpeglibNamespaceL10encode_mcuEPNS0_20jpeg_compress_structEPPA64_s;
    iVar1 = *(int *)((long)param_1 + 0x164);
  }
  else if (*(int *)((long)param_1 + 0x1c4) == 0) {
    if (*(int *)((long)param_1 + 0x1bc) == 0) {
      *(code **)(lVar2 + 8) =
           _ZN4juce16jpeglibNamespaceL19encode_mcu_DC_firstEPNS0_20jpeg_compress_structEPPA64_s;
      iVar1 = *(int *)((long)param_1 + 0x164);
    }
    else {
      *(code **)(lVar2 + 8) =
           _ZN4juce16jpeglibNamespaceL19encode_mcu_AC_firstEPNS0_20jpeg_compress_structEPPA64_s;
      iVar1 = *(int *)((long)param_1 + 0x164);
    }
  }
  else if (*(int *)((long)param_1 + 0x1bc) == 0) {
    *(code **)(lVar2 + 8) =
         _ZN4juce16jpeglibNamespaceL20encode_mcu_DC_refineEPNS0_20jpeg_compress_structEPPA64_s;
    iVar1 = *(int *)((long)param_1 + 0x164);
  }
  else {
    *(code **)(lVar2 + 8) =
         _ZN4juce16jpeglibNamespaceL20encode_mcu_AC_refineEPNS0_20jpeg_compress_structEPPA64_s;
    iVar1 = *(int *)((long)param_1 + 0x164);
  }
  if (0 < iVar1) {
    lVar7 = 0;
    do {
      lVar3 = param_1[lVar7 + 0x2d];
      if ((*(int *)((long)param_1 + 0x1bc) == 0) && (*(int *)((long)param_1 + 0x1c4) == 0)) {
        iVar1 = *(int *)(lVar3 + 0x14);
        uVar8 = (ulong)iVar1;
        if (0xf < uVar8) {
          lVar4 = *param_1;
          *(undefined4 *)(lVar4 + 0x28) = 0x32;
          *(int *)(lVar4 + 0x2c) = iVar1;
          (**(code **)*param_1)(param_1);
        }
        puVar6 = *(undefined8 **)(lVar2 + 0x68 + uVar8 * 8);
        if (puVar6 == (undefined8 *)0x0) {
          puVar6 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x40);
          *(undefined8 **)(lVar2 + 0x68 + uVar8 * 8) = puVar6;
        }
        puVar6[6] = 0;
        puVar6[7] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
        *(undefined4 *)(lVar2 + 0x40 + lVar7 * 4) = 0;
        *(undefined4 *)(lVar2 + 0x50 + lVar7 * 4) = 0;
        iVar1 = (int)param_1[0x38];
      }
      else {
        iVar1 = (int)param_1[0x38];
      }
      if (iVar1 != 0) {
        iVar1 = *(int *)(lVar3 + 0x18);
        uVar8 = (ulong)iVar1;
        if (0xf < uVar8) {
          lVar3 = *param_1;
          *(undefined4 *)(lVar3 + 0x28) = 0x32;
          *(int *)(lVar3 + 0x2c) = iVar1;
          (**(code **)*param_1)(param_1);
        }
        puVar6 = *(undefined8 **)(lVar2 + 0xe8 + uVar8 * 8);
        if (puVar6 == (undefined8 *)0x0) {
          puVar6 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x100);
          *(undefined8 **)(lVar2 + 0xe8 + uVar8 * 8) = puVar6;
        }
        puVar6[0x1e] = 0;
        puVar6[0x1f] = 0;
        puVar6[0x1c] = 0;
        puVar6[0x1d] = 0;
        puVar6[0x1a] = 0;
        puVar6[0x1b] = 0;
        puVar6[0x18] = 0;
        puVar6[0x19] = 0;
        puVar6[0x16] = 0;
        puVar6[0x17] = 0;
        puVar6[0x14] = 0;
        puVar6[0x15] = 0;
        puVar6[0x12] = 0;
        puVar6[0x13] = 0;
        puVar6[0x10] = 0;
        puVar6[0x11] = 0;
        puVar6[0xe] = 0;
        puVar6[0xf] = 0;
        puVar6[0xc] = 0;
        puVar6[0xd] = 0;
        puVar6[10] = 0;
        puVar6[0xb] = 0;
        puVar6[8] = 0;
        puVar6[9] = 0;
        puVar6[6] = 0;
        puVar6[7] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)((long)param_1 + 0x164));
  }
  uVar5 = _UNK_005dd7c8;
  *(undefined8 *)(lVar2 + 0x18) = _DAT_005dd7c0;
  *(undefined8 *)(lVar2 + 0x20) = uVar5;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0xffffffff0000000b;
  *(int *)(lVar2 + 0x60) = (int)param_1[0x26];
  *(undefined4 *)(lVar2 + 100) = 0;
  return;
}


