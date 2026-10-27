// Function : write_file_header
// Namespace: juce:jpeglibNamespace
// Entry    : 0035ea60
// Prototype: undefined write_file_header(long * param_1)
// Body     : 0035ea60 - 0035f224


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::write_file_header(juce::jpeglibNamespace::jpeg_compress_struct*) */

void __cdecl juce::jpeglibNamespace::write_file_header(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  long *plVar8;
  int iVar9;
  char cVar10;
  
  puVar5 = (undefined8 *)param_1[5];
  lVar6 = param_1[0x40];
  plVar1 = param_1 + 5;
  puVar7 = (undefined1 *)*puVar5;
  *puVar5 = puVar7 + 1;
  *puVar7 = 0xff;
  plVar2 = puVar5 + 1;
  *plVar2 = *plVar2 + -1;
  if ((*plVar2 == 0) && (cVar10 = (*(code *)puVar5[3])(param_1), cVar10 == '\0')) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x19;
    (*(code *)*puVar5)(param_1);
  }
  puVar5 = (undefined8 *)*plVar1;
  puVar7 = (undefined1 *)*puVar5;
  *puVar5 = puVar7 + 1;
  *puVar7 = 0xd8;
  plVar2 = puVar5 + 1;
  *plVar2 = *plVar2 + -1;
  if ((*plVar2 == 0) && (cVar10 = (*(code *)puVar5[3])(param_1), cVar10 == '\0')) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x19;
    (*(code *)*puVar5)(param_1);
  }
  *(undefined4 *)(lVar6 + 0x38) = 0;
  if ((char)param_1[0x27] != '\0') {
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0xff;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (cVar10 = (*(code *)puVar5[3])(param_1), cVar10 == '\0')) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x19;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0xe0;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (cVar10 = (*(code *)puVar5[3])(param_1), cVar10 == '\0')) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x19;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (cVar10 = (*(code *)puVar5[3])(param_1), cVar10 == '\0')) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x19;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0x10;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (cVar10 = (*(code *)puVar5[3])(param_1), cVar10 == '\0')) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x19;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0x4a;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (cVar10 = (*(code *)puVar5[3])(param_1), cVar10 == '\0')) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x19;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0x46;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (cVar10 = (*(code *)puVar5[3])(param_1), cVar10 == '\0')) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x19;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0x49;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (cVar10 = (*(code *)puVar5[3])(param_1), cVar10 == '\0')) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x19;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0x46;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (cVar10 = (*(code *)puVar5[3])(param_1), cVar10 == '\0')) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x19;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (cVar10 = (*(code *)puVar5[3])(param_1), cVar10 == '\0')) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x19;
      (*(code *)*puVar5)(param_1);
    }
    uVar3 = *(undefined1 *)((long)param_1 + 0x139);
    plVar8 = (long *)param_1[5];
    puVar7 = (undefined1 *)*plVar8;
    *plVar8 = (long)(puVar7 + 1);
    *puVar7 = uVar3;
    plVar2 = plVar8 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (cVar10 = (*(code *)plVar8[3])(param_1), cVar10 == '\0')) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x19;
      (*(code *)*puVar5)(param_1);
    }
    uVar3 = *(undefined1 *)((long)param_1 + 0x13a);
    plVar8 = (long *)param_1[5];
    puVar7 = (undefined1 *)*plVar8;
    *plVar8 = (long)(puVar7 + 1);
    *puVar7 = uVar3;
    plVar2 = plVar8 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (cVar10 = (*(code *)plVar8[3])(param_1), cVar10 == '\0')) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x19;
      (*(code *)*puVar5)(param_1);
    }
    uVar3 = *(undefined1 *)((long)param_1 + 0x13b);
    plVar8 = (long *)param_1[5];
    puVar7 = (undefined1 *)*plVar8;
    *plVar8 = (long)(puVar7 + 1);
    *puVar7 = uVar3;
    plVar2 = plVar8 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (cVar10 = (*(code *)plVar8[3])(param_1), cVar10 == '\0')) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x19;
      (*(code *)*puVar5)(param_1);
    }
    uVar4 = *(undefined2 *)((long)param_1 + 0x13c);
    plVar8 = (long *)param_1[5];
    puVar7 = (undefined1 *)*plVar8;
    *plVar8 = (long)(puVar7 + 1);
    *puVar7 = (char)((ushort)uVar4 >> 8);
    plVar2 = plVar8 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (cVar10 = (*(code *)plVar8[3])(param_1), cVar10 == '\0')) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x19;
      (*(code *)*puVar5)(param_1);
    }
    plVar8 = (long *)*plVar1;
    puVar7 = (undefined1 *)*plVar8;
    *plVar8 = (long)(puVar7 + 1);
    *puVar7 = (char)uVar4;
    plVar2 = plVar8 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (cVar10 = (*(code *)plVar8[3])(param_1), cVar10 == '\0')) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x19;
      (*(code *)*puVar5)(param_1);
    }
    uVar4 = *(undefined2 *)((long)param_1 + 0x13e);
    plVar8 = (long *)param_1[5];
    puVar7 = (undefined1 *)*plVar8;
    *plVar8 = (long)(puVar7 + 1);
    *puVar7 = (char)((ushort)uVar4 >> 8);
    plVar2 = plVar8 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (cVar10 = (*(code *)plVar8[3])(param_1), cVar10 == '\0')) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x19;
      (*(code *)*puVar5)(param_1);
    }
    plVar8 = (long *)*plVar1;
    puVar7 = (undefined1 *)*plVar8;
    *plVar8 = (long)(puVar7 + 1);
    *puVar7 = (char)uVar4;
    plVar2 = plVar8 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (cVar10 = (*(code *)plVar8[3])(param_1), cVar10 == '\0')) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x19;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (cVar10 = (*(code *)puVar5[3])(param_1), cVar10 == '\0')) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x19;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (cVar10 = (*(code *)puVar5[3])(param_1), cVar10 == '\0')) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x19;
      (*(code *)*puVar5)(param_1);
      cVar10 = (char)param_1[0x28];
      goto joined_r0x0035ee8c;
    }
  }
  cVar10 = (char)param_1[0x28];
joined_r0x0035ee8c:
  if (cVar10 == '\0') {
    return;
  }
  puVar5 = (undefined8 *)*plVar1;
  puVar7 = (undefined1 *)*puVar5;
  *puVar5 = puVar7 + 1;
  *puVar7 = 0xff;
  plVar2 = puVar5 + 1;
  *plVar2 = *plVar2 + -1;
  if ((*plVar2 == 0) && (cVar10 = (*(code *)puVar5[3])(param_1), cVar10 == '\0')) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x19;
    (*(code *)*puVar5)(param_1);
  }
  puVar5 = (undefined8 *)*plVar1;
  puVar7 = (undefined1 *)*puVar5;
  *puVar5 = puVar7 + 1;
  *puVar7 = 0xee;
  plVar2 = puVar5 + 1;
  *plVar2 = *plVar2 + -1;
  if ((*plVar2 == 0) && (cVar10 = (*(code *)puVar5[3])(param_1), cVar10 == '\0')) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x19;
    (*(code *)*puVar5)(param_1);
  }
  puVar5 = (undefined8 *)*plVar1;
  puVar7 = (undefined1 *)*puVar5;
  *puVar5 = puVar7 + 1;
  *puVar7 = 0;
  plVar2 = puVar5 + 1;
  *plVar2 = *plVar2 + -1;
  if ((*plVar2 == 0) && (cVar10 = (*(code *)puVar5[3])(param_1), cVar10 == '\0')) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x19;
    (*(code *)*puVar5)(param_1);
  }
  puVar5 = (undefined8 *)*plVar1;
  puVar7 = (undefined1 *)*puVar5;
  *puVar5 = puVar7 + 1;
  *puVar7 = 0xe;
  plVar2 = puVar5 + 1;
  *plVar2 = *plVar2 + -1;
  if ((*plVar2 == 0) && (cVar10 = (*(code *)puVar5[3])(param_1), cVar10 == '\0')) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x19;
    (*(code *)*puVar5)(param_1);
  }
  puVar5 = (undefined8 *)*plVar1;
  puVar7 = (undefined1 *)*puVar5;
  *puVar5 = puVar7 + 1;
  *puVar7 = 0x41;
  plVar2 = puVar5 + 1;
  *plVar2 = *plVar2 + -1;
  if ((*plVar2 == 0) && (cVar10 = (*(code *)puVar5[3])(param_1), cVar10 == '\0')) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x19;
    (*(code *)*puVar5)(param_1);
  }
  puVar5 = (undefined8 *)*plVar1;
  puVar7 = (undefined1 *)*puVar5;
  *puVar5 = puVar7 + 1;
  *puVar7 = 100;
  plVar2 = puVar5 + 1;
  *plVar2 = *plVar2 + -1;
  if ((*plVar2 == 0) && (cVar10 = (*(code *)puVar5[3])(param_1), cVar10 == '\0')) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x19;
    (*(code *)*puVar5)(param_1);
  }
  puVar5 = (undefined8 *)*plVar1;
  puVar7 = (undefined1 *)*puVar5;
  *puVar5 = puVar7 + 1;
  *puVar7 = 0x6f;
  plVar2 = puVar5 + 1;
  *plVar2 = *plVar2 + -1;
  if ((*plVar2 == 0) && (cVar10 = (*(code *)puVar5[3])(param_1), cVar10 == '\0')) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x19;
    (*(code *)*puVar5)(param_1);
  }
  puVar5 = (undefined8 *)*plVar1;
  puVar7 = (undefined1 *)*puVar5;
  *puVar5 = puVar7 + 1;
  *puVar7 = 0x62;
  plVar2 = puVar5 + 1;
  *plVar2 = *plVar2 + -1;
  if ((*plVar2 == 0) && (cVar10 = (*(code *)puVar5[3])(param_1), cVar10 == '\0')) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x19;
    (*(code *)*puVar5)(param_1);
  }
  puVar5 = (undefined8 *)*plVar1;
  puVar7 = (undefined1 *)*puVar5;
  *puVar5 = puVar7 + 1;
  *puVar7 = 0x65;
  plVar2 = puVar5 + 1;
  *plVar2 = *plVar2 + -1;
  if ((*plVar2 == 0) && (cVar10 = (*(code *)puVar5[3])(param_1), cVar10 == '\0')) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x19;
    (*(code *)*puVar5)(param_1);
  }
  puVar5 = (undefined8 *)*plVar1;
  puVar7 = (undefined1 *)*puVar5;
  *puVar5 = puVar7 + 1;
  *puVar7 = 0;
  plVar2 = puVar5 + 1;
  *plVar2 = *plVar2 + -1;
  if ((*plVar2 == 0) && (cVar10 = (*(code *)puVar5[3])(param_1), cVar10 == '\0')) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x19;
    (*(code *)*puVar5)(param_1);
  }
  puVar5 = (undefined8 *)*plVar1;
  puVar7 = (undefined1 *)*puVar5;
  *puVar5 = puVar7 + 1;
  *puVar7 = 100;
  plVar2 = puVar5 + 1;
  *plVar2 = *plVar2 + -1;
  if ((*plVar2 == 0) && (cVar10 = (*(code *)puVar5[3])(param_1), cVar10 == '\0')) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x19;
    (*(code *)*puVar5)(param_1);
  }
  puVar5 = (undefined8 *)*plVar1;
  puVar7 = (undefined1 *)*puVar5;
  *puVar5 = puVar7 + 1;
  *puVar7 = 0;
  plVar2 = puVar5 + 1;
  *plVar2 = *plVar2 + -1;
  if ((*plVar2 == 0) && (cVar10 = (*(code *)puVar5[3])(param_1), cVar10 == '\0')) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x19;
    (*(code *)*puVar5)(param_1);
  }
  puVar5 = (undefined8 *)*plVar1;
  puVar7 = (undefined1 *)*puVar5;
  *puVar5 = puVar7 + 1;
  *puVar7 = 0;
  plVar2 = puVar5 + 1;
  *plVar2 = *plVar2 + -1;
  if ((*plVar2 == 0) && (cVar10 = (*(code *)puVar5[3])(param_1), cVar10 == '\0')) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x19;
    (*(code *)*puVar5)(param_1);
  }
  puVar5 = (undefined8 *)*plVar1;
  puVar7 = (undefined1 *)*puVar5;
  *puVar5 = puVar7 + 1;
  *puVar7 = 0;
  plVar2 = puVar5 + 1;
  *plVar2 = *plVar2 + -1;
  if ((*plVar2 == 0) && (cVar10 = (*(code *)puVar5[3])(param_1), cVar10 == '\0')) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x19;
    (*(code *)*puVar5)(param_1);
  }
  puVar5 = (undefined8 *)*plVar1;
  puVar7 = (undefined1 *)*puVar5;
  *puVar5 = puVar7 + 1;
  *puVar7 = 0;
  plVar2 = puVar5 + 1;
  *plVar2 = *plVar2 + -1;
  if ((*plVar2 == 0) && (cVar10 = (*(code *)puVar5[3])(param_1), cVar10 == '\0')) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x19;
    (*(code *)*puVar5)(param_1);
    iVar9 = (int)param_1[0xc];
  }
  else {
    iVar9 = (int)param_1[0xc];
  }
  if (iVar9 == 5) {
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 2;
    plVar1 = puVar5 + 1;
    *plVar1 = *plVar1 + -1;
    lVar6 = *plVar1;
  }
  else if (iVar9 == 3) {
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 1;
    plVar1 = puVar5 + 1;
    *plVar1 = *plVar1 + -1;
    lVar6 = *plVar1;
  }
  else {
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0;
    plVar1 = puVar5 + 1;
    *plVar1 = *plVar1 + -1;
    lVar6 = *plVar1;
  }
  if ((lVar6 == 0) && (cVar10 = (*(code *)puVar5[3])(param_1), cVar10 == '\0')) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x19;
                    /* WARNING: Could not recover jumptable at 0x0035f223. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar5)(param_1);
    return;
  }
  return;
}


