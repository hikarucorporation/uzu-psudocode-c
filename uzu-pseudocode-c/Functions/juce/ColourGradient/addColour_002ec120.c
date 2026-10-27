// Function : addColour
// Namespace: juce:ColourGradient
// Entry    : 002ec120
// Prototype: undefined addColour(double param_1, ColourGradient * this, undefined4 param_3)
// Body     : 002ec120 - 002ec2d5


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::ColourGradient::addColour(double, juce::Colour) */

void __thiscall
juce::ColourGradient::addColour(double param_1,ColourGradient *this,undefined4 param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  double *pdVar8;
  long lVar9;
  uint uVar10;
  
  if (param_1 <= 0.0) {
    iVar3 = *(int *)(this + 0x24);
    if (0 < iVar3) {
      puVar1 = *(undefined8 **)(this + 0x18);
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = param_3;
      return;
    }
    if ((int)*(uint *)(this + 0x20) <= iVar3) {
      uVar10 = iVar3 + ((iVar3 - (iVar3 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(this + 0x20) != uVar10) {
        if ((int)uVar10 < 1) {
          free(*(void **)(this + 0x18));
          *(undefined8 *)(this + 0x18) = 0;
        }
        else {
          pvVar2 = realloc(*(void **)(this + 0x18),(ulong)uVar10 << 4);
          *(void **)(this + 0x18) = pvVar2;
        }
      }
      *(uint *)(this + 0x20) = uVar10;
      iVar3 = *(int *)(this + 0x24);
    }
    *(int *)(this + 0x24) = iVar3 + 1;
    lVar9 = *(long *)(this + 0x18);
    *(undefined8 *)(lVar9 + (long)iVar3 * 0x10) = 0;
    *(undefined4 *)(lVar9 + 8 + (long)iVar3 * 0x10) = param_3;
    return;
  }
  if (_DAT_005d9000 <= param_1) {
    param_1 = _DAT_005d9000;
  }
  uVar10 = *(uint *)(this + 0x24);
  if ((int)uVar10 < 1) {
    uVar5 = 0;
    uVar4 = *(uint *)(this + 0x20);
    if ((int)uVar4 <= (int)uVar10) goto LAB_002ec1d5;
LAB_002ec170:
    lVar9 = *(long *)(this + 0x18);
    iVar3 = uVar10 - uVar5;
    if (uVar10 < uVar5 || iVar3 == 0) {
LAB_002ec280:
      pdVar8 = (double *)(lVar9 + (long)(int)uVar10 * 0x10);
      goto LAB_002ec289;
    }
  }
  else {
    pdVar8 = *(double **)(this + 0x18);
    uVar6 = 0;
    do {
      if (param_1 < *pdVar8) goto LAB_002ec169;
      uVar6 = uVar6 + 1;
      pdVar8 = pdVar8 + 2;
    } while (uVar10 != uVar6);
    uVar6 = (ulong)uVar10;
LAB_002ec169:
    uVar5 = (uint)uVar6;
    uVar4 = *(uint *)(this + 0x20);
    if ((int)uVar10 < (int)uVar4) goto LAB_002ec170;
LAB_002ec1d5:
    uVar10 = uVar10 + ((int)((uVar10 - ((int)(uVar10 + 1) >> 0x1f)) + 1) >> 1) + 9 & 0xfffffff8;
    if (uVar4 != uVar10) {
      if ((int)uVar10 < 1) {
        free(*(void **)(this + 0x18));
        *(undefined8 *)(this + 0x18) = 0;
      }
      else {
        pvVar2 = realloc(*(void **)(this + 0x18),(ulong)uVar10 << 4);
        *(void **)(this + 0x18) = pvVar2;
      }
    }
    *(uint *)(this + 0x20) = uVar10;
    uVar10 = *(uint *)(this + 0x24);
    lVar9 = *(long *)(this + 0x18);
    iVar3 = uVar10 - uVar5;
    if (uVar10 < uVar5 || iVar3 == 0) goto LAB_002ec280;
  }
  lVar7 = (ulong)uVar5 * 0x10;
  memmove((void *)(lVar9 + lVar7 + 0x10),(void *)(lVar9 + lVar7),(long)iVar3 << 4);
  pdVar8 = (double *)(lVar7 + *(long *)(this + 0x18));
LAB_002ec289:
  *pdVar8 = param_1;
  *(undefined4 *)(pdVar8 + 1) = param_3;
  *(int *)(this + 0x24) = *(int *)(this + 0x24) + 1;
  return;
}


