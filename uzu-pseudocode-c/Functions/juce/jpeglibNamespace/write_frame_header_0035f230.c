// Function : write_frame_header
// Namespace: juce:jpeglibNamespace
// Entry    : 0035f230
// Prototype: undefined write_frame_header(long * param_1)
// Body     : 0035f230 - 0035fdca


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::write_frame_header(juce::jpeglibNamespace::jpeg_compress_struct*) */

void __cdecl juce::jpeglibNamespace::write_frame_header(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  char *pcVar8;
  undefined1 *puVar9;
  bool bVar10;
  char cVar11;
  char cVar12;
  uint uVar13;
  undefined7 extraout_var;
  long lVar14;
  int *piVar15;
  int iVar16;
  undefined1 *puVar17;
  uint uVar18;
  int iVar19;
  
  uVar13 = *(uint *)((long)param_1 + 0x5c);
  if ((int)uVar13 < 1) {
    iVar19 = 0;
    if (*(char *)((long)param_1 + 0x121) == '\0') goto LAB_0035f29d;
LAB_0035f288:
    cVar11 = -0x36 - (*(char *)((long)param_1 + 0x14c) == '\0');
  }
  else {
    piVar15 = (int *)(param_1[0xd] + 0x10);
    iVar19 = 0;
    iVar16 = 0;
    do {
      cVar11 = emit_dqt(param_1,*piVar15);
      iVar19 = iVar19 + (int)CONCAT71(extraout_var,cVar11);
      iVar16 = iVar16 + 1;
      uVar13 = *(uint *)((long)param_1 + 0x5c);
      piVar15 = piVar15 + 0x18;
    } while (iVar16 < (int)uVar13);
    if (*(char *)((long)param_1 + 0x121) != '\0') goto LAB_0035f288;
LAB_0035f29d:
    cVar11 = -0x3e;
    if (*(char *)((long)param_1 + 0x14c) == '\0') {
      if (((int)param_1[0xb] == 8) && (*(int *)((long)param_1 + 0x1cc) == 8)) {
        if ((int)uVar13 < 1) {
          bVar10 = true;
        }
        else {
          lVar14 = param_1[0xd];
          bVar10 = true;
          if (uVar13 != 1) {
            uVar18 = uVar13 & 0xfffffffe;
            bVar10 = true;
            do {
              if ((1 < *(int *)(lVar14 + 0x14)) || (1 < *(int *)(lVar14 + 0x18))) {
                bVar10 = false;
              }
              if ((1 < *(int *)(lVar14 + 0x74)) || (1 < *(int *)(lVar14 + 0x78))) {
                bVar10 = false;
              }
              lVar14 = lVar14 + 0xc0;
              uVar18 = uVar18 - 2;
            } while (uVar18 != 0);
            if ((uVar13 & 1) == 0) goto LAB_0035f32e;
          }
          if ((1 < *(int *)(lVar14 + 0x14)) || (1 < *(int *)(lVar14 + 0x18))) goto LAB_0035f36d;
        }
LAB_0035f32e:
        if ((iVar19 == 0) || (!bVar10)) {
          cVar11 = -0x40;
          if (!bVar10) goto LAB_0035f36d;
        }
        else {
          lVar14 = *param_1;
          *(undefined4 *)(lVar14 + 0x28) = 0x4d;
          (**(code **)(lVar14 + 8))(param_1,0);
          if (*(char *)((long)param_1 + 0x121) != '\0') goto LAB_0035f288;
          if (*(char *)((long)param_1 + 0x14c) == '\0') goto LAB_0035f36d;
        }
      }
      else {
LAB_0035f36d:
        cVar11 = -0x3f;
      }
    }
  }
  plVar2 = param_1 + 5;
  puVar6 = (undefined8 *)param_1[5];
  puVar17 = (undefined1 *)*puVar6;
  *puVar6 = puVar17 + 1;
  *puVar17 = 0xff;
  plVar1 = puVar6 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (cVar12 = (*(code *)puVar6[3])(param_1), cVar12 == '\0')) {
    puVar6 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar6 + 5) = 0x19;
    (*(code *)*puVar6)(param_1);
  }
  plVar7 = (long *)*plVar2;
  pcVar8 = (char *)*plVar7;
  *plVar7 = (long)(pcVar8 + 1);
  *pcVar8 = cVar11;
  plVar1 = plVar7 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar7[3])(param_1), cVar11 == '\0')) {
    puVar6 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar6 + 5) = 0x19;
    (*(code *)*puVar6)(param_1);
  }
  iVar19 = *(int *)((long)param_1 + 0x5c) * 3 + 8;
  plVar7 = (long *)param_1[5];
  puVar17 = (undefined1 *)*plVar7;
  *plVar7 = (long)(puVar17 + 1);
  *puVar17 = (char)((uint)iVar19 >> 8);
  plVar1 = plVar7 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar7[3])(param_1), cVar11 == '\0')) {
    puVar6 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar6 + 5) = 0x19;
    (*(code *)*puVar6)(param_1);
  }
  plVar7 = (long *)*plVar2;
  puVar17 = (undefined1 *)*plVar7;
  *plVar7 = (long)(puVar17 + 1);
  *puVar17 = (char)iVar19;
  plVar1 = plVar7 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar7[3])(param_1), cVar11 == '\0')) {
    puVar6 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar6 + 5) = 0x19;
    (*(code *)*puVar6)(param_1);
    if (0xffff < *(uint *)((long)param_1 + 0x54)) goto LAB_0035f469;
LAB_0035f441:
    if (0xffff < *(uint *)(param_1 + 10)) goto LAB_0035f469;
  }
  else {
    if (*(uint *)((long)param_1 + 0x54) < 0x10000) goto LAB_0035f441;
LAB_0035f469:
    *(undefined8 *)(*param_1 + 0x28) = 0xffff0000002a;
    (**(code **)*param_1)(param_1);
  }
  lVar14 = param_1[0xb];
  plVar7 = (long *)param_1[5];
  puVar17 = (undefined1 *)*plVar7;
  *plVar7 = (long)(puVar17 + 1);
  *puVar17 = (char)lVar14;
  plVar1 = plVar7 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar7[3])(param_1), cVar11 == '\0')) {
    puVar6 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar6 + 5) = 0x19;
    (*(code *)*puVar6)(param_1);
  }
  uVar4 = *(undefined4 *)((long)param_1 + 0x54);
  plVar7 = (long *)param_1[5];
  puVar17 = (undefined1 *)*plVar7;
  *plVar7 = (long)(puVar17 + 1);
  *puVar17 = (char)((uint)uVar4 >> 8);
  plVar1 = plVar7 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar7[3])(param_1), cVar11 == '\0')) {
    puVar6 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar6 + 5) = 0x19;
    (*(code *)*puVar6)(param_1);
  }
  plVar7 = (long *)*plVar2;
  puVar17 = (undefined1 *)*plVar7;
  *plVar7 = (long)(puVar17 + 1);
  *puVar17 = (char)uVar4;
  plVar1 = plVar7 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar7[3])(param_1), cVar11 == '\0')) {
    puVar6 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar6 + 5) = 0x19;
    (*(code *)*puVar6)(param_1);
  }
  lVar14 = param_1[10];
  plVar7 = (long *)param_1[5];
  puVar17 = (undefined1 *)*plVar7;
  *plVar7 = (long)(puVar17 + 1);
  *puVar17 = (char)((ulong)lVar14 >> 8);
  plVar1 = plVar7 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar7[3])(param_1), cVar11 == '\0')) {
    puVar6 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar6 + 5) = 0x19;
    (*(code *)*puVar6)(param_1);
  }
  plVar7 = (long *)*plVar2;
  puVar17 = (undefined1 *)*plVar7;
  *plVar7 = (long)(puVar17 + 1);
  *puVar17 = (char)lVar14;
  plVar1 = plVar7 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar7[3])(param_1), cVar11 == '\0')) {
    puVar6 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar6 + 5) = 0x19;
    (*(code *)*puVar6)(param_1);
  }
  uVar3 = *(undefined1 *)((long)param_1 + 0x5c);
  plVar7 = (long *)param_1[5];
  puVar17 = (undefined1 *)*plVar7;
  *plVar7 = (long)(puVar17 + 1);
  *puVar17 = uVar3;
  plVar1 = plVar7 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar7[3])(param_1), cVar11 == '\0')) {
    puVar6 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar6 + 5) = 0x19;
    (*(code *)*puVar6)(param_1);
  }
  iVar19 = *(int *)((long)param_1 + 0x5c);
  if (0 < iVar19) {
    puVar17 = (undefined1 *)param_1[0xd];
    iVar16 = 0;
    do {
      uVar3 = *puVar17;
      plVar7 = (long *)*plVar2;
      puVar9 = (undefined1 *)*plVar7;
      *plVar7 = (long)(puVar9 + 1);
      *puVar9 = uVar3;
      plVar1 = plVar7 + 1;
      *plVar1 = *plVar1 + -1;
      if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar7[3])(param_1), cVar11 == '\0')) {
        puVar6 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar6 + 5) = 0x19;
        (*(code *)*puVar6)(param_1);
      }
      uVar4 = *(undefined4 *)(puVar17 + 8);
      uVar5 = *(undefined4 *)(puVar17 + 0xc);
      plVar7 = (long *)*plVar2;
      pcVar8 = (char *)*plVar7;
      *plVar7 = (long)(pcVar8 + 1);
      *pcVar8 = (char)uVar4 * '\x10' + (char)uVar5;
      plVar1 = plVar7 + 1;
      *plVar1 = *plVar1 + -1;
      if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar7[3])(param_1), cVar11 == '\0')) {
        puVar6 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar6 + 5) = 0x19;
        (*(code *)*puVar6)(param_1);
      }
      uVar3 = puVar17[0x10];
      plVar7 = (long *)*plVar2;
      puVar9 = (undefined1 *)*plVar7;
      *plVar7 = (long)(puVar9 + 1);
      *puVar9 = uVar3;
      plVar1 = plVar7 + 1;
      *plVar1 = *plVar1 + -1;
      if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar7[3])(param_1), cVar11 == '\0')) {
        puVar6 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar6 + 5) = 0x19;
        (*(code *)*puVar6)(param_1);
      }
      iVar16 = iVar16 + 1;
      iVar19 = *(int *)((long)param_1 + 0x5c);
      puVar17 = puVar17 + 0x60;
    } while (iVar16 < iVar19);
  }
  if (*(int *)((long)param_1 + 0x144) != 0) {
    if ((*(int *)((long)param_1 + 0x144) != 1) || (iVar19 < 3)) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x1c;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)*plVar2;
    puVar17 = (undefined1 *)*puVar6;
    *puVar6 = puVar17 + 1;
    *puVar17 = 0xff;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)*plVar2;
    puVar17 = (undefined1 *)*puVar6;
    *puVar6 = puVar17 + 1;
    *puVar17 = 0xf8;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)*plVar2;
    puVar17 = (undefined1 *)*puVar6;
    *puVar6 = puVar17 + 1;
    *puVar17 = 0;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)*plVar2;
    puVar17 = (undefined1 *)*puVar6;
    *puVar6 = puVar17 + 1;
    *puVar17 = 0x18;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)*plVar2;
    puVar17 = (undefined1 *)*puVar6;
    *puVar6 = puVar17 + 1;
    *puVar17 = 0xd;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)*plVar2;
    puVar17 = (undefined1 *)*puVar6;
    *puVar6 = puVar17 + 1;
    *puVar17 = 0;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)*plVar2;
    puVar17 = (undefined1 *)*puVar6;
    *puVar6 = puVar17 + 1;
    *puVar17 = 0xff;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)*plVar2;
    puVar17 = (undefined1 *)*puVar6;
    *puVar6 = puVar17 + 1;
    *puVar17 = 3;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    plVar7 = (long *)param_1[5];
    uVar3 = *(undefined1 *)(param_1[0xd] + 0x60);
    puVar17 = (undefined1 *)*plVar7;
    *plVar7 = (long)(puVar17 + 1);
    *puVar17 = uVar3;
    plVar1 = plVar7 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar7[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    plVar7 = (long *)param_1[5];
    uVar3 = *(undefined1 *)param_1[0xd];
    puVar17 = (undefined1 *)*plVar7;
    *plVar7 = (long)(puVar17 + 1);
    *puVar17 = uVar3;
    plVar1 = plVar7 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar7[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    plVar7 = (long *)param_1[5];
    uVar3 = *(undefined1 *)(param_1[0xd] + 0xc0);
    puVar17 = (undefined1 *)*plVar7;
    *plVar7 = (long)(puVar17 + 1);
    *puVar17 = uVar3;
    plVar1 = plVar7 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar7[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)*plVar2;
    puVar17 = (undefined1 *)*puVar6;
    *puVar6 = puVar17 + 1;
    *puVar17 = 0x80;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)*plVar2;
    puVar17 = (undefined1 *)*puVar6;
    *puVar6 = puVar17 + 1;
    *puVar17 = 0;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)*plVar2;
    puVar17 = (undefined1 *)*puVar6;
    *puVar6 = puVar17 + 1;
    *puVar17 = 0;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)*plVar2;
    puVar17 = (undefined1 *)*puVar6;
    *puVar6 = puVar17 + 1;
    *puVar17 = 0;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)*plVar2;
    puVar17 = (undefined1 *)*puVar6;
    *puVar6 = puVar17 + 1;
    *puVar17 = 0;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)*plVar2;
    puVar17 = (undefined1 *)*puVar6;
    *puVar6 = puVar17 + 1;
    *puVar17 = 0;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)*plVar2;
    puVar17 = (undefined1 *)*puVar6;
    *puVar6 = puVar17 + 1;
    *puVar17 = 0;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)*plVar2;
    puVar17 = (undefined1 *)*puVar6;
    *puVar6 = puVar17 + 1;
    *puVar17 = 1;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)*plVar2;
    puVar17 = (undefined1 *)*puVar6;
    *puVar6 = puVar17 + 1;
    *puVar17 = 0;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)*plVar2;
    puVar17 = (undefined1 *)*puVar6;
    *puVar6 = puVar17 + 1;
    *puVar17 = 0;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)*plVar2;
    puVar17 = (undefined1 *)*puVar6;
    *puVar6 = puVar17 + 1;
    *puVar17 = 0;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)*plVar2;
    puVar17 = (undefined1 *)*puVar6;
    *puVar6 = puVar17 + 1;
    *puVar17 = 0;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)*plVar2;
    puVar17 = (undefined1 *)*puVar6;
    *puVar6 = puVar17 + 1;
    *puVar17 = 1;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)*plVar2;
    puVar17 = (undefined1 *)*puVar6;
    *puVar6 = puVar17 + 1;
    *puVar17 = 0;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)*plVar2;
    puVar17 = (undefined1 *)*puVar6;
    *puVar6 = puVar17 + 1;
    *puVar17 = 0;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
      cVar11 = *(char *)((long)param_1 + 0x14c);
      goto joined_r0x0035fdbc;
    }
  }
  cVar11 = *(char *)((long)param_1 + 0x14c);
joined_r0x0035fdbc:
  if ((cVar11 != '\0') && (*(int *)((long)param_1 + 0x1cc) != 8)) {
    puVar6 = (undefined8 *)*plVar2;
    puVar17 = (undefined1 *)*puVar6;
    *puVar6 = puVar17 + 1;
    *puVar17 = 0xff;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)*plVar2;
    puVar17 = (undefined1 *)*puVar6;
    *puVar6 = puVar17 + 1;
    *puVar17 = 0xda;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)*plVar2;
    puVar17 = (undefined1 *)*puVar6;
    *puVar6 = puVar17 + 1;
    *puVar17 = 0;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)*plVar2;
    puVar17 = (undefined1 *)*puVar6;
    *puVar6 = puVar17 + 1;
    *puVar17 = 6;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)*plVar2;
    puVar17 = (undefined1 *)*puVar6;
    *puVar6 = puVar17 + 1;
    *puVar17 = 0;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)*plVar2;
    puVar17 = (undefined1 *)*puVar6;
    *puVar6 = puVar17 + 1;
    *puVar17 = 0;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    cVar11 = (char)*(undefined4 *)((long)param_1 + 0x1cc);
    plVar7 = (long *)param_1[5];
    pcVar8 = (char *)*plVar7;
    *plVar7 = (long)(pcVar8 + 1);
    *pcVar8 = cVar11 * cVar11 + -1;
    plVar1 = plVar7 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)plVar7[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
    }
    puVar6 = (undefined8 *)*plVar2;
    puVar17 = (undefined1 *)*puVar6;
    *puVar6 = puVar17 + 1;
    *puVar17 = 0;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar11 = (*(code *)puVar6[3])(param_1), cVar11 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
                    /* WARNING: Could not recover jumptable at 0x0035fda1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar6)(param_1);
      return;
    }
  }
  return;
}


