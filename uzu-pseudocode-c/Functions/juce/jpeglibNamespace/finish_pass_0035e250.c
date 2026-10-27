// Function : finish_pass
// Namespace: juce:jpeglibNamespace
// Entry    : 0035e250
// Prototype: undefined finish_pass(long * param_1)
// Body     : 0035e250 - 0035e66b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::finish_pass(juce::jpeglibNamespace::jpeg_compress_struct*) */

void __cdecl juce::jpeglibNamespace::finish_pass(long *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  char cVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar3 = param_1[0x44];
  uVar11 = (ulong)((*(int *)(lVar3 + 0x20) + (int)*(long *)(lVar3 + 0x18)) - 1U & 0xffff0000);
  uVar12 = uVar11 + 0x8000;
  if (*(long *)(lVar3 + 0x18) <= (long)uVar11) {
    uVar12 = uVar11;
  }
  uVar12 = uVar12 << (*(byte *)(lVar3 + 0x38) & 0x3f);
  *(ulong *)(lVar3 + 0x18) = uVar12;
  iVar10 = *(int *)(lVar3 + 0x3c);
  if ((uVar12 & 0xf8000000) == 0) {
    if (iVar10 == 0) {
      *(long *)(lVar3 + 0x30) = *(long *)(lVar3 + 0x30) + 1;
    }
    else if (-1 < iVar10) {
      if (*(long *)(lVar3 + 0x30) != 0) {
        do {
          puVar6 = (undefined8 *)param_1[5];
          puVar7 = (undefined1 *)*puVar6;
          *puVar6 = puVar7 + 1;
          *puVar7 = 0;
          plVar1 = puVar6 + 1;
          *plVar1 = *plVar1 + -1;
          if ((*plVar1 == 0) && (cVar9 = (*(code *)puVar6[3])(param_1), cVar9 == '\0')) {
            puVar6 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar6 + 5) = 0x19;
            (*(code *)*puVar6)(param_1);
          }
          plVar1 = (long *)(lVar3 + 0x30);
          *plVar1 = *plVar1 + -1;
        } while (*plVar1 != 0);
        iVar10 = *(int *)(lVar3 + 0x3c);
      }
      plVar4 = (long *)param_1[5];
      puVar7 = (undefined1 *)*plVar4;
      *plVar4 = (long)(puVar7 + 1);
      *puVar7 = (char)iVar10;
      plVar1 = plVar4 + 1;
      *plVar1 = *plVar1 + -1;
      if ((*plVar1 == 0) && (cVar9 = (*(code *)plVar4[3])(param_1), cVar9 == '\0')) {
        puVar6 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar6 + 5) = 0x19;
        (*(code *)*puVar6)(param_1);
      }
    }
    if (*(long *)(lVar3 + 0x28) != 0) {
      lVar8 = *(long *)(lVar3 + 0x30);
      while (lVar8 != 0) {
        puVar6 = (undefined8 *)param_1[5];
        puVar7 = (undefined1 *)*puVar6;
        *puVar6 = puVar7 + 1;
        *puVar7 = 0;
        plVar1 = puVar6 + 1;
        *plVar1 = *plVar1 + -1;
        if ((*plVar1 == 0) && (cVar9 = (*(code *)puVar6[3])(param_1), cVar9 == '\0')) {
          puVar6 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar6 + 5) = 0x19;
          (*(code *)*puVar6)(param_1);
        }
        plVar1 = (long *)(lVar3 + 0x30);
        *plVar1 = *plVar1 + -1;
        lVar8 = *plVar1;
      }
      do {
        puVar6 = (undefined8 *)param_1[5];
        puVar7 = (undefined1 *)*puVar6;
        *puVar6 = puVar7 + 1;
        *puVar7 = 0xff;
        plVar1 = puVar6 + 1;
        *plVar1 = *plVar1 + -1;
        if ((*plVar1 == 0) && (cVar9 = (*(code *)puVar6[3])(param_1), cVar9 == '\0')) {
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
        if ((*plVar1 == 0) && (cVar9 = (*(code *)puVar6[3])(param_1), cVar9 == '\0')) {
          puVar6 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar6 + 5) = 0x19;
          (*(code *)*puVar6)(param_1);
        }
        plVar1 = (long *)(lVar3 + 0x28);
        *plVar1 = *plVar1 + -1;
      } while (*plVar1 != 0);
    }
  }
  else {
    if (-1 < iVar10) {
      if (*(long *)(lVar3 + 0x30) != 0) {
        do {
          puVar6 = (undefined8 *)param_1[5];
          puVar7 = (undefined1 *)*puVar6;
          *puVar6 = puVar7 + 1;
          *puVar7 = 0;
          plVar1 = puVar6 + 1;
          *plVar1 = *plVar1 + -1;
          if ((*plVar1 == 0) && (cVar9 = (*(code *)puVar6[3])(param_1), cVar9 == '\0')) {
            puVar6 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar6 + 5) = 0x19;
            (*(code *)*puVar6)(param_1);
          }
          plVar1 = (long *)(lVar3 + 0x30);
          *plVar1 = *plVar1 + -1;
        } while (*plVar1 != 0);
        iVar10 = *(int *)(lVar3 + 0x3c);
      }
      plVar4 = (long *)param_1[5];
      pcVar5 = (char *)*plVar4;
      *plVar4 = (long)(pcVar5 + 1);
      *pcVar5 = (char)iVar10 + '\x01';
      plVar1 = plVar4 + 1;
      *plVar1 = *plVar1 + -1;
      if ((*plVar1 == 0) && (cVar9 = (*(code *)plVar4[3])(param_1), cVar9 == '\0')) {
        puVar6 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar6 + 5) = 0x19;
        (*(code *)*puVar6)(param_1);
      }
      if (*(int *)(lVar3 + 0x3c) == 0xfe) {
        puVar6 = (undefined8 *)param_1[5];
        puVar7 = (undefined1 *)*puVar6;
        *puVar6 = puVar7 + 1;
        *puVar7 = 0;
        plVar1 = puVar6 + 1;
        *plVar1 = *plVar1 + -1;
        if ((*plVar1 == 0) && (cVar9 = (*(code *)puVar6[3])(param_1), cVar9 == '\0')) {
          puVar6 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar6 + 5) = 0x19;
          (*(code *)*puVar6)(param_1);
        }
      }
    }
    *(long *)(lVar3 + 0x30) = *(long *)(lVar3 + 0x30) + *(long *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = 0;
  }
  uVar12 = *(ulong *)(lVar3 + 0x18);
  if ((uVar12 & 0x7fff800) == 0) {
    return;
  }
  if (*(long *)(lVar3 + 0x30) != 0) {
    do {
      puVar6 = (undefined8 *)param_1[5];
      puVar7 = (undefined1 *)*puVar6;
      *puVar6 = puVar7 + 1;
      *puVar7 = 0;
      plVar1 = puVar6 + 1;
      *plVar1 = *plVar1 + -1;
      if ((*plVar1 == 0) && (cVar9 = (*(code *)puVar6[3])(param_1), cVar9 == '\0')) {
        puVar6 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar6 + 5) = 0x19;
        (*(code *)*puVar6)(param_1);
      }
      plVar1 = (long *)(lVar3 + 0x30);
      *plVar1 = *plVar1 + -1;
    } while (*plVar1 != 0);
    uVar12 = *(ulong *)(lVar3 + 0x18);
  }
  plVar4 = (long *)param_1[5];
  puVar7 = (undefined1 *)*plVar4;
  *plVar4 = (long)(puVar7 + 1);
  *puVar7 = (char)(uVar12 >> 0x13);
  plVar1 = plVar4 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (cVar9 = (*(code *)plVar4[3])(param_1), cVar9 == '\0')) {
    puVar6 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar6 + 5) = 0x19;
    (*(code *)*puVar6)(param_1);
  }
  if ((~*(uint *)(lVar3 + 0x18) & 0x7f80000) == 0) {
    puVar6 = (undefined8 *)param_1[5];
    puVar7 = (undefined1 *)*puVar6;
    *puVar6 = puVar7 + 1;
    *puVar7 = 0;
    plVar1 = puVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar9 = (*(code *)puVar6[3])(param_1), cVar9 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
      uVar12 = *(ulong *)(lVar3 + 0x18);
      goto joined_r0x0035e65e;
    }
  }
  uVar12 = *(ulong *)(lVar3 + 0x18);
joined_r0x0035e65e:
  if ((uVar12 & 0x7f800) != 0) {
    plVar4 = (long *)param_1[5];
    puVar7 = (undefined1 *)*plVar4;
    *plVar4 = (long)(puVar7 + 1);
    *puVar7 = (char)(uVar12 >> 0xb);
    plVar1 = plVar4 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (cVar9 = (*(code *)plVar4[3])(param_1), cVar9 == '\0')) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x19;
      (*(code *)*puVar6)(param_1);
      uVar2 = *(uint *)(lVar3 + 0x18);
    }
    else {
      uVar2 = *(uint *)(lVar3 + 0x18);
    }
    if ((~uVar2 & 0x7f800) == 0) {
      puVar6 = (undefined8 *)param_1[5];
      puVar7 = (undefined1 *)*puVar6;
      *puVar6 = puVar7 + 1;
      *puVar7 = 0;
      plVar1 = puVar6 + 1;
      *plVar1 = *plVar1 + -1;
      if ((*plVar1 == 0) && (cVar9 = (*(code *)puVar6[3])(param_1), cVar9 == '\0')) {
        puVar6 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar6 + 5) = 0x19;
                    /* WARNING: Could not recover jumptable at 0x0035e51d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*puVar6)(param_1);
        return;
      }
    }
  }
  return;
}


