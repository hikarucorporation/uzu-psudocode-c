// Function : addRectangle
// Namespace: juce:Path
// Entry    : 002f20d0
// Prototype: undefined addRectangle(float param_1, float param_2, float param_3, float param_4, Path * this)
// Body     : 002f20d0 - 002f2280


/* juce::Path::addRectangle(float, float, float, float) */

void __thiscall
juce::Path::addRectangle(float param_1,float param_2,float param_3,float param_4,Path *this)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  
  fVar12 = param_1 + param_3;
  fVar17 = fVar12;
  if (0.0 <= param_3) {
    fVar17 = param_1;
  }
  if (param_3 < 0.0) {
    fVar14 = fVar12;
    fVar15 = param_1;
  }
  else {
    fVar14 = param_1;
    fVar15 = fVar12;
  }
  fVar10 = param_2 + param_4;
  fVar13 = fVar10;
  if (0.0 <= param_4) {
    fVar13 = param_2;
  }
  uVar16 = ~-(uint)(param_3 < 0.0) & (uint)fVar12 | (uint)param_1 & -(uint)(param_3 < 0.0);
  uVar11 = -(uint)(param_4 < 0.0) & (uint)param_2 | ~-(uint)(param_4 < 0.0) & (uint)fVar10;
  if (param_4 < 0.0) {
    iVar2 = *(int *)(this + 0xc);
    fVar12 = fVar10;
    if (iVar2 != 0) goto LAB_002f2143;
LAB_002f2195:
    *(float *)(this + 0x10) = fVar14;
    *(float *)(this + 0x14) = fVar15;
    *(float *)(this + 0x18) = fVar12;
    *(float *)(this + 0x1c) = param_2;
    iVar5 = iVar2 + 0xd;
    uVar6 = *(uint *)(this + 8);
    if (iVar5 <= (int)uVar6) goto LAB_002f2219;
  }
  else {
    iVar2 = *(int *)(this + 0xc);
    fVar12 = param_2;
    param_2 = fVar10;
    if (iVar2 == 0) goto LAB_002f2195;
LAB_002f2143:
    uVar6 = -(uint)(fVar14 < *(float *)(this + 0x10));
    uVar7 = -(uint)(*(float *)(this + 0x14) < fVar15);
    uVar8 = -(uint)(fVar12 < *(float *)(this + 0x18));
    uVar9 = -(uint)(*(float *)(this + 0x1c) < param_2);
    *(uint *)(this + 0x10) = ~uVar6 & (uint)*(float *)(this + 0x10) | (uint)fVar14 & uVar6;
    *(uint *)(this + 0x14) = ~uVar7 & (uint)*(float *)(this + 0x14) | (uint)fVar15 & uVar7;
    *(uint *)(this + 0x18) = ~uVar8 & (uint)*(float *)(this + 0x18) | (uint)fVar12 & uVar8;
    *(uint *)(this + 0x1c) = ~uVar9 & (uint)*(float *)(this + 0x1c) | (uint)param_2 & uVar9;
    iVar5 = iVar2 + 0xd;
    uVar6 = *(uint *)(this + 8);
    if (iVar5 <= (int)uVar6) goto LAB_002f2219;
  }
  uVar7 = iVar2 + iVar5 / 2 + 0x15U & 0xfffffff8;
  if (uVar6 != uVar7) {
    if ((int)uVar7 < 1) {
      free(*(void **)this);
      *(undefined8 *)this = 0;
    }
    else {
      pvVar3 = realloc(*(void **)this,(ulong)uVar7 << 2);
      *(void **)this = pvVar3;
    }
  }
  *(uint *)(this + 8) = uVar7;
  iVar2 = *(int *)(this + 0xc);
  iVar5 = iVar2 + 0xd;
LAB_002f2219:
  lVar1 = *(long *)this;
  lVar4 = (long)iVar2;
  *(undefined4 *)(lVar1 + lVar4 * 4) = 0x47c35100;
  *(float *)(lVar1 + 4 + lVar4 * 4) = fVar17;
  *(uint *)(lVar1 + 8 + lVar4 * 4) = uVar11;
  *(undefined4 *)(lVar1 + 0xc + lVar4 * 4) = 0x47c35080;
  *(float *)(lVar1 + 0x10 + lVar4 * 4) = fVar17;
  *(float *)(lVar1 + 0x14 + lVar4 * 4) = fVar13;
  *(undefined4 *)(lVar1 + 0x18 + lVar4 * 4) = 0x47c35080;
  *(uint *)(lVar1 + 0x1c + lVar4 * 4) = uVar16;
  *(float *)(lVar1 + 0x20 + lVar4 * 4) = fVar13;
  *(undefined4 *)(lVar1 + 0x24 + lVar4 * 4) = 0x47c35080;
  *(uint *)(lVar1 + 0x28 + lVar4 * 4) = uVar16;
  *(uint *)(lVar1 + 0x2c + lVar4 * 4) = uVar11;
  *(int *)(this + 0xc) = iVar5;
  *(undefined4 *)(lVar1 + 0x30 + lVar4 * 4) = 0x47c35280;
  return;
}


