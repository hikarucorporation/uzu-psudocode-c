// Function : make_unique<juce::TextEditor::ParagraphStorage,juce::String&,juce::TextEditor::TextEditorStorage_const*>
// Namespace: std
// Entry    : 00246020
// Prototype: __single_object make_unique<juce::TextEditor::ParagraphStorage,juce::String&,juce::TextEditor::TextEditorStorage_const*>(undefined8 * param_1, undefined8 * param_2, undefined8 * param_3)
// Body     : 00246020 - 002461d4


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::__detail::_MakeUniq<juce::TextEditor::ParagraphStorage>::__single_object
   std::make_unique<juce::TextEditor::ParagraphStorage, juce::String&,
   juce::TextEditor::TextEditorStorage const*>(juce::String&, juce::TextEditor::TextEditorStorage
   const*&&) */

void __cdecl
std::
make_unique<juce::TextEditor::ParagraphStorage,juce::String&,juce::TextEditor::TextEditorStorage_const*>
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  ParagraphStorage *this;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  
  this = operator_new(0x68);
  pbVar8 = (byte *)*param_2;
  pbVar9 = pbVar8 + -0x10;
  if (pbVar9 != (byte *)&juce::emptyString) {
    LOCK();
    *(int *)pbVar9 = *(int *)pbVar9 + 1;
    UNLOCK();
  }
  uVar2 = *param_3;
  *(byte **)this = pbVar8;
  this[0x10] = (ParagraphStorage)0x0;
  lVar7 = 0;
LAB_00246073:
  pbVar9 = pbVar8 + 1;
  bVar1 = *pbVar8;
  uVar10 = (uint)bVar1;
  if ((char)bVar1 < '\0') {
    if ((bVar1 & 0x40) == 0) {
      uVar10 = uVar10 & 0x7f;
      if ((bVar1 & 0x7f) == 0) goto LAB_002461a1;
      goto LAB_00246164;
    }
    if ((bVar1 & 0x20) == 0) {
      uVar5 = 0x3f;
      lVar6 = 0;
      bVar3 = false;
      bVar4 = false;
    }
    else {
      bVar3 = true;
      if ((bVar1 & 0x10) == 0) {
        uVar5 = 0x1f;
        lVar6 = 1;
        bVar4 = false;
      }
      else {
        uVar5 = 0xf;
        lVar6 = 2;
        bVar4 = true;
      }
    }
    uVar10 = uVar10 & uVar5;
    if ((pbVar8[1] & 0xc0) == 0x80) {
      pbVar11 = pbVar8 + lVar6 + 2;
      uVar10 = pbVar8[1] & 0x3f | uVar10 << 6;
      pbVar9 = pbVar11;
      if (!bVar3) goto joined_r0x00246162;
      pbVar9 = pbVar8 + 2;
      if ((*pbVar9 & 0xc0) != 0x80) {
        if (uVar10 != 0) goto LAB_00246164;
LAB_002461a1:
        *(long *)(this + 0x18) = lVar7;
        *(undefined8 *)(this + 0x20) = 0;
        *(undefined8 *)(this + 0x28) = 0;
        *(undefined8 *)(this + 0x30) = uVar2;
        this[0x48] = (ParagraphStorage)0x0;
        this[0x54] = (ParagraphStorage)0x0;
        this[0x60] = (ParagraphStorage)0x0;
                    /* try { // try from 002461c0 to 002461c7 has its CatchHandler @ 002461d5 */
        juce::TextEditor::ParagraphStorage::updatePasswordReplacementText(this);
        *param_1 = this;
        return;
      }
      uVar10 = *pbVar9 & 0x3f | uVar10 << 6;
      pbVar9 = pbVar11;
      if (bVar4) {
        uVar5 = (uint)pbVar8[3];
        pbVar9 = pbVar8 + 3;
        if ((uVar5 & 0xffffffc0) == 0x80) {
          uVar10 = uVar10 << 6 | uVar5 & 0x3f;
          pbVar9 = pbVar11;
        }
      }
    }
  }
joined_r0x00246162:
  if (uVar10 == 0) goto LAB_002461a1;
LAB_00246164:
  lVar6 = 1;
  if ((0x7f < uVar10) && (lVar6 = 2, 0x7ff < uVar10)) {
    lVar6 = 4 - (ulong)(uVar10 < 0x10000);
  }
  lVar7 = lVar7 + lVar6;
  pbVar8 = pbVar9;
  goto LAB_00246073;
}


