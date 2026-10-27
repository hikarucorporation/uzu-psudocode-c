// Function : clipTo
// Namespace: juce:RectangleList_float_
// Entry    : 0032c400
// Prototype: undefined clipTo(undefined8 param_1, undefined8 param_2, long * param_3)
// Body     : 0032c400 - 0032c5a7


/* WARNING: Unknown calling convention: __cdecl */
/* juce::RectangleList<float>::clipTo(juce::Rectangle<float>) */

void __cdecl juce::RectangleList<float>::clipTo(undefined8 param_1,undefined8 param_2,long *param_3)

{
  float *__dest;
  long lVar1;
  void *pvVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar10 = (float)((ulong)param_1 >> 0x20);
  fVar9 = (float)param_1;
  fVar12 = (float)((ulong)param_2 >> 0x20);
  if (((float)param_2 <= 0.0) || (fVar12 <= 0.0)) {
    *(undefined4 *)((long)param_3 + 0xc) = 0;
  }
  else {
    uVar6 = *(uint *)((long)param_3 + 0xc);
    if (0 < (int)uVar6) {
      fVar11 = (float)param_2 + fVar9;
      fVar12 = fVar10 + fVar12;
      lVar5 = (ulong)uVar6 + 1;
      iVar8 = -uVar6;
      do {
        uVar6 = uVar6 - 1;
        lVar1 = *param_3;
        lVar4 = (ulong)uVar6 * 0x10;
        __dest = (float *)(lVar1 + lVar4);
        fVar14 = *(float *)(lVar1 + lVar4);
        fVar16 = fVar9;
        if (fVar9 <= fVar14) {
          fVar16 = fVar14;
        }
        fVar14 = fVar14 + *(float *)(lVar1 + 8 + lVar4);
        fVar13 = fVar11;
        if (fVar14 <= fVar11) {
          fVar13 = fVar14;
        }
        *(float *)(lVar1 + 8 + lVar4) = fVar13 - fVar16;
        if (fVar13 - fVar16 <= 0.0) {
LAB_0032c506:
          if (uVar6 < *(uint *)((long)param_3 + 0xc)) {
            memmove(__dest,__dest + 4,(long)(int)(*(uint *)((long)param_3 + 0xc) + iVar8) << 4);
            iVar3 = *(int *)((long)param_3 + 0xc);
            uVar7 = iVar3 - 1;
            *(uint *)((long)param_3 + 0xc) = uVar7;
            iVar3 = iVar3 * 2 + -2;
            if (iVar3 < 0) {
              iVar3 = 0;
            }
            if (iVar3 < (int)param_3[1]) {
              if ((int)uVar7 < 5) {
                uVar7 = 4;
              }
              if ((int)uVar7 < (int)param_3[1]) {
                pvVar2 = realloc((void *)*param_3,(ulong)uVar7 << 4);
                *param_3 = (long)pvVar2;
                *(uint *)(param_3 + 1) = uVar7;
              }
            }
          }
        }
        else {
          lVar1 = lVar1 + lVar4;
          fVar14 = *(float *)(lVar1 + 4);
          fVar13 = fVar10;
          if (fVar10 <= fVar14) {
            fVar13 = fVar14;
          }
          fVar14 = fVar14 + *(float *)(lVar1 + 0xc);
          fVar15 = fVar12;
          if (fVar14 <= fVar12) {
            fVar15 = fVar14;
          }
          *(float *)(lVar1 + 0xc) = fVar15 - fVar13;
          if (fVar15 - fVar13 <= 0.0) goto LAB_0032c506;
          *__dest = fVar16;
          *(float *)(lVar1 + 4) = fVar13;
        }
        lVar5 = lVar5 + -1;
        iVar8 = iVar8 + 1;
      } while (1 < lVar5);
    }
  }
  return;
}


