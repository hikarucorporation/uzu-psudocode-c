// Function : start_pass_jdarith
// Namespace: juce:jpeglibNamespace
// Entry    : 00379820
// Prototype: undefined start_pass_jdarith(long * param_1)
// Body     : 00379820 - 00379ca7


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::start_pass_jdarith(juce::jpeglibNamespace::jpeg_decompress_struct*) */

void __cdecl juce::jpeglibNamespace::start_pass_jdarith(long *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  
  lVar1 = param_1[0x4a];
  iVar4 = *(int *)((long)param_1 + 0x1fc);
  if (*(char *)((long)param_1 + 0x129) == '\0') {
    if ((((iVar4 != 0) || (*(int *)((long)param_1 + 0x204) != 0)) || ((int)param_1[0x41] != 0)) ||
       (((int)param_1[0x40] < 0x40 && ((int)param_1[0x40] != (int)param_1[0x43])))) {
      lVar8 = *param_1;
      *(undefined4 *)(lVar8 + 0x28) = 0x7d;
      (**(code **)(lVar8 + 8))(param_1,0xffffffff);
    }
    *(code **)(lVar1 + 8) =
         _ZN4juce16jpeglibNamespaceL18decode_mcu_jdarithEPNS0_22jpeg_decompress_structEPPA64_s;
    iVar4 = (int)param_1[0x34];
    goto joined_r0x00379a83;
  }
  iVar9 = (int)param_1[0x40];
  if (iVar4 == 0) {
    if (iVar9 == 0) goto LAB_003798bb;
LAB_003798d9:
    lVar8 = *param_1;
    *(undefined4 *)(lVar8 + 0x28) = 0x11;
    *(int *)(lVar8 + 0x2c) = iVar4;
    *(int *)(*param_1 + 0x30) = (int)param_1[0x40];
    *(undefined4 *)(*param_1 + 0x34) = *(undefined4 *)((long)param_1 + 0x204);
    *(int *)(*param_1 + 0x38) = (int)param_1[0x41];
    (**(code **)*param_1)(param_1);
  }
  else {
    if (((iVar9 < iVar4) || ((int)param_1[0x43] < iVar9)) || ((int)param_1[0x34] != 1))
    goto LAB_003798d9;
LAB_003798bb:
    if (*(int *)((long)param_1 + 0x204) == 0) {
      iVar9 = (int)param_1[0x41];
    }
    else {
      iVar9 = *(int *)((long)param_1 + 0x204) + -1;
      if (iVar9 != (int)param_1[0x41]) goto LAB_003798d9;
    }
    if (0xd < iVar9) goto LAB_003798d9;
  }
  iVar4 = (int)param_1[0x34];
  if (0 < iVar4) {
    lVar8 = 0;
    do {
      iVar4 = *(int *)(param_1[lVar8 + 0x35] + 4);
      lVar6 = param_1[0x16];
      iVar9 = 0;
      if ((*(int *)((long)param_1 + 0x1fc) == 0) ||
         (iVar9 = *(int *)((long)param_1 + 0x1fc), -1 < *(int *)(lVar6 + (long)iVar4 * 0x100))) {
        if (iVar9 <= (int)param_1[0x40]) goto LAB_00379988;
      }
      else {
        lVar10 = *param_1;
        *(undefined4 *)(lVar10 + 0x28) = 0x76;
        *(int *)(lVar10 + 0x2c) = iVar4;
        *(undefined4 *)(*param_1 + 0x30) = 0;
        (**(code **)(*param_1 + 8))(param_1,0xffffffff);
        iVar9 = *(int *)((long)param_1 + 0x1fc);
        if (iVar9 <= (int)param_1[0x40]) {
LAB_00379988:
          lVar10 = (long)iVar9 + -1;
          lVar6 = lVar6 + (long)iVar4 * 0x100;
          do {
            iVar3 = *(int *)(lVar6 + 4 + lVar10 * 4);
            if (iVar3 < 0) {
              iVar3 = 0;
            }
            if (*(int *)((long)param_1 + 0x204) != iVar3) {
              lVar2 = *param_1;
              *(undefined4 *)(lVar2 + 0x28) = 0x76;
              *(int *)(lVar2 + 0x2c) = iVar4;
              *(int *)(*param_1 + 0x30) = iVar9;
              (**(code **)(*param_1 + 8))(param_1,0xffffffff);
            }
            *(int *)(lVar6 + 4 + lVar10 * 4) = (int)param_1[0x41];
            lVar10 = lVar10 + 1;
            iVar9 = iVar9 + 1;
          } while (lVar10 < (int)param_1[0x40]);
        }
      }
      lVar8 = lVar8 + 1;
      iVar4 = (int)param_1[0x34];
    } while (lVar8 < iVar4);
  }
  if (*(int *)((long)param_1 + 0x204) == 0) {
    if (*(int *)((long)param_1 + 0x1fc) == 0) {
      *(code **)(lVar1 + 8) =
           _ZN4juce16jpeglibNamespaceL27decode_mcu_DC_first_jdarithEPNS0_22jpeg_decompress_structEPPA64_s
      ;
    }
    else {
      *(code **)(lVar1 + 8) =
           _ZN4juce16jpeglibNamespaceL27decode_mcu_AC_first_jdarithEPNS0_22jpeg_decompress_structEPPA64_s
      ;
    }
  }
  else if (*(int *)((long)param_1 + 0x1fc) == 0) {
    *(code **)(lVar1 + 8) =
         _ZN4juce16jpeglibNamespaceL28decode_mcu_DC_refine_jdarithEPNS0_22jpeg_decompress_structEPPA64_s
    ;
  }
  else {
    *(code **)(lVar1 + 8) =
         _ZN4juce16jpeglibNamespaceL28decode_mcu_AC_refine_jdarithEPNS0_22jpeg_decompress_structEPPA64_s
    ;
  }
joined_r0x00379a83:
  if (0 < iVar4) {
    lVar8 = 0;
    do {
      lVar6 = param_1[lVar8 + 0x35];
      if (*(char *)((long)param_1 + 0x129) == '\0') {
LAB_00379b70:
        iVar4 = *(int *)(lVar6 + 0x14);
        uVar7 = (ulong)iVar4;
        if (0xf < uVar7) {
          lVar10 = *param_1;
          *(undefined4 *)(lVar10 + 0x28) = 0x32;
          *(int *)(lVar10 + 0x2c) = iVar4;
          (**(code **)*param_1)(param_1);
        }
        puVar5 = *(undefined8 **)(lVar1 + 0x50 + uVar7 * 8);
        if (puVar5 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x40);
          *(undefined8 **)(lVar1 + 0x50 + uVar7 * 8) = puVar5;
        }
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        *(undefined4 *)(lVar1 + 0x2c + lVar8 * 4) = 0;
        *(undefined4 *)(lVar1 + 0x3c + lVar8 * 4) = 0;
        if (*(char *)((long)param_1 + 0x129) == '\0') {
          iVar4 = (int)param_1[0x43];
        }
        else {
          iVar4 = *(int *)((long)param_1 + 0x1fc);
        }
        if (iVar4 != 0) {
LAB_00379c20:
          iVar4 = *(int *)(lVar6 + 0x18);
          uVar7 = (ulong)iVar4;
          if (0xf < uVar7) {
            lVar6 = *param_1;
            *(undefined4 *)(lVar6 + 0x28) = 0x32;
            *(int *)(lVar6 + 0x2c) = iVar4;
            (**(code **)*param_1)(param_1);
          }
          puVar5 = *(undefined8 **)(lVar1 + 0xd0 + uVar7 * 8);
          if (puVar5 == (undefined8 *)0x0) {
            puVar5 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x100);
            *(undefined8 **)(lVar1 + 0xd0 + uVar7 * 8) = puVar5;
          }
          puVar5[0x1e] = 0;
          puVar5[0x1f] = 0;
          puVar5[0x1c] = 0;
          puVar5[0x1d] = 0;
          puVar5[0x1a] = 0;
          puVar5[0x1b] = 0;
          puVar5[0x18] = 0;
          puVar5[0x19] = 0;
          puVar5[0x16] = 0;
          puVar5[0x17] = 0;
          puVar5[0x14] = 0;
          puVar5[0x15] = 0;
          puVar5[0x12] = 0;
          puVar5[0x13] = 0;
          puVar5[0x10] = 0;
          puVar5[0x11] = 0;
          puVar5[0xe] = 0;
          puVar5[0xf] = 0;
          puVar5[0xc] = 0;
          puVar5[0xd] = 0;
          puVar5[10] = 0;
          puVar5[0xb] = 0;
          puVar5[8] = 0;
          puVar5[9] = 0;
          puVar5[6] = 0;
          puVar5[7] = 0;
          puVar5[4] = 0;
          puVar5[5] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          *puVar5 = 0;
          puVar5[1] = 0;
        }
      }
      else {
        if (*(int *)((long)param_1 + 0x1fc) != 0) goto LAB_00379c20;
        if (*(int *)((long)param_1 + 0x204) == 0) goto LAB_00379b70;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)param_1[0x34]);
  }
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined4 *)(lVar1 + 0x28) = 0xfffffff0;
  *(undefined4 *)(lVar1 + 0x4c) = *(undefined4 *)((long)param_1 + 0x15c);
  return;
}


