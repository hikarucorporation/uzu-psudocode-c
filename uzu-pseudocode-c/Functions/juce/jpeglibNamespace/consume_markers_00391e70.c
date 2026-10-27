// Function : consume_markers
// Namespace: juce:jpeglibNamespace
// Entry    : 00391e70
// Prototype: undefined8 consume_markers(long * param_1)
// Body     : 00391e70 - 00392684


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::consume_markers(juce::jpeglibNamespace::jpeg_decompress_struct*) */

undefined8 __cdecl juce::jpeglibNamespace::consume_markers(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  bool bVar22;
  
  lVar4 = param_1[0x48];
  uVar8 = 2;
  if (*(char *)(lVar4 + 0x21) == '\0') {
LAB_00391ec9:
    do {
      while( true ) {
        uVar8 = (**(code **)(param_1[0x49] + 8))(param_1);
        if ((int)uVar8 != 1) {
          if ((int)uVar8 != 2) {
            return uVar8;
          }
          *(undefined1 *)(lVar4 + 0x21) = 1;
          if (*(int *)(lVar4 + 0x28) == 0) {
            if (*(int *)((long)param_1 + 0x9c) < *(int *)((long)param_1 + 0xa4)) {
              *(int *)((long)param_1 + 0xa4) = *(int *)((long)param_1 + 0x9c);
            }
          }
          else if (*(char *)(param_1[0x49] + 0x19) != '\0') {
            puVar5 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar5 + 5) = 0x3e;
            (*(code *)*puVar5)(param_1);
          }
          return 2;
        }
        if (*(int *)(lVar4 + 0x28) == 0) break;
        if (*(int *)(lVar4 + 0x28) == 1) {
          if ((*(uint *)((long)param_1 + 0x34) < 0xffdd) && (*(uint *)(param_1 + 6) < 0xffdd)) {
            iVar6 = (int)param_1[0x23];
            if (0xfffffffa < iVar6 - 0xdU) goto LAB_00391f0f;
LAB_00391f78:
            lVar15 = *param_1;
            *(undefined4 *)(lVar15 + 0x28) = 0x10;
            *(int *)(lVar15 + 0x2c) = iVar6;
            (**(code **)*param_1)(param_1);
            iVar17 = (int)param_1[7];
            if (10 < iVar17) goto LAB_00391f97;
LAB_00391f19:
            param_1[0x30] = 0x100000001;
          }
          else {
            *(undefined8 *)(*param_1 + 0x28) = 0xffdc0000002a;
            (**(code **)*param_1)(param_1);
            iVar6 = (int)param_1[0x23];
            if (iVar6 - 0xdU < 0xfffffffb) goto LAB_00391f78;
LAB_00391f0f:
            iVar17 = (int)param_1[7];
            if (iVar17 < 0xb) goto LAB_00391f19;
LAB_00391f97:
            lVar15 = *param_1;
            *(undefined4 *)(lVar15 + 0x28) = 0x1b;
            *(int *)(lVar15 + 0x2c) = iVar17;
            *(undefined4 *)(*param_1 + 0x30) = 10;
            (**(code **)*param_1)(param_1);
            iVar17 = (int)param_1[7];
            param_1[0x30] = 0x100000001;
          }
          if (0 < iVar17) {
            piVar13 = (int *)(param_1[0x24] + 0xc);
            iVar12 = 0;
            iVar18 = 1;
            iVar6 = 1;
            do {
              iVar11 = piVar13[-1];
              if ((iVar11 - 5U < 0xfffffffc) || (iVar14 = *piVar13, iVar14 - 5U < 0xfffffffc)) {
                puVar5 = (undefined8 *)*param_1;
                *(undefined4 *)(puVar5 + 5) = 0x13;
                (*(code *)*puVar5)(param_1);
                iVar17 = (int)param_1[7];
                iVar6 = (int)param_1[0x30];
                iVar11 = piVar13[-1];
                iVar14 = *piVar13;
                iVar18 = *(int *)((long)param_1 + 0x184);
              }
              if (iVar11 < iVar6) {
                iVar11 = iVar6;
              }
              *(int *)(param_1 + 0x30) = iVar11;
              if (iVar18 <= iVar14) {
                iVar18 = iVar14;
              }
              *(int *)((long)param_1 + 0x184) = iVar18;
              iVar12 = iVar12 + 1;
              piVar13 = piVar13 + 0x18;
              iVar6 = iVar11;
            } while (iVar12 < iVar17);
          }
          if (((char)param_1[0x25] == '\0') &&
             ((*(char *)((long)param_1 + 0x129) == '\0' || ((int)param_1[0x34] == 0)))) {
            iVar6 = (int)param_1[0x40];
            if (iVar6 < 0x78) {
              switch(iVar6) {
              case 0:
                *(undefined4 *)((long)param_1 + 0x20c) = 1;
                param_1[0x42] = (long)L"";
                *(undefined4 *)(param_1 + 0x43) = 0;
                iVar6 = 1;
                break;
              default:
switchD_00392243_caseD_1:
                lVar15 = *param_1;
                *(undefined4 *)(lVar15 + 0x28) = 0x11;
                *(undefined4 *)(lVar15 + 0x2c) = *(undefined4 *)((long)param_1 + 0x1fc);
                *(int *)(*param_1 + 0x30) = (int)param_1[0x40];
                *(undefined4 *)(*param_1 + 0x34) = *(undefined4 *)((long)param_1 + 0x204);
                *(int *)(*param_1 + 0x38) = (int)param_1[0x41];
                (**(code **)*param_1)(param_1);
                iVar17 = (int)param_1[7];
                iVar6 = *(int *)((long)param_1 + 0x20c);
                break;
              case 3:
                *(undefined4 *)((long)param_1 + 0x20c) = 2;
                param_1[0x42] = (long)jpeg_natural_order2;
                *(undefined4 *)(param_1 + 0x43) = 3;
                iVar6 = 2;
                break;
              case 8:
                *(undefined4 *)((long)param_1 + 0x20c) = 3;
                param_1[0x42] = (long)jpeg_natural_order3;
                *(undefined4 *)(param_1 + 0x43) = 8;
                iVar6 = 3;
                break;
              case 0xf:
                *(undefined4 *)((long)param_1 + 0x20c) = 4;
                param_1[0x42] = (long)jpeg_natural_order4;
                *(undefined4 *)(param_1 + 0x43) = 0xf;
                iVar6 = 4;
                break;
              case 0x18:
                *(undefined4 *)((long)param_1 + 0x20c) = 5;
                param_1[0x42] = (long)jpeg_natural_order5;
                *(undefined4 *)(param_1 + 0x43) = 0x18;
                iVar6 = 5;
                break;
              case 0x23:
                *(undefined4 *)((long)param_1 + 0x20c) = 6;
                param_1[0x42] = (long)jpeg_natural_order6;
                *(undefined4 *)(param_1 + 0x43) = 0x23;
                iVar6 = 6;
                break;
              case 0x30:
                *(undefined4 *)((long)param_1 + 0x20c) = 7;
                param_1[0x42] = (long)jpeg_natural_order7;
                *(undefined4 *)(param_1 + 0x43) = 0x30;
                iVar6 = 7;
                break;
              case 0x3f:
                goto switchD_00392243_caseD_3f;
              case 0x50:
                *(undefined4 *)((long)param_1 + 0x20c) = 9;
                param_1[0x42] = (long)L"";
                *(undefined4 *)(param_1 + 0x43) = 0x3f;
                iVar6 = 9;
                break;
              case 99:
                *(undefined4 *)((long)param_1 + 0x20c) = 10;
                param_1[0x42] = (long)L"";
                *(undefined4 *)(param_1 + 0x43) = 0x3f;
                iVar6 = 10;
              }
            }
            else if (iVar6 < 0xc3) {
              if (iVar6 == 0x78) {
                *(undefined4 *)((long)param_1 + 0x20c) = 0xb;
                param_1[0x42] = (long)L"";
                *(undefined4 *)(param_1 + 0x43) = 0x3f;
                iVar6 = 0xb;
              }
              else if (iVar6 == 0x8f) {
                *(undefined4 *)((long)param_1 + 0x20c) = 0xc;
                param_1[0x42] = (long)L"";
                *(undefined4 *)(param_1 + 0x43) = 0x3f;
                iVar6 = 0xc;
              }
              else {
                if (iVar6 != 0xa8) goto switchD_00392243_caseD_1;
                *(undefined4 *)((long)param_1 + 0x20c) = 0xd;
                param_1[0x42] = (long)L"";
                *(undefined4 *)(param_1 + 0x43) = 0x3f;
                iVar6 = 0xd;
              }
            }
            else if (iVar6 == 0xc3) {
              *(undefined4 *)((long)param_1 + 0x20c) = 0xe;
              param_1[0x42] = (long)L"";
              *(undefined4 *)(param_1 + 0x43) = 0x3f;
              iVar6 = 0xe;
            }
            else if (iVar6 == 0xe0) {
              *(undefined4 *)((long)param_1 + 0x20c) = 0xf;
              param_1[0x42] = (long)L"";
              *(undefined4 *)(param_1 + 0x43) = 0x3f;
              iVar6 = 0xf;
            }
            else {
              if (iVar6 != 0xff) goto switchD_00392243_caseD_1;
              *(undefined4 *)((long)param_1 + 0x20c) = 0x10;
              param_1[0x42] = (long)L"";
              *(undefined4 *)(param_1 + 0x43) = 0x3f;
              iVar6 = 0x10;
            }
          }
          else {
switchD_00392243_caseD_3f:
            *(undefined4 *)((long)param_1 + 0x20c) = 8;
            param_1[0x42] = (long)L"";
            *(undefined4 *)(param_1 + 0x43) = 0x3f;
            iVar6 = 8;
          }
          *(int *)(param_1 + 0x31) = iVar6;
          *(int *)((long)param_1 + 0x18c) = iVar6;
          lVar15 = (long)iVar6;
          if (iVar17 < 1) {
            uVar10 = (ulong)*(uint *)((long)param_1 + 0x34);
            uVar16 = lVar15 * *(int *)((long)param_1 + 0x184);
          }
          else {
            uVar1 = *(uint *)(param_1 + 6);
            uVar10 = (ulong)*(uint *)((long)param_1 + 0x34);
            uVar2 = *(uint *)(param_1 + 0x30);
            uVar19 = (ulong)(int)uVar2;
            uVar20 = uVar19 * lVar15;
            uVar3 = *(uint *)((long)param_1 + 0x184);
            uVar21 = (ulong)(int)uVar3;
            uVar16 = lVar15 * uVar21;
            piVar13 = (int *)(param_1[0x24] + 8);
            iVar18 = iVar17;
            do {
              piVar13[7] = iVar6;
              piVar13[8] = iVar6;
              uVar9 = ((long)*piVar13 * (ulong)uVar1 + uVar20) - 1;
              if ((uVar9 | uVar20) >> 0x20 == 0) {
                iVar12 = (int)((uVar9 & 0xffffffff) / (uVar20 & 0xffffffff));
              }
              else {
                iVar12 = (int)((long)uVar9 / (long)uVar20);
              }
              piVar13[5] = iVar12;
              uVar9 = ((long)piVar13[1] * uVar10 + uVar16) - 1;
              if ((uVar9 | uVar16) >> 0x20 == 0) {
                iVar12 = (int)((uVar9 & 0xffffffff) / (uVar16 & 0xffffffff));
              }
              else {
                iVar12 = (int)((long)uVar9 / (long)uVar16);
              }
              piVar13[6] = iVar12;
              uVar9 = (long)*piVar13 * (ulong)uVar1 + -1 + uVar19;
              if ((uVar9 | uVar19) >> 0x20 == 0) {
                iVar12 = (int)((uVar9 & 0xffffffff) / (ulong)uVar2);
              }
              else {
                iVar12 = (int)((long)uVar9 / (long)uVar19);
              }
              piVar13[9] = iVar12;
              uVar9 = (long)piVar13[1] * uVar10 + -1 + uVar21;
              if ((uVar9 | uVar21) >> 0x20 == 0) {
                iVar12 = (int)((uVar9 & 0xffffffff) / (ulong)uVar3);
              }
              else {
                iVar12 = (int)((long)uVar9 / (long)uVar21);
              }
              piVar13[10] = iVar12;
              *(undefined1 *)(piVar13 + 0xb) = 1;
              piVar13[0x12] = 0;
              piVar13[0x13] = 0;
              piVar13 = piVar13 + 0x18;
              iVar18 = iVar18 + -1;
            } while (iVar18 != 0);
          }
          uVar10 = (uVar16 + uVar10) - 1;
          if ((uVar10 | uVar16) >> 0x20 == 0) {
            uVar7 = (undefined4)((uVar10 & 0xffffffff) / (uVar16 & 0xffffffff));
          }
          else {
            uVar7 = (undefined4)((long)uVar10 / (long)uVar16);
          }
          *(undefined4 *)(param_1 + 0x32) = uVar7;
          iVar6 = (int)param_1[0x34];
          bVar22 = true;
          if (iVar17 <= iVar6) {
            bVar22 = *(char *)((long)param_1 + 0x129) != '\0';
          }
          *(bool *)(param_1[0x48] + 0x20) = bVar22;
        }
        else {
          iVar6 = (int)param_1[0x34];
        }
        if (iVar6 != 0) {
          *(undefined4 *)(lVar4 + 0x28) = 0;
          return 1;
        }
        *(undefined4 *)(lVar4 + 0x28) = 2;
      }
      if (*(char *)(lVar4 + 0x20) != '\0') {
        if ((int)param_1[0x34] != 0) break;
        goto LAB_00391ec9;
      }
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x24;
      (*(code *)*puVar5)(param_1);
    } while ((int)param_1[0x34] == 0);
    start_input_pass(param_1);
    uVar8 = 1;
  }
  return uVar8;
}


