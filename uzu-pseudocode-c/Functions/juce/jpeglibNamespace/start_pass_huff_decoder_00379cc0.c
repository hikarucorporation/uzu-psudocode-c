// Function : start_pass_huff_decoder
// Namespace: juce:jpeglibNamespace
// Entry    : 00379cc0
// Prototype: undefined start_pass_huff_decoder(long * param_1)
// Body     : 00379cc0 - 0037a31b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::start_pass_huff_decoder(juce::jpeglibNamespace::jpeg_decompress_struct*)
    */

void __cdecl juce::jpeglibNamespace::start_pass_huff_decoder(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int *piVar7;
  long lVar8;
  code *pcVar9;
  code *pcVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  
  lVar2 = param_1[0x4a];
  iVar5 = *(int *)((long)param_1 + 0x1fc);
  if (*(char *)((long)param_1 + 0x129) == '\0') {
    if ((((iVar5 != 0) || (*(int *)((long)param_1 + 0x204) != 0)) || ((int)param_1[0x41] != 0)) ||
       ((((char)param_1[0x25] != '\0' || ((int)param_1[0x40] < 0x40)) &&
        ((int)param_1[0x40] != (int)param_1[0x43])))) {
      lVar12 = *param_1;
      *(undefined4 *)(lVar12 + 0x28) = 0x7d;
      (**(code **)(lVar12 + 8))(param_1,0xffffffff);
    }
    pcVar9 = _ZN4juce16jpeglibNamespaceL14decode_mcu_subEPNS0_22jpeg_decompress_structEPPA64_s;
    if ((int)param_1[0x43] == 0x3f) {
      pcVar9 = _ZN4juce16jpeglibNamespaceL10decode_mcuEPNS0_22jpeg_decompress_structEPPA64_s;
    }
    *(code **)(lVar2 + 8) = pcVar9;
    if (0 < (int)param_1[0x34]) {
      lVar12 = 0;
      do {
        lVar8 = param_1[lVar12 + 0x35];
        uVar1 = *(uint *)(lVar8 + 0x14);
        jpeg_make_d_derived_tbl(param_1,'\x01',uVar1,(long *)(lVar2 + (long)(int)uVar1 * 8 + 0x70));
        if ((int)param_1[0x43] != 0) {
          uVar1 = *(uint *)(lVar8 + 0x18);
          jpeg_make_d_derived_tbl(param_1,'\0',uVar1,(long *)(lVar2 + (long)(int)uVar1 * 8 + 0x90));
        }
        *(undefined4 *)(lVar2 + 0x2c + lVar12 * 4) = 0;
        lVar12 = lVar12 + 1;
      } while (lVar12 < (int)param_1[0x34]);
    }
    if (0 < (int)param_1[0x3a]) {
      lVar12 = 0;
      do {
        lVar8 = param_1[(long)*(int *)((long)param_1 + lVar12 * 4 + 0x1d4) + 0x35];
        *(undefined8 *)(lVar2 + 0xb0 + lVar12 * 8) =
             *(undefined8 *)(lVar2 + 0x70 + (long)*(int *)(lVar8 + 0x14) * 8);
        lVar14 = param_1[0x43];
        if ((int)lVar14 != 0) {
          *(undefined8 *)(lVar2 + 0x100 + lVar12 * 8) =
               *(undefined8 *)(lVar2 + 0x90 + (long)*(int *)(lVar8 + 0x18) * 8);
          if (*(char *)(lVar8 + 0x34) != '\0') goto LAB_00379eba;
LAB_00379f20:
          iVar5 = 0;
          goto switchD_00379ed9_caseD_0;
        }
        *(undefined8 *)(lVar2 + 0x100 + lVar12 * 8) = 0;
        if (*(char *)(lVar8 + 0x34) == '\0') goto LAB_00379f20;
LAB_00379eba:
        iVar15 = *(int *)(lVar8 + 0x24);
        iVar4 = *(int *)(lVar8 + 0x28);
        iVar5 = 1;
        switch((int)lVar14) {
        case 0:
          goto switchD_00379ed9_caseD_0;
        default:
          uVar11 = (ulong)(iVar4 - 1);
          if (iVar4 - 9U < 0xfffffff8) {
            uVar11 = 7;
          }
          uVar13 = (ulong)(iVar15 - 1);
          if (iVar15 - 9U < 0xfffffff8) {
            uVar13 = 7;
          }
          lVar8 = uVar11 << 5;
          puVar6 = jpeg_zigzag_order;
          goto LAB_00379e49;
        case 3:
          uVar11 = (ulong)(iVar4 - 1);
          if (iVar4 - 3U < 0xfffffffe) {
            uVar11 = 1;
          }
          uVar13 = (ulong)(iVar15 - 1);
          if (iVar15 - 3U < 0xfffffffe) {
            uVar13 = 1;
          }
          piVar7 = (int *)(jpeg_zigzag_order2 + uVar13 * 4 + uVar11 * 8);
          break;
        case 8:
          uVar11 = (ulong)(iVar4 - 1);
          if (iVar4 - 4U < 0xfffffffd) {
            uVar11 = 2;
          }
          uVar13 = (ulong)(iVar15 - 1);
          if (iVar15 - 4U < 0xfffffffd) {
            uVar13 = 2;
          }
          lVar8 = uVar11 * 3;
          puVar6 = jpeg_zigzag_order3;
          goto LAB_00379fac;
        case 0xf:
          uVar11 = (ulong)(iVar4 - 1);
          if (iVar4 - 5U < 0xfffffffc) {
            uVar11 = 3;
          }
          uVar13 = (ulong)(iVar15 - 1);
          if (iVar15 - 5U < 0xfffffffc) {
            uVar13 = 3;
          }
          lVar8 = uVar11 << 4;
          puVar6 = jpeg_zigzag_order4;
LAB_00379e49:
          piVar7 = (int *)(puVar6 + uVar13 * 4 + lVar8);
          break;
        case 0x18:
          uVar11 = (ulong)(iVar4 - 1);
          if (iVar4 - 6U < 0xfffffffb) {
            uVar11 = 4;
          }
          uVar13 = (ulong)(iVar15 - 1);
          if (iVar15 - 6U < 0xfffffffb) {
            uVar13 = 4;
          }
          lVar8 = uVar11 * 5;
          puVar6 = jpeg_zigzag_order5;
LAB_00379fac:
          piVar7 = (int *)(puVar6 + uVar13 * 4 + lVar8 * 4);
          break;
        case 0x23:
          uVar11 = (ulong)(iVar4 - 1);
          if (iVar4 - 7U < 0xfffffffa) {
            uVar11 = 5;
          }
          uVar13 = (ulong)(iVar15 - 1);
          if (iVar15 - 7U < 0xfffffffa) {
            uVar13 = 5;
          }
          piVar7 = (int *)(jpeg_zigzag_order6 + uVar13 * 4 + uVar11 * 0x18);
          break;
        case 0x30:
          uVar11 = (ulong)(iVar4 - 1);
          if (iVar4 - 8U < 0xfffffff9) {
            uVar11 = 6;
          }
          uVar13 = (ulong)(iVar15 - 1);
          if (iVar15 - 8U < 0xfffffff9) {
            uVar13 = 6;
          }
          piVar7 = (int *)(jpeg_zigzag_order7 + uVar13 * 4 + uVar11 * 0x1c);
        }
        iVar5 = *piVar7 + 1;
switchD_00379ed9_caseD_0:
        *(int *)(lVar2 + 0x150 + lVar12 * 4) = iVar5;
        lVar12 = lVar12 + 1;
      } while (lVar12 < (int)param_1[0x3a]);
    }
    goto LAB_0037a2ad;
  }
  iVar15 = (int)param_1[0x40];
  if (iVar5 == 0) {
    if (iVar15 == 0) goto LAB_0037a031;
LAB_0037a04f:
    lVar12 = *param_1;
    *(undefined4 *)(lVar12 + 0x28) = 0x11;
    *(int *)(lVar12 + 0x2c) = iVar5;
    *(int *)(*param_1 + 0x30) = (int)param_1[0x40];
    *(undefined4 *)(*param_1 + 0x34) = *(undefined4 *)((long)param_1 + 0x204);
    *(int *)(*param_1 + 0x38) = (int)param_1[0x41];
    (**(code **)*param_1)(param_1);
  }
  else {
    if (((iVar15 < iVar5) || ((int)param_1[0x43] < iVar15)) || ((int)param_1[0x34] != 1))
    goto LAB_0037a04f;
LAB_0037a031:
    if (*(int *)((long)param_1 + 0x204) == 0) {
      iVar15 = (int)param_1[0x41];
    }
    else {
      iVar15 = *(int *)((long)param_1 + 0x204) + -1;
      if (iVar15 != (int)param_1[0x41]) goto LAB_0037a04f;
    }
    if (0xd < iVar15) goto LAB_0037a04f;
  }
  iVar5 = (int)param_1[0x34];
  if (0 < iVar5) {
    lVar12 = 0;
    do {
      iVar5 = *(int *)(param_1[lVar12 + 0x35] + 4);
      lVar8 = param_1[0x16];
      iVar15 = 0;
      if ((*(int *)((long)param_1 + 0x1fc) == 0) ||
         (iVar15 = *(int *)((long)param_1 + 0x1fc), -1 < *(int *)(lVar8 + (long)iVar5 * 0x100))) {
        if (iVar15 <= (int)param_1[0x40]) goto LAB_0037a0f8;
      }
      else {
        lVar14 = *param_1;
        *(undefined4 *)(lVar14 + 0x28) = 0x76;
        *(int *)(lVar14 + 0x2c) = iVar5;
        *(undefined4 *)(*param_1 + 0x30) = 0;
        (**(code **)(*param_1 + 8))(param_1,0xffffffff);
        iVar15 = *(int *)((long)param_1 + 0x1fc);
        if (iVar15 <= (int)param_1[0x40]) {
LAB_0037a0f8:
          lVar14 = (long)iVar15 + -1;
          lVar8 = lVar8 + (long)iVar5 * 0x100;
          do {
            iVar4 = *(int *)(lVar8 + 4 + lVar14 * 4);
            if (iVar4 < 0) {
              iVar4 = 0;
            }
            if (*(int *)((long)param_1 + 0x204) != iVar4) {
              lVar3 = *param_1;
              *(undefined4 *)(lVar3 + 0x28) = 0x76;
              *(int *)(lVar3 + 0x2c) = iVar5;
              *(int *)(*param_1 + 0x30) = iVar15;
              (**(code **)(*param_1 + 8))(param_1,0xffffffff);
            }
            *(int *)(lVar8 + 4 + lVar14 * 4) = (int)param_1[0x41];
            lVar14 = lVar14 + 1;
            iVar15 = iVar15 + 1;
          } while (lVar14 < (int)param_1[0x40]);
        }
      }
      lVar12 = lVar12 + 1;
      iVar5 = (int)param_1[0x34];
    } while (lVar12 < iVar5);
  }
  iVar15 = *(int *)((long)param_1 + 0x1fc);
  pcVar9 = _ZN4juce16jpeglibNamespaceL19decode_mcu_AC_firstEPNS0_22jpeg_decompress_structEPPA64_s;
  if (iVar15 == 0) {
    pcVar9 = _ZN4juce16jpeglibNamespaceL19decode_mcu_DC_firstEPNS0_22jpeg_decompress_structEPPA64_s;
  }
  pcVar10 = _ZN4juce16jpeglibNamespaceL20decode_mcu_AC_refineEPNS0_22jpeg_decompress_structEPPA64_s;
  if (iVar15 == 0) {
    pcVar10 = 
    _ZN4juce16jpeglibNamespaceL20decode_mcu_DC_refineEPNS0_22jpeg_decompress_structEPPA64_s;
  }
  if (*(int *)((long)param_1 + 0x204) == 0) {
    pcVar10 = pcVar9;
  }
  *(code **)(lVar2 + 8) = pcVar10;
  if (0 < iVar5) {
    lVar8 = 0x35;
    lVar12 = param_1[0x35];
    if (iVar15 == 0) goto LAB_0037a240;
    do {
      uVar1 = *(uint *)(lVar12 + 0x18);
      jpeg_make_d_derived_tbl(param_1,'\0',uVar1,(long *)(lVar2 + (long)(int)uVar1 * 8 + 0x48));
      *(undefined8 *)(lVar2 + 0x68) = *(undefined8 *)(lVar2 + 0x48 + (long)(int)uVar1 * 8);
      while( true ) {
        *(undefined4 *)(lVar2 + -0xa8 + lVar8 * 4) = 0;
        if ((long)(int)param_1[0x34] <= lVar8 + -0x34) goto LAB_0037a2a4;
        lVar8 = lVar8 + 1;
        lVar12 = param_1[lVar8];
        if (*(int *)((long)param_1 + 0x1fc) != 0) break;
LAB_0037a240:
        if (*(int *)((long)param_1 + 0x204) == 0) {
          jpeg_make_d_derived_tbl
                    (param_1,'\x01',*(uint *)(lVar12 + 0x14),
                     (long *)(lVar2 + (long)(int)*(uint *)(lVar12 + 0x14) * 8 + 0x48));
        }
      }
    } while( true );
  }
LAB_0037a2a4:
  *(undefined4 *)(lVar2 + 0x28) = 0;
LAB_0037a2ad:
  *(undefined4 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined1 *)(lVar2 + 0x3c) = 0;
  *(undefined4 *)(lVar2 + 0x40) = *(undefined4 *)((long)param_1 + 0x15c);
  return;
}


