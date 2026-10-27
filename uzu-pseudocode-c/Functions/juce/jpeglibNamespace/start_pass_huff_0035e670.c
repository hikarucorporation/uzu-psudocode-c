// Function : start_pass_huff
// Namespace: juce:jpeglibNamespace
// Entry    : 0035e670
// Prototype: undefined start_pass_huff(long * param_1, int param_2)
// Body     : 0035e670 - 0035e93d


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::start_pass_huff(juce::jpeglibNamespace::jpeg_compress_struct*, unsigned
   char) */

void __cdecl juce::jpeglibNamespace::start_pass_huff(long *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  char cVar10;
  long lVar11;
  
  lVar3 = param_1[0x44];
  cVar10 = (char)param_2;
  if (param_2 == 0) {
    *(code **)(lVar3 + 0x10) = finish_pass_huff;
    if (*(char *)((long)param_1 + 0x14c) == '\0') {
      *(code **)(lVar3 + 8) =
           _ZN4juce16jpeglibNamespaceL15encode_mcu_huffEPNS0_20jpeg_compress_structEPPA64_s;
      iVar1 = *(int *)((long)param_1 + 0x164);
      goto joined_r0x0035e787;
    }
  }
  else {
    *(code **)(lVar3 + 0x10) = finish_pass_gather;
    if (*(char *)((long)param_1 + 0x14c) == '\0') {
      *(code **)(lVar3 + 8) =
           _ZN4juce16jpeglibNamespaceL17encode_mcu_gatherEPNS0_20jpeg_compress_structEPPA64_s;
      iVar1 = *(int *)((long)param_1 + 0x164);
      goto joined_r0x0035e787;
    }
  }
  *(long **)(lVar3 + 0xd8) = param_1;
  *(char *)(lVar3 + 0xc0) = cVar10;
  if (*(int *)((long)param_1 + 0x1c4) == 0) {
    if (*(int *)((long)param_1 + 0x1bc) == 0) {
      pcVar6 = 
      _ZN4juce16jpeglibNamespaceL26encode_mcu_DC_first_jchuffEPNS0_20jpeg_compress_structEPPA64_s;
    }
    else {
      pcVar6 = 
      _ZN4juce16jpeglibNamespaceL26encode_mcu_AC_first_jchuffEPNS0_20jpeg_compress_structEPPA64_s;
    }
LAB_0035e75f:
    *(code **)(lVar3 + 8) = pcVar6;
  }
  else {
    if (*(int *)((long)param_1 + 0x1bc) == 0) {
      pcVar6 = 
      _ZN4juce16jpeglibNamespaceL27encode_mcu_DC_refine_jchuffEPNS0_20jpeg_compress_structEPPA64_s;
      goto LAB_0035e75f;
    }
    *(code **)(lVar3 + 8) =
         _ZN4juce16jpeglibNamespaceL27encode_mcu_AC_refine_jchuffEPNS0_20jpeg_compress_structEPPA64_s
    ;
    if (*(long *)(lVar3 + 0xf0) == 0) {
      uVar5 = (**(code **)param_1[1])(param_1,1,1000);
      *(undefined8 *)(lVar3 + 0xf0) = uVar5;
    }
  }
  *(undefined4 *)(lVar3 + 0xe0) = *(undefined4 *)(param_1[0x2d] + 0x18);
  *(undefined8 *)(lVar3 + 0xe4) = 0;
  iVar1 = *(int *)((long)param_1 + 0x164);
joined_r0x0035e787:
  if (0 < iVar1) {
    lVar9 = 0;
    do {
      lVar8 = param_1[lVar9 + 0x2d];
      if ((*(int *)((long)param_1 + 0x1bc) == 0) && (*(int *)((long)param_1 + 0x1c4) == 0)) {
        uVar2 = *(uint *)(lVar8 + 0x14);
        lVar11 = (long)(int)uVar2;
        if (cVar10 == '\0') {
          jpeg_make_c_derived_tbl(param_1,'\x01',uVar2,(long *)(lVar3 + lVar11 * 8 + 0x40));
          *(undefined4 *)(lVar3 + 0x24 + lVar9 * 4) = 0;
          iVar1 = (int)param_1[0x38];
        }
        else {
          if (3 < uVar2) {
            lVar4 = *param_1;
            *(undefined4 *)(lVar4 + 0x28) = 0x34;
            *(uint *)(lVar4 + 0x2c) = uVar2;
            (**(code **)*param_1)(param_1);
          }
          pvVar7 = *(void **)(lVar3 + 0x80 + lVar11 * 8);
          if (pvVar7 == (void *)0x0) {
            pvVar7 = (void *)(**(code **)param_1[1])(param_1,1,0x808);
            *(void **)(lVar3 + 0x80 + lVar11 * 8) = pvVar7;
          }
          memset(pvVar7,0,0x808);
          *(undefined4 *)(lVar3 + 0x24 + lVar9 * 4) = 0;
          iVar1 = (int)param_1[0x38];
        }
      }
      else {
        iVar1 = (int)param_1[0x38];
      }
      if (iVar1 != 0) {
        uVar2 = *(uint *)(lVar8 + 0x18);
        lVar8 = (long)(int)uVar2;
        if (cVar10 == '\0') {
          jpeg_make_c_derived_tbl(param_1,'\0',uVar2,(long *)(lVar3 + lVar8 * 8 + 0x60));
        }
        else {
          if (3 < uVar2) {
            lVar11 = *param_1;
            *(undefined4 *)(lVar11 + 0x28) = 0x34;
            *(uint *)(lVar11 + 0x2c) = uVar2;
            (**(code **)*param_1)(param_1);
          }
          pvVar7 = *(void **)(lVar3 + 0xa0 + lVar8 * 8);
          if (pvVar7 == (void *)0x0) {
            pvVar7 = (void *)(**(code **)param_1[1])(param_1,1,0x808);
            *(void **)(lVar3 + 0xa0 + lVar8 * 8) = pvVar7;
          }
          memset(pvVar7,0,0x808);
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)((long)param_1 + 0x164));
  }
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined4 *)(lVar3 + 0x20) = 0;
  *(int *)(lVar3 + 0x38) = (int)param_1[0x26];
  *(undefined4 *)(lVar3 + 0x3c) = 0;
  return;
}


