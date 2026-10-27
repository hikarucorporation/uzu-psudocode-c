// Function : setTransform
// Namespace: juce:Component
// Entry    : 002871b0
// Prototype: undefined setTransform(Component * this, float * param_1)
// Body     : 002871b0 - 0028733d


/* juce::Component::setTransform(juce::AffineTransform const&) */

void __thiscall juce::Component::setTransform(Component *this,float *param_1)

{
  float fVar1;
  float *pfVar2;
  void *pvVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined4 in_EAX;
  int iVar10;
  undefined8 *puVar11;
  
  fVar5 = *param_1;
  fVar6 = param_1[1];
  fVar7 = param_1[2];
  fVar8 = param_1[3];
  auVar4._4_4_ = -(uint)(fVar6 != 0.0);
  auVar4._0_4_ = -(uint)(DAT_005d9038 != fVar5);
  auVar4._8_4_ = -(uint)(fVar7 != 0.0);
  auVar4._12_4_ = -(uint)(fVar8 != 0.0);
  iVar10 = movmskps(in_EAX,auVar4);
  fVar1 = param_1[4];
  if (((iVar10 != 0) || (fVar1 != DAT_005d9038)) || (NAN(fVar1) || NAN(DAT_005d9038))) {
    pfVar2 = *(float **)(this + 0x50);
joined_r0x0028723e:
    if (pfVar2 != (float *)0x0) {
      if ((*pfVar2 == fVar5) && (!NAN(*pfVar2) && !NAN(fVar5))) {
        if ((pfVar2[1] == fVar6) && (!NAN(pfVar2[1]) && !NAN(fVar6))) {
          if ((pfVar2[2] == fVar7) && (!NAN(pfVar2[2]) && !NAN(fVar7))) {
            if ((pfVar2[3] == fVar8) && (!NAN(pfVar2[3]) && !NAN(fVar8))) {
              if ((pfVar2[4] == fVar1) && (!NAN(pfVar2[4]) && !NAN(fVar1))) {
                if ((pfVar2[5] == param_1[5]) && (!NAN(pfVar2[5]) && !NAN(param_1[5]))) {
                  return;
                }
              }
            }
          }
        }
      }
      internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
      puVar11 = *(undefined8 **)(this + 0x50);
      puVar11[2] = *(undefined8 *)(param_1 + 4);
      uVar9 = *(undefined8 *)(param_1 + 2);
      *puVar11 = *(undefined8 *)param_1;
      puVar11[1] = uVar9;
      goto LAB_00287314;
    }
    internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
    puVar11 = operator_new(0x18);
    uVar9 = *(undefined8 *)(param_1 + 2);
    *puVar11 = *(undefined8 *)param_1;
    puVar11[1] = uVar9;
    puVar11[2] = *(undefined8 *)(param_1 + 4);
    pvVar3 = *(void **)(this + 0x50);
    *(undefined8 **)(this + 0x50) = puVar11;
  }
  else {
    pfVar2 = *(float **)(this + 0x50);
    if ((param_1[5] != 0.0) || (NAN(param_1[5]))) goto joined_r0x0028723e;
    if (pfVar2 == (float *)0x0) {
      return;
    }
    internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
    pvVar3 = *(void **)(this + 0x50);
    *(undefined8 *)(this + 0x50) = 0;
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
LAB_00287314:
  internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
  sendMovedResizedMessages(this,'\0',0);
  return;
}


