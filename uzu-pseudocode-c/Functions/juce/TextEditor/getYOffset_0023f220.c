// Function : getYOffset
// Namespace: juce:TextEditor
// Entry    : 0023f220
// Prototype: float getYOffset(TextEditor * this, undefined8 param_1, undefined8 param_2, long param_3, uint * param_4, ulong param_5)
// Body     : 0023f220 - 0023f44b


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::TextEditor::getYOffset() const */

float __thiscall
juce::TextEditor::getYOffset
          (TextEditor *this,undefined8 param_1,undefined8 param_2,long param_3,uint *param_4,
          ulong param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ParagraphStorage *pPVar4;
  ParagraphStorage *pPVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  int iVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_34;
  
  iVar3 = *(int *)(*(long *)(this + 0x188) + 0x154) - *(int *)(this + 0x27c);
  iVar6 = 1;
  if (0 < iVar3) {
    iVar6 = iVar3;
  }
  fVar10 = *(float *)(this + 0x2ec);
  fVar12 = (float)(_DAT_005d91c0 & (uint)fVar10);
  if (fVar12 == DAT_005d94c8) {
    local_34 = 0.0;
    if ((fVar10 == DAT_005d9038) && (!NAN(fVar10) && !NAN(DAT_005d9038))) goto LAB_0023f326;
  }
  else {
    fVar10 = (float)((uint)(fVar10 + DAT_005d9054) & _DAT_005d91c0);
    local_34 = 0.0;
    if (fVar10 <= DAT_005d94cc) goto LAB_0023f326;
    fVar11 = DAT_005d9038;
    if (DAT_005d9038 <= fVar12) {
      fVar11 = fVar12;
    }
    if (fVar10 <= fVar11 * DAT_005d94d0) goto LAB_0023f326;
  }
  param_3 = *(long *)(this + 0x330);
  local_34 = 0.0;
  if (*(undefined8 **)(param_3 + 0x80) != *(undefined8 **)(param_3 + 0x88)) {
    pPVar4 = ParagraphStorage::getShapedText((ParagraphStorage *)**(undefined8 **)(param_3 + 0x80));
    lVar1 = *(long *)pPVar4;
    param_3 = *(long *)(lVar1 + 0x150);
    param_2 = extraout_RDX;
    if (param_3 != *(long *)(lVar1 + 0x158)) {
      local_34 = (DAT_005d9038 / *(float *)(this + 0x2ec) + DAT_005d9054) *
                 *(float *)(*(long *)(lVar1 + 0x168) + 0x10);
    }
  }
LAB_0023f326:
  if (((byte)this[0x1a8] & 8) == 0) {
    fVar10 = (float)iVar6;
    lVar1 = *(long *)(this + 0x330);
    lVar8 = *(long *)(lVar1 + 0x70) - *(long *)(lVar1 + 0x68);
    if (lVar8 != 0) {
      lVar1 = *(long *)(lVar1 + 0x80);
      fVar12 = 0.0;
      lVar7 = 0;
      do {
        pPVar4 = *(ParagraphStorage **)(lVar1 + (lVar7 >> 1));
        if (pPVar4[0x54] == (ParagraphStorage)0x0) {
          pPVar5 = ParagraphStorage::getShapedText(pPVar4);
          lVar2 = *(long *)pPVar5;
          param_3 = *(long *)(lVar2 + 0x150);
          if (param_3 == *(long *)(lVar2 + 0x158)) {
            fVar11 = 0.0;
          }
          else {
            fVar11 = *(float *)(*(long *)(lVar2 + 0x170) + -8);
          }
          *(float *)(pPVar4 + 0x50) = fVar11;
          pPVar4[0x54] = (ParagraphStorage)0x1;
          param_2 = extraout_RDX_00;
        }
        else {
          fVar11 = *(float *)(pPVar4 + 0x50);
        }
        fVar12 = fVar12 + fVar11;
      } while ((fVar12 < fVar10) &&
              (bVar9 = (lVar8 >> 4) * 0x10 + -0x10 != lVar7, lVar7 = lVar7 + 0x10, bVar9));
      if (fVar10 <= fVar12) {
        return local_34;
      }
    }
    local_34 = getTextStorageHeight(this,param_1,param_2,param_3,param_4,param_5);
    local_34 = fVar10 - local_34;
    if (local_34 <= 0.0) {
      local_34 = 0.0;
    }
    if (((byte)this[0x1a8] & 0x10) == 0) {
      local_34 = local_34 * DAT_005d9044;
    }
  }
  return local_34;
}


