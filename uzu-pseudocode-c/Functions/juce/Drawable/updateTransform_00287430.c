// Function : updateTransform
// Namespace: juce:Drawable
// Entry    : 00287430
// Prototype: undefined updateTransform(Drawable * this)
// Body     : 00287430 - 00287596


/* juce::Drawable::updateTransform() */

void __thiscall juce::Drawable::updateTransform(Drawable *this)

{
  float fVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  undefined4 in_EAX;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar8 = *(float *)(this + 0x100);
  fVar3 = *(float *)(this + 0x104);
  fVar4 = *(float *)(this + 0x10c);
  auVar2._4_4_ = -(uint)(fVar3 != 0.0);
  auVar2._0_4_ = -(uint)(DAT_005d9038 != fVar8);
  auVar2._8_4_ = -(uint)(*(float *)(this + 0x108) != 0.0);
  auVar2._12_4_ = -(uint)(fVar4 != 0.0);
  iVar5 = movmskps(in_EAX,auVar2);
  fVar1 = *(float *)(this + 0x110);
  fVar11 = *(float *)(this + 0x114);
  if ((((iVar5 == 0) && (fVar1 == DAT_005d9038)) && (!NAN(fVar1) && !NAN(DAT_005d9038))) &&
     ((fVar11 == 0.0 && (!NAN(fVar11))))) {
    return;
  }
  iVar5 = *(int *)(this + 0xf0) + (int)*(undefined8 *)(this + 0x38);
  iVar6 = (int)((ulong)*(undefined8 *)(this + 0x38) >> 0x20) + *(int *)(this + 0xf4);
  fVar12 = (float)-iVar5;
  fVar10 = (float)-iVar6;
  fVar9 = fVar3 * 0.0 + fVar8;
  fVar7 = fVar8 * 0.0 + fVar3;
  fVar8 = fVar8 * fVar12 + fVar3 * fVar10 + *(float *)(this + 0x108);
  local_8 = fVar4 * 0.0 + fVar1;
  local_c = fVar1 * 0.0 + fVar4;
  fVar11 = fVar11 + fVar4 * fVar12 + fVar1 * fVar10;
  local_18 = local_c * 0.0 + fVar9;
  local_14 = local_8 * 0.0 + fVar7;
  local_10 = fVar11 * 0.0 + fVar8 + (float)iVar5;
  local_c = fVar9 * 0.0 + local_c;
  local_8 = fVar7 * 0.0 + local_8;
  local_4 = fVar8 * 0.0 + fVar11 + (float)iVar6;
  Component::setTransform((Component *)this,&local_18);
  return;
}


