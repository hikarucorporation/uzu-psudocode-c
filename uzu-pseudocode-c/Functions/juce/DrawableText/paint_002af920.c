// Function : paint
// Namespace: juce:DrawableText
// Entry    : 002af920
// Prototype: undefined paint(DrawableText * this, Graphics * param_1, undefined8 param_2, undefined8 param_3, uint * param_4, undefined8 * param_5)
// Body     : 002af920 - 002afcc0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::DrawableText::paint(juce::Graphics&) */

void __thiscall
juce::DrawableText::paint
          (DrawableText *this,Graphics *param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
          undefined8 *param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  
  uVar1 = *(undefined8 *)(this + 0xf0);
  if (param_1[0x10] != (Graphics)0x0) {
    param_1[0x10] = (Graphics)0x0;
    (**(code **)(**(long **)(param_1 + 8) + 0x70))();
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),uVar1);
  fVar4 = hypotf((float)*(undefined8 *)(this + 0x160) - (float)*(undefined8 *)(this + 0x168),
                 (float)((ulong)*(undefined8 *)(this + 0x160) >> 0x20) -
                 (float)((ulong)*(undefined8 *)(this + 0x168) >> 0x20));
  local_38 = hypotf((float)*(undefined8 *)(this + 0x160) - (float)*(undefined8 *)(this + 0x170),
                    (float)((ulong)*(undefined8 *)(this + 0x160) >> 0x20) -
                    (float)((ulong)*(undefined8 *)(this + 0x170) >> 0x20));
  local_48 = (float)*(undefined8 *)(this + 0x160);
  local_3c = (float)((ulong)*(undefined8 *)(this + 0x160) >> 0x20);
  fVar7 = fVar4 * local_38;
  dVar9 = (double)fVar7;
  uVar5 = _DAT_005d91b0 & SUB84(dVar9,0);
  uVar6 = _UNK_005d91b4 & (uint)((ulong)dVar9 >> 0x20);
  if ((double)CONCAT44(uVar6,uVar5) == DAT_005d94e0) {
    if ((fVar7 == 0.0) && (!NAN(fVar7))) goto LAB_002afa9e;
  }
  else if (((double)CONCAT44(uVar6,uVar5) <= DAT_005db368) ||
          ((double)CONCAT44(uVar6,uVar5) <= DAT_005db370 * (double)CONCAT44(uVar6,uVar5))) {
LAB_002afa9e:
    fVar17 = 0.0;
    fVar13 = 0.0;
    fVar12 = 0.0;
    fVar16 = 0.0;
    fVar7 = fVar4;
    fVar8 = local_38;
    goto LAB_002afaa8;
  }
  dVar9 = _DAT_005d9000 / dVar9;
  fVar16 = (float)((double)_UNK_005dd214 * dVar9);
  fVar17 = (float)((double)_DAT_005dd220 * dVar9);
  fVar12 = _DAT_005dd230 * (float)((double)local_38 * dVar9) + fVar17 * _DAT_005dd230;
  fVar13 = _UNK_005dd234 * fVar16 + (float)((double)fVar4 * dVar9) * _UNK_005dd234;
  fVar7 = (float)((double)local_38 * dVar9);
  fVar8 = (float)((double)fVar4 * dVar9);
LAB_002afaa8:
  fVar10 = (float)*(undefined8 *)(this + 0x168) - local_48;
  fVar11 = (float)((ulong)*(undefined8 *)(this + 0x168) >> 0x20) - local_3c;
  fVar14 = (float)*(undefined8 *)(this + 0x170) - local_48;
  fVar15 = (float)((ulong)*(undefined8 *)(this + 0x170) >> 0x20) - local_3c;
  local_50 = fVar10 * fVar7 + fVar14 * fVar16;
  local_4c = fVar10 * fVar17 + fVar14 * fVar8;
  local_48 = fVar10 * fVar12 + fVar14 * fVar13 + local_48;
  local_44 = fVar7 * fVar11 + fVar16 * fVar15;
  local_40 = fVar17 * fVar11 + fVar8 * fVar15;
  local_3c = fVar11 * fVar12 + fVar13 * fVar15 + local_3c;
  if (param_1[0x10] != (Graphics)0x0) {
    param_1[0x10] = (Graphics)0x0;
    (**(code **)(**(long **)(param_1 + 8) + 0x70))();
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x20))(*(long **)(param_1 + 8),&local_50);
  if (param_1[0x10] != (Graphics)0x0) {
    param_1[0x10] = (Graphics)0x0;
    (**(code **)(**(long **)(param_1 + 8) + 0x70))();
  }
  (**(code **)(**(long **)(param_1 + 8) + 0xf8))(*(long **)(param_1 + 8),this + 0x188);
  Graphics::setColour(param_1,*(undefined4 *)(this + 0x199));
  fVar4 = fVar4 + 0.0;
  if (this[0x198] == (DrawableText)0x0) {
    uVar3 = 0x7fffffff;
    if (fVar4 < DAT_00653434) {
      fVar4 = ceilf(fVar4);
      uVar3 = (ulong)(uint)(int)fVar4;
    }
    if (DAT_00653434 <= local_38 + 0.0) {
      uVar2 = 0x7fffffff00000000;
    }
    else {
      fVar4 = ceilf(local_38 + 0.0);
      uVar2 = (ulong)(uint)(int)fVar4 << 0x20;
    }
    Graphics::drawFittedText
              (0,DAT_005d9960,(long)param_1,(long *)(this + 400),0,uVar2 | uVar3,
               (uint *)(ulong)*(uint *)(this + 0x1a0),0x100000);
  }
  else {
    fVar7 = DAT_00653434;
    if (fVar4 < DAT_00653434) {
      fVar4 = ceilf(fVar4);
      fVar7 = (float)(int)fVar4;
    }
    fVar4 = DAT_00653434;
    if (local_38 + 0.0 < DAT_00653434) {
      fVar4 = ceilf(local_38 + 0.0);
      fVar4 = (float)(int)fVar4;
    }
    Graphics::drawText(0,CONCAT44(fVar4,fVar7),(long)param_1,(ulong *)(this + 400),
                       *(uint *)(this + 0x1a0),0,param_4,param_5);
  }
  return;
}


