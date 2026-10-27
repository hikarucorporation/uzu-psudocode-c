// Function : arith_decode
// Namespace: juce:jpeglibNamespace
// Entry    : 00380b90
// Prototype: uint arith_decode(long * param_1, byte * param_2)
// Body     : 00380b90 - 00380d54


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::arith_decode(juce::jpeglibNamespace::jpeg_decompress_struct*, unsigned
   char*) */

uint __cdecl juce::jpeglibNamespace::arith_decode(long *param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  long lVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar2 = param_1[0x4a];
  lVar12 = *(long *)(lVar2 + 0x20);
  if (lVar12 < 0x8000) {
    iVar9 = *(int *)(lVar2 + 0x28);
    do {
      iVar8 = iVar9 + -1;
      *(int *)(lVar2 + 0x28) = iVar8;
      if (iVar9 < 1) {
        if (*(int *)((long)param_1 + 0x21c) == 0) {
          plVar3 = (long *)param_1[5];
          if ((plVar3[1] == 0) && (cVar7 = (*(code *)plVar3[3])(param_1), cVar7 == '\0')) {
            puVar4 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar4 + 5) = 0x19;
            (*(code *)*puVar4)(param_1);
          }
          plVar3[1] = plVar3[1] + -1;
          pbVar5 = (byte *)*plVar3;
          *plVar3 = (long)(pbVar5 + 1);
          uVar11 = (ulong)*pbVar5;
          if (uVar11 == 0xff) {
            do {
              plVar3 = (long *)param_1[5];
              if ((plVar3[1] == 0) && (cVar7 = (*(code *)plVar3[3])(param_1), cVar7 == '\0')) {
                puVar4 = (undefined8 *)*param_1;
                *(undefined4 *)(puVar4 + 5) = 0x19;
                (*(code *)*puVar4)(param_1);
              }
              plVar3[1] = plVar3[1] + -1;
              pbVar5 = (byte *)*plVar3;
              *plVar3 = (long)(pbVar5 + 1);
              bVar1 = *pbVar5;
            } while (bVar1 == 0xff);
            if (bVar1 == 0) {
              uVar11 = 0xff;
            }
            else {
              *(uint *)((long)param_1 + 0x21c) = (uint)bVar1;
              uVar11 = 0;
            }
          }
          iVar8 = *(int *)(lVar2 + 0x28);
        }
        else {
          uVar11 = 0;
        }
        *(ulong *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) << 8 | uVar11;
        *(int *)(lVar2 + 0x28) = iVar8 + 8;
        iVar9 = iVar8 + 8;
        if (iVar8 < -8) {
          iVar9 = iVar8 + 9;
          *(int *)(lVar2 + 0x28) = iVar9;
          if (iVar9 == 0) {
            *(undefined8 *)(lVar2 + 0x20) = 0x8000;
            iVar9 = 0;
          }
        }
      }
      else {
        iVar9 = iVar8;
      }
      lVar12 = *(long *)(lVar2 + 0x20) * 2;
      *(long *)(lVar2 + 0x20) = lVar12;
    } while (lVar12 < 0x8000);
  }
  else {
    iVar9 = *(int *)(lVar2 + 0x28);
  }
  bVar1 = *param_2;
  uVar10 = (uint)bVar1;
  lVar6 = *(long *)(jpeg_aritab + (ulong)(bVar1 & 0x7f) * 8);
  lVar14 = lVar6 >> 0x10;
  lVar12 = lVar12 - lVar14;
  lVar13 = lVar12 << ((byte)iVar9 & 0x3f);
  *(long *)(lVar2 + 0x20) = lVar12;
  if (*(long *)(lVar2 + 0x18) < lVar13) {
    if (0x7fff < lVar12) goto LAB_00380d48;
    if (lVar12 < lVar14) goto LAB_00380d3d;
  }
  else {
    *(long *)(lVar2 + 0x18) = *(long *)(lVar2 + 0x18) - lVar13;
    *(long *)(lVar2 + 0x20) = lVar14;
    if (lVar14 <= lVar12) {
LAB_00380d3d:
      *param_2 = bVar1 & 0x80 ^ (byte)lVar6;
      uVar10 = bVar1 ^ 0x80;
      goto LAB_00380d48;
    }
  }
  *param_2 = bVar1 & 0x80 ^ (byte)((ulong)lVar6 >> 8);
LAB_00380d48:
  return uVar10 >> 7;
}


