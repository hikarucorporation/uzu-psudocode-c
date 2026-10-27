// Function : getTextStorageHeight
// Namespace: juce:TextEditor
// Entry    : 0023fb40
// Prototype: float getTextStorageHeight(TextEditor * this, undefined8 param_1, undefined8 param_2, long param_3, uint * param_4, ulong param_5)
// Body     : 0023fb40 - 0023fd36


/* juce::TextEditor::getTextStorageHeight() const */

float __thiscall
juce::TextEditor::getTextStorageHeight
          (TextEditor *this,undefined8 param_1,undefined8 param_2,long param_3,uint *param_4,
          ulong param_5)

{
  SharedFontInternal *pSVar1;
  float fVar2;
  long lVar3;
  ParagraphStorage *this_00;
  long lVar4;
  ParagraphStorage *pPVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  long lVar6;
  long *plVar7;
  SharedFontInternal *this_01;
  long lVar8;
  undefined8 uVar9;
  float fVar10;
  float local_3c;
  SharedFontInternal *local_38;
  float local_30;
  float local_2c;
  
  plVar7 = *(long **)(this + 0x330);
  lVar3 = plVar7[0x10];
  if (plVar7[0xe] - plVar7[0xd] == 0) {
    lVar6 = plVar7[0x11];
    local_3c = 0.0;
    if (lVar3 == lVar6) goto LAB_0023fc49;
  }
  else {
    lVar8 = (plVar7[0xe] - plVar7[0xd] >> 4) * 0x10;
    local_3c = 0.0;
    lVar6 = 0;
    do {
      while (this_00 = *(ParagraphStorage **)(lVar3 + (lVar6 >> 1)),
            this_00[0x54] == (ParagraphStorage)0x0) {
        pPVar5 = ParagraphStorage::getShapedText(this_00);
        lVar4 = *(long *)pPVar5;
        param_3 = *(long *)(lVar4 + 0x150);
        if (param_3 == *(long *)(lVar4 + 0x158)) {
          fVar10 = 0.0;
        }
        else {
          fVar10 = *(float *)(*(long *)(lVar4 + 0x170) + -8);
        }
        *(float *)(this_00 + 0x50) = fVar10;
        this_00[0x54] = (ParagraphStorage)0x1;
        local_3c = local_3c + fVar10;
        lVar6 = lVar6 + 0x10;
        param_2 = extraout_RDX;
        if (lVar8 == lVar6) goto LAB_0023fbf4;
      }
      local_3c = local_3c + *(float *)(this_00 + 0x50);
      lVar6 = lVar6 + 0x10;
    } while (lVar8 != lVar6);
LAB_0023fbf4:
    plVar7 = *(long **)(this + 0x330);
    lVar6 = plVar7[0x11];
    if (plVar7[0x10] == lVar6) goto LAB_0023fc49;
  }
  uVar9 = juce::String::endsWith(*(String **)(lVar6 + -8),"\n");
  param_2 = extraout_RDX_00;
  if ((char)uVar9 == '\0') {
    return local_3c;
  }
LAB_0023fc49:
  fVar10 = *(float *)(this + 0x2ec);
  if (*plVar7 == plVar7[1]) {
    local_38 = *(SharedFontInternal **)(this + 0x288);
    if (local_38 == (SharedFontInternal *)0x0) {
      this_01 = (SharedFontInternal *)0x0;
      fVar2 = fRam0000000000000064;
    }
    else {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
      this_01 = local_38;
      fVar2 = *(float *)(local_38 + 100);
    }
  }
  else {
    local_38 = *(SharedFontInternal **)(plVar7[4] + -8);
    if (local_38 != (SharedFontInternal *)0x0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    fVar2 = *(float *)(local_38 + 100);
    this_01 = local_38;
  }
  if (fVar2 <= 0.0) {
    local_30 = *(float *)(this_01 + 0x68);
                    /* try { // try from 0023fcd3 to 0023fcdc has its CatchHandler @ 0023fd37 */
    local_2c = fVar10;
    uVar9 = Font::SharedFontInternal::getAscentDescent
                      (this_01,(long *)&local_38,param_2,param_3,param_4,param_5);
    local_3c = local_3c + local_2c * local_30 * ((float)((ulong)uVar9 >> 0x20) + (float)uVar9);
    this_01 = local_38;
    if (local_38 == (SharedFontInternal *)0x0) {
      return local_3c;
    }
  }
  else {
    local_3c = local_3c + fVar10 * fVar2;
  }
  LOCK();
  pSVar1 = this_01 + 8;
  *(int *)pSVar1 = *(int *)pSVar1 + -1;
  UNLOCK();
  if (*(int *)pSVar1 == 0) {
    (**(code **)(*(long *)this_01 + 8))();
  }
  return local_3c;
}


