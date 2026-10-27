// Function : getOffsetAtPoint
// Namespace: juce:TextEditor:EditorAccessibilityHandler:TextEditorTextInterface
// Entry    : 00270e70
// Prototype: undefined getOffsetAtPoint(long param_1, TextEditor * param_2, undefined8 param_3, undefined8 param_4, uint * param_5, ulong param_6)
// Body     : 00270e70 - 00270f51


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::TextEditor::EditorAccessibilityHandler::TextEditorTextInterface::getOffsetAtPoint(juce::Point<int>)
   const */

void __cdecl
juce::TextEditor::EditorAccessibilityHandler::TextEditorTextInterface::getOffsetAtPoint
          (long param_1,TextEditor *param_2,undefined8 param_3,undefined8 param_4,uint *param_5,
          ulong param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  TextEditor *this;
  TextEditor *pTVar6;
  TextEditor *pTVar7;
  ulong uVar8;
  undefined8 extraout_RDX;
  TextEditor *pTVar9;
  float fVar10;
  undefined1 auVar11 [16];
  
  this = *(TextEditor **)(param_1 + 8);
  pTVar9 = this + 8;
  pTVar6 = pTVar9;
  do {
    pTVar7 = pTVar6;
    pTVar6 = *(TextEditor **)(pTVar7 + 0x30);
  } while (*(TextEditor **)(pTVar7 + 0x30) != (TextEditor *)0x0);
  uVar8 = detail::ComponentHelpers::convertFromParentSpace<juce::Point<int>>
                    ((long *)pTVar7,(ulong)param_2);
  auVar11._8_8_ = extraout_RDX;
  auVar11._0_8_ = uVar8;
  if (pTVar7 != pTVar9) {
    auVar11 = detail::ComponentHelpers::convertFromDistantParentSpace<juce::Point<int>>
                        ((long)pTVar7,(long *)pTVar9,uVar8);
    param_2 = pTVar9;
  }
  iVar1 = *(int *)(this + 0x27c);
  iVar2 = *(int *)(this + 0x198);
  iVar3 = *(int *)(this + 0x278);
  iVar4 = *(int *)(this + 0x19c);
  iVar5 = *(int *)(*(long *)(this + 0x188) + 0x208);
  fVar10 = getYOffset(this,param_2,auVar11._8_8_,*(long *)(this + 0x188),param_5,param_6);
  indexAtPosition((float)((auVar11._0_4_ - (iVar3 + iVar4)) + iVar5),
                  (float)((auVar11._4_4_ + *(int *)(*(long *)(this + 0x188) + 0x20c)) -
                         SUB84((double)(fVar10 + (float)iVar2 + (float)iVar1) + DAT_005d9098,0)),
                  this);
  return;
}


