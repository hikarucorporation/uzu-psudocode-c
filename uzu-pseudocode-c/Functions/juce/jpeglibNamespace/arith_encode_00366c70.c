// Function : arith_encode
// Namespace: juce:jpeglibNamespace
// Entry    : 00366c70
// Prototype: undefined arith_encode(long * param_1, byte * param_2, uint param_3)
// Body     : 00366c70 - 00366fd4


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::arith_encode(juce::jpeglibNamespace::jpeg_compress_struct*, unsigned
   char*, int) */

void __cdecl juce::jpeglibNamespace::arith_encode(long *param_1,byte *param_2,uint param_3)

{
  long *plVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  char cVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  byte bVar14;
  
  lVar3 = param_1[0x44];
  bVar2 = *param_2;
  lVar11 = *(long *)(jpeg_aritab + (ulong)(bVar2 & 0x7f) * 8);
  lVar13 = lVar11 >> 0x10;
  lVar10 = *(long *)(lVar3 + 0x20) - lVar13;
  *(long *)(lVar3 + 0x20) = lVar10;
  if (bVar2 >> 7 == param_3) {
    if (0x7fff < lVar10) {
      return;
    }
    bVar14 = (byte)((ulong)lVar11 >> 8);
    if (lVar10 < lVar13) {
      *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + lVar10;
      *(long *)(lVar3 + 0x20) = lVar13;
    }
  }
  else {
    if (lVar13 <= lVar10) {
      *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + lVar10;
      *(long *)(lVar3 + 0x20) = lVar13;
    }
    bVar14 = (byte)lVar11;
  }
  *param_2 = bVar14 ^ bVar2 & 0x80;
  uVar9 = *(ulong *)(lVar3 + 0x18);
  lVar11 = *(long *)(lVar3 + 0x20);
  iVar12 = *(int *)(lVar3 + 0x38);
  do {
    lVar11 = lVar11 * 2;
    *(long *)(lVar3 + 0x20) = lVar11;
    uVar9 = uVar9 * 2;
    *(ulong *)(lVar3 + 0x18) = uVar9;
    iVar12 = iVar12 + -1;
    *(int *)(lVar3 + 0x38) = iVar12;
    if (iVar12 == 0) {
      if ((long)uVar9 < 0x8000000) {
        if ((long)uVar9 >> 0x13 != 0xff) {
          iVar12 = *(int *)(lVar3 + 0x3c);
          if (iVar12 == 0) {
            *(long *)(lVar3 + 0x30) = *(long *)(lVar3 + 0x30) + 1;
          }
          else if (-1 < iVar12) {
            if (*(long *)(lVar3 + 0x30) != 0) {
              do {
                puVar6 = (undefined8 *)param_1[5];
                puVar7 = (undefined1 *)*puVar6;
                *puVar6 = puVar7 + 1;
                *puVar7 = 0;
                plVar1 = puVar6 + 1;
                *plVar1 = *plVar1 + -1;
                if ((*plVar1 == 0) && (cVar8 = (*(code *)puVar6[3])(param_1), cVar8 == '\0')) {
                  puVar6 = (undefined8 *)*param_1;
                  *(undefined4 *)(puVar6 + 5) = 0x19;
                  (*(code *)*puVar6)(param_1);
                }
                plVar1 = (long *)(lVar3 + 0x30);
                *plVar1 = *plVar1 + -1;
              } while (*plVar1 != 0);
              iVar12 = *(int *)(lVar3 + 0x3c);
            }
            plVar4 = (long *)param_1[5];
            puVar7 = (undefined1 *)*plVar4;
            *plVar4 = (long)(puVar7 + 1);
            *puVar7 = (char)iVar12;
            plVar1 = plVar4 + 1;
            *plVar1 = *plVar1 + -1;
            if ((*plVar1 == 0) && (cVar8 = (*(code *)plVar4[3])(param_1), cVar8 == '\0')) {
              puVar6 = (undefined8 *)*param_1;
              *(undefined4 *)(puVar6 + 5) = 0x19;
              (*(code *)*puVar6)(param_1);
            }
          }
          if (*(long *)(lVar3 + 0x28) != 0) {
            lVar11 = *(long *)(lVar3 + 0x30);
            while (lVar11 != 0) {
              puVar6 = (undefined8 *)param_1[5];
              puVar7 = (undefined1 *)*puVar6;
              *puVar6 = puVar7 + 1;
              *puVar7 = 0;
              plVar1 = puVar6 + 1;
              *plVar1 = *plVar1 + -1;
              if ((*plVar1 == 0) && (cVar8 = (*(code *)puVar6[3])(param_1), cVar8 == '\0')) {
                puVar6 = (undefined8 *)*param_1;
                *(undefined4 *)(puVar6 + 5) = 0x19;
                (*(code *)*puVar6)(param_1);
              }
              plVar1 = (long *)(lVar3 + 0x30);
              *plVar1 = *plVar1 + -1;
              lVar11 = *plVar1;
            }
            do {
              puVar6 = (undefined8 *)param_1[5];
              puVar7 = (undefined1 *)*puVar6;
              *puVar6 = puVar7 + 1;
              *puVar7 = 0xff;
              plVar1 = puVar6 + 1;
              *plVar1 = *plVar1 + -1;
              if ((*plVar1 == 0) && (cVar8 = (*(code *)puVar6[3])(param_1), cVar8 == '\0')) {
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
              if ((*plVar1 == 0) && (cVar8 = (*(code *)puVar6[3])(param_1), cVar8 == '\0')) {
                puVar6 = (undefined8 *)*param_1;
                *(undefined4 *)(puVar6 + 5) = 0x19;
                (*(code *)*puVar6)(param_1);
              }
              plVar1 = (long *)(lVar3 + 0x28);
              *plVar1 = *plVar1 + -1;
            } while (*plVar1 != 0);
          }
          goto LAB_00366d0f;
        }
        *(long *)(lVar3 + 0x28) = *(long *)(lVar3 + 0x28) + 1;
      }
      else {
        iVar12 = *(int *)(lVar3 + 0x3c);
        if (-1 < iVar12) {
          if (*(long *)(lVar3 + 0x30) != 0) {
            do {
              puVar6 = (undefined8 *)param_1[5];
              puVar7 = (undefined1 *)*puVar6;
              *puVar6 = puVar7 + 1;
              *puVar7 = 0;
              plVar1 = puVar6 + 1;
              *plVar1 = *plVar1 + -1;
              if ((*plVar1 == 0) && (cVar8 = (*(code *)puVar6[3])(param_1), cVar8 == '\0')) {
                puVar6 = (undefined8 *)*param_1;
                *(undefined4 *)(puVar6 + 5) = 0x19;
                (*(code *)*puVar6)(param_1);
              }
              plVar1 = (long *)(lVar3 + 0x30);
              *plVar1 = *plVar1 + -1;
            } while (*plVar1 != 0);
            iVar12 = *(int *)(lVar3 + 0x3c);
          }
          plVar4 = (long *)param_1[5];
          pcVar5 = (char *)*plVar4;
          *plVar4 = (long)(pcVar5 + 1);
          *pcVar5 = (char)iVar12 + '\x01';
          plVar1 = plVar4 + 1;
          *plVar1 = *plVar1 + -1;
          if ((*plVar1 == 0) && (cVar8 = (*(code *)plVar4[3])(param_1), cVar8 == '\0')) {
            puVar6 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar6 + 5) = 0x19;
            (*(code *)*puVar6)(param_1);
            iVar12 = *(int *)(lVar3 + 0x3c);
          }
          else {
            iVar12 = *(int *)(lVar3 + 0x3c);
          }
          if (iVar12 == 0xfe) {
            puVar6 = (undefined8 *)param_1[5];
            puVar7 = (undefined1 *)*puVar6;
            *puVar6 = puVar7 + 1;
            *puVar7 = 0;
            plVar1 = puVar6 + 1;
            *plVar1 = *plVar1 + -1;
            if ((*plVar1 == 0) && (cVar8 = (*(code *)puVar6[3])(param_1), cVar8 == '\0')) {
              puVar6 = (undefined8 *)*param_1;
              *(undefined4 *)(puVar6 + 5) = 0x19;
              (*(code *)*puVar6)(param_1);
            }
          }
        }
        *(long *)(lVar3 + 0x30) = *(long *)(lVar3 + 0x30) + *(long *)(lVar3 + 0x28);
        *(undefined8 *)(lVar3 + 0x28) = 0;
LAB_00366d0f:
        *(uint *)(lVar3 + 0x3c) = (uint)((long)uVar9 >> 0x13) & 0xff;
      }
      lVar11 = *(long *)(lVar3 + 0x20);
      uVar9 = (ulong)((uint)*(undefined8 *)(lVar3 + 0x18) & 0x7ffff);
      *(ulong *)(lVar3 + 0x18) = uVar9;
      iVar12 = *(int *)(lVar3 + 0x38) + 8;
      *(int *)(lVar3 + 0x38) = iVar12;
    }
    if (0x7fff < lVar11) {
      return;
    }
  } while( true );
}


