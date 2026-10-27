// Function : write_scan_header
// Namespace: juce:jpeglibNamespace
// Entry    : 0035fdd0
// Prototype: undefined write_scan_header(long * param_1)
// Body     : 0035fdd0 - 00360825


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::write_scan_header(juce::jpeglibNamespace::jpeg_compress_struct*) */

void __cdecl juce::jpeglibNamespace::write_scan_header(long *param_1)

{
  long *plVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  char *pcVar9;
  undefined1 *puVar10;
  char cVar11;
  char cVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  lVar17 = param_1[0x40];
  if (*(char *)((long)param_1 + 0x121) == '\0') {
    if (0 < *(int *)((long)param_1 + 0x164)) {
      lVar16 = 0;
      do {
        lVar5 = param_1[lVar16 + 0x2d];
        if ((*(int *)((long)param_1 + 0x1bc) == 0) && (*(int *)((long)param_1 + 0x1c4) == 0)) {
          emit_dht(param_1,*(int *)(lVar5 + 0x14),0);
          iVar15 = (int)param_1[0x38];
        }
        else {
          iVar15 = (int)param_1[0x38];
        }
        if (iVar15 != 0) {
          emit_dht(param_1,*(int *)(lVar5 + 0x18),1);
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 < *(int *)((long)param_1 + 0x164));
    }
  }
  else {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    uVar3 = *(uint *)((long)param_1 + 0x164);
    uVar13 = (ulong)uVar3;
    if (0 < (int)uVar3) {
      iVar15 = (int)param_1[0x38];
      if (*(int *)((long)param_1 + 0x1bc) == 0) {
        if (*(int *)((long)param_1 + 0x1c4) == 0) {
          if (iVar15 == 0) {
            if (uVar13 - 1 < 3) {
              uVar13 = 0;
            }
            else {
              uVar13 = 0;
              do {
                *(undefined1 *)((long)&local_38 + (long)*(int *)(param_1[uVar13 + 0x2d] + 0x14)) = 1
                ;
                *(undefined1 *)((long)&local_38 + (long)*(int *)(param_1[uVar13 + 0x2e] + 0x14)) = 1
                ;
                *(undefined1 *)((long)&local_38 + (long)*(int *)(param_1[uVar13 + 0x2f] + 0x14)) = 1
                ;
                *(undefined1 *)((long)&local_38 + (long)*(int *)(param_1[uVar13 + 0x30] + 0x14)) = 1
                ;
                uVar13 = uVar13 + 4;
              } while ((uVar3 & 0xfffffffc) != uVar13);
            }
            if ((ulong)(uVar3 & 3) != 0) {
              uVar14 = 0;
              do {
                *(undefined1 *)
                 ((long)&local_38 + (long)*(int *)(param_1[uVar13 + uVar14 + 0x2d] + 0x14)) = 1;
                uVar14 = uVar14 + 1;
              } while ((uVar3 & 3) != uVar14);
            }
          }
          else {
            if (uVar3 == 1) {
              uVar13 = 0;
            }
            else {
              uVar13 = 0;
              do {
                lVar16 = param_1[uVar13 + 0x2d];
                *(undefined1 *)((long)&local_38 + (long)*(int *)(lVar16 + 0x14)) = 1;
                *(undefined1 *)((long)&local_48 + (long)*(int *)(lVar16 + 0x18)) = 1;
                lVar16 = param_1[uVar13 + 0x2e];
                *(undefined1 *)((long)&local_38 + (long)*(int *)(lVar16 + 0x14)) = 1;
                *(undefined1 *)((long)&local_48 + (long)*(int *)(lVar16 + 0x18)) = 1;
                uVar13 = uVar13 + 2;
              } while ((uVar3 & 0xfffffffe) != uVar13);
            }
            if ((uVar3 & 1) != 0) {
              lVar16 = param_1[uVar13 + 0x2d];
              *(undefined1 *)((long)&local_38 + (long)*(int *)(lVar16 + 0x14)) = 1;
              *(undefined1 *)((long)&local_48 + (long)*(int *)(lVar16 + 0x18)) = 1;
            }
          }
        }
        else if (iVar15 != 0) {
          if (uVar13 - 1 < 3) {
            uVar13 = 0;
          }
          else {
            uVar13 = 0;
            do {
              *(undefined1 *)((long)&local_48 + (long)*(int *)(param_1[uVar13 + 0x2d] + 0x18)) = 1;
              *(undefined1 *)((long)&local_48 + (long)*(int *)(param_1[uVar13 + 0x2e] + 0x18)) = 1;
              *(undefined1 *)((long)&local_48 + (long)*(int *)(param_1[uVar13 + 0x2f] + 0x18)) = 1;
              *(undefined1 *)((long)&local_48 + (long)*(int *)(param_1[uVar13 + 0x30] + 0x18)) = 1;
              uVar13 = uVar13 + 4;
            } while ((uVar3 & 0xfffffffc) != uVar13);
          }
          if ((ulong)(uVar3 & 3) != 0) {
            uVar14 = 0;
            do {
              *(undefined1 *)
               ((long)&local_48 + (long)*(int *)(param_1[uVar13 + uVar14 + 0x2d] + 0x18)) = 1;
              uVar14 = uVar14 + 1;
            } while ((uVar3 & 3) != uVar14);
          }
        }
      }
      else if (iVar15 != 0) {
        if (uVar13 - 1 < 3) {
          uVar13 = 0;
        }
        else {
          uVar13 = 0;
          do {
            *(undefined1 *)((long)&local_48 + (long)*(int *)(param_1[uVar13 + 0x2d] + 0x18)) = 1;
            *(undefined1 *)((long)&local_48 + (long)*(int *)(param_1[uVar13 + 0x2e] + 0x18)) = 1;
            *(undefined1 *)((long)&local_48 + (long)*(int *)(param_1[uVar13 + 0x2f] + 0x18)) = 1;
            *(undefined1 *)((long)&local_48 + (long)*(int *)(param_1[uVar13 + 0x30] + 0x18)) = 1;
            uVar13 = uVar13 + 4;
          } while ((uVar3 & 0xfffffffc) != uVar13);
        }
        if ((ulong)(uVar3 & 3) != 0) {
          uVar14 = 0;
          do {
            *(undefined1 *)
             ((long)&local_48 + (long)*(int *)(param_1[uVar13 + uVar14 + 0x2d] + 0x18)) = 1;
            uVar14 = uVar14 + 1;
          } while ((uVar3 & 3) != uVar14);
        }
      }
    }
    iVar15 = (int)uStack_40._7_1_ +
             (int)uStack_30._7_1_ +
             (int)uStack_40._6_1_ +
             (int)uStack_30._6_1_ +
             (int)uStack_40._5_1_ +
             (int)uStack_30._5_1_ +
             (int)uStack_40._4_1_ +
             (int)uStack_30._4_1_ +
             (int)uStack_40._3_1_ +
             (int)uStack_30._3_1_ +
             (int)uStack_40._2_1_ +
             (int)uStack_30._2_1_ +
             (int)uStack_40._1_1_ +
             (int)uStack_30._1_1_ +
             (int)(char)uStack_40 +
             (int)(char)uStack_30 +
             (int)local_48._7_1_ +
             (int)local_38._7_1_ +
             (int)local_48._6_1_ +
             (int)local_38._6_1_ +
             (int)local_48._5_1_ +
             (int)local_38._5_1_ +
             (int)local_48._4_1_ +
             (int)local_38._4_1_ +
             (int)local_48._3_1_ +
             (int)local_38._3_1_ +
             (int)local_48._2_1_ +
             (int)local_38._2_1_ +
             (int)local_48._1_1_ + (int)local_38._1_1_ + (int)(char)local_48 + (int)(char)local_38;
    if (iVar15 != 0) {
      puVar6 = (undefined8 *)param_1[5];
      puVar7 = (undefined1 *)*puVar6;
      *puVar6 = puVar7 + 1;
      *puVar7 = 0xff;
      plVar1 = puVar6 + 1;
      *plVar1 = *plVar1 + -1;
      if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
        puVar6 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar6 + 5) = 0x19;
        (*(code *)*puVar6)(param_1);
      }
      puVar6 = (undefined8 *)param_1[5];
      puVar7 = (undefined1 *)*puVar6;
      *puVar6 = puVar7 + 1;
      *puVar7 = 0xcc;
      plVar1 = puVar6 + 1;
      *plVar1 = *plVar1 + -1;
      if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
        puVar6 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar6 + 5) = 0x19;
        (*(code *)*puVar6)(param_1);
      }
      iVar15 = iVar15 * 2 + 2;
      plVar8 = (long *)param_1[5];
      puVar7 = (undefined1 *)*plVar8;
      *plVar8 = (long)(puVar7 + 1);
      *puVar7 = (char)((uint)iVar15 >> 8);
      plVar1 = plVar8 + 1;
      *plVar1 = *plVar1 + -1;
      if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar8[3])(param_1), cVar11 == '\0')) {
        puVar6 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar6 + 5) = 0x19;
        (*(code *)*puVar6)(param_1);
      }
      plVar8 = (long *)param_1[5];
      puVar7 = (undefined1 *)*plVar8;
      *plVar8 = (long)(puVar7 + 1);
      *puVar7 = (char)iVar15;
      plVar1 = plVar8 + 1;
      *plVar1 = *plVar1 + -1;
      if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar8[3])(param_1), cVar11 == '\0')) {
        puVar6 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar6 + 5) = 0x19;
        (*(code *)*puVar6)(param_1);
      }
      lVar16 = 0;
      do {
        if (*(char *)((long)&local_38 + lVar16) == '\0') {
LAB_00360370:
          cVar11 = *(char *)((long)&local_48 + lVar16);
        }
        else {
          plVar8 = (long *)param_1[5];
          pcVar9 = (char *)*plVar8;
          *plVar8 = (long)(pcVar9 + 1);
          *pcVar9 = (char)lVar16;
          plVar1 = plVar8 + 1;
          *plVar1 = *plVar1 + -1;
          if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar8[3])(param_1), cVar11 == '\0')) {
            puVar6 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar6 + 5) = 0x19;
            (*(code *)*puVar6)(param_1);
          }
          cVar11 = *(char *)((long)param_1 + lVar16 + 0xf0);
          cVar12 = *(char *)((long)param_1 + lVar16 + 0xe0);
          plVar8 = (long *)param_1[5];
          pcVar9 = (char *)*plVar8;
          *plVar8 = (long)(pcVar9 + 1);
          *pcVar9 = cVar11 * '\x10' + cVar12;
          plVar1 = plVar8 + 1;
          *plVar1 = *plVar1 + -1;
          if ((*plVar1 != 0) || (cVar11 = (*(code *)plVar8[3])(param_1), cVar11 != '\0'))
          goto LAB_00360370;
          puVar6 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar6 + 5) = 0x19;
          (*(code *)*puVar6)(param_1);
          cVar11 = *(char *)((long)&local_48 + lVar16);
        }
        if (cVar11 != '\0') {
          plVar8 = (long *)param_1[5];
          pcVar9 = (char *)*plVar8;
          *plVar8 = (long)(pcVar9 + 1);
          *pcVar9 = (char)lVar16 + '\x10';
          plVar1 = plVar8 + 1;
          *plVar1 = *plVar1 + -1;
          if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar8[3])(param_1), cVar11 == '\0')) {
            puVar6 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar6 + 5) = 0x19;
            (*(code *)*puVar6)(param_1);
          }
          uVar2 = *(undefined1 *)((long)param_1 + lVar16 + 0x100);
          plVar8 = (long *)param_1[5];
          puVar7 = (undefined1 *)*plVar8;
          *plVar8 = (long)(puVar7 + 1);
          *puVar7 = uVar2;
          plVar1 = plVar8 + 1;
          *plVar1 = *plVar1 + -1;
          if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar8[3])(param_1), cVar11 == '\0')) {
            puVar6 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar6 + 5) = 0x19;
            (*(code *)*puVar6)(param_1);
          }
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 != 0x10);
    }
  }
  if ((int)param_1[0x26] != *(int *)(lVar17 + 0x38)) {
    puVar6 = (undefined8 *)param_1[5];
    puVar7 = (undefined1 *)*puVar6;
    *puVar6 = puVar7 + 1;
    *puVar7 = 0xff;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)param_1[5];
    puVar7 = (undefined1 *)*puVar6;
    *puVar6 = puVar7 + 1;
    *puVar7 = 0xdd;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)param_1[5];
    puVar7 = (undefined1 *)*puVar6;
    *puVar6 = puVar7 + 1;
    *puVar7 = 0;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)param_1[5];
    puVar7 = (undefined1 *)*puVar6;
    *puVar6 = puVar7 + 1;
    *puVar7 = 4;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    lVar16 = param_1[0x26];
    plVar8 = (long *)param_1[5];
    puVar7 = (undefined1 *)*plVar8;
    *plVar8 = (long)(puVar7 + 1);
    *puVar7 = (char)((ulong)lVar16 >> 8);
    plVar1 = plVar8 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar8[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    plVar8 = (long *)param_1[5];
    puVar7 = (undefined1 *)*plVar8;
    *plVar8 = (long)(puVar7 + 1);
    *puVar7 = (char)lVar16;
    plVar1 = plVar8 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar8[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    *(int *)(lVar17 + 0x38) = (int)param_1[0x26];
  }
  puVar6 = (undefined8 *)param_1[5];
  puVar7 = (undefined1 *)*puVar6;
  *puVar6 = puVar7 + 1;
  *puVar7 = 0xff;
  plVar1 = puVar6 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
    puVar6 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar6 + 5) = 0x19;
    (*(code *)*puVar6)(param_1);
  }
  puVar6 = (undefined8 *)param_1[5];
  puVar7 = (undefined1 *)*puVar6;
  *puVar6 = puVar7 + 1;
  *puVar7 = 0xda;
  plVar1 = puVar6 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
    puVar6 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar6 + 5) = 0x19;
    (*(code *)*puVar6)(param_1);
  }
  iVar15 = *(int *)((long)param_1 + 0x164) * 2 + 6;
  plVar8 = (long *)param_1[5];
  puVar7 = (undefined1 *)*plVar8;
  *plVar8 = (long)(puVar7 + 1);
  *puVar7 = (char)((uint)iVar15 >> 8);
  plVar1 = plVar8 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar8[3])(param_1), cVar11 == '\0')) {
    puVar6 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar6 + 5) = 0x19;
    (*(code *)*puVar6)(param_1);
  }
  plVar8 = (long *)param_1[5];
  puVar7 = (undefined1 *)*plVar8;
  *plVar8 = (long)(puVar7 + 1);
  *puVar7 = (char)iVar15;
  plVar1 = plVar8 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar8[3])(param_1), cVar11 == '\0')) {
    puVar6 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar6 + 5) = 0x19;
    (*(code *)*puVar6)(param_1);
  }
  uVar2 = *(undefined1 *)((long)param_1 + 0x164);
  plVar8 = (long *)param_1[5];
  puVar7 = (undefined1 *)*plVar8;
  *plVar8 = (long)(puVar7 + 1);
  *puVar7 = uVar2;
  plVar1 = plVar8 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar8[3])(param_1), cVar11 == '\0')) {
    puVar6 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar6 + 5) = 0x19;
    (*(code *)*puVar6)(param_1);
  }
  if (0 < *(int *)((long)param_1 + 0x164)) {
    lVar17 = 0;
    do {
      puVar7 = (undefined1 *)param_1[lVar17 + 0x2d];
      uVar2 = *puVar7;
      plVar8 = (long *)param_1[5];
      puVar10 = (undefined1 *)*plVar8;
      *plVar8 = (long)(puVar10 + 1);
      *puVar10 = uVar2;
      plVar1 = plVar8 + 1;
      *plVar1 = *plVar1 + -1;
      if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar8[3])(param_1), cVar11 == '\0')) {
        puVar6 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar6 + 5) = 0x19;
        (*(code *)*puVar6)(param_1);
        iVar15 = *(int *)((long)param_1 + 0x1bc);
      }
      else {
        iVar15 = *(int *)((long)param_1 + 0x1bc);
      }
      cVar11 = '\0';
      if ((iVar15 == 0) && (cVar11 = '\0', *(int *)((long)param_1 + 0x1c4) == 0)) {
        cVar11 = (char)*(undefined4 *)(puVar7 + 0x14);
      }
      cVar12 = '\0';
      if ((int)param_1[0x38] != 0) {
        cVar12 = (char)*(undefined4 *)(puVar7 + 0x18);
      }
      plVar8 = (long *)param_1[5];
      pcVar9 = (char *)*plVar8;
      *plVar8 = (long)(pcVar9 + 1);
      *pcVar9 = cVar11 * '\x10' + cVar12;
      plVar1 = plVar8 + 1;
      *plVar1 = *plVar1 + -1;
      if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar8[3])(param_1), cVar11 == '\0')) {
        puVar6 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar6 + 5) = 0x19;
        (*(code *)*puVar6)(param_1);
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < *(int *)((long)param_1 + 0x164));
  }
  uVar2 = *(undefined1 *)((long)param_1 + 0x1bc);
  plVar8 = (long *)param_1[5];
  puVar7 = (undefined1 *)*plVar8;
  *plVar8 = (long)(puVar7 + 1);
  *puVar7 = uVar2;
  plVar1 = plVar8 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar8[3])(param_1), cVar11 == '\0')) {
    puVar6 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar6 + 5) = 0x19;
    (*(code *)*puVar6)(param_1);
  }
  lVar17 = param_1[0x38];
  plVar8 = (long *)param_1[5];
  puVar7 = (undefined1 *)*plVar8;
  *plVar8 = (long)(puVar7 + 1);
  *puVar7 = (char)lVar17;
  plVar1 = plVar8 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar8[3])(param_1), cVar11 == '\0')) {
    puVar6 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar6 + 5) = 0x19;
    (*(code *)*puVar6)(param_1);
  }
  uVar4 = *(undefined4 *)((long)param_1 + 0x1c4);
  lVar17 = param_1[0x39];
  plVar8 = (long *)param_1[5];
  pcVar9 = (char *)*plVar8;
  *plVar8 = (long)(pcVar9 + 1);
  *pcVar9 = (char)uVar4 * '\x10' + (char)lVar17;
  plVar1 = plVar8 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar8[3])(param_1), cVar11 == '\0')) {
    puVar6 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar6 + 5) = 0x19;
                    /* WARNING: Could not recover jumptable at 0x00360824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar6)(param_1);
    return;
  }
  return;
}


