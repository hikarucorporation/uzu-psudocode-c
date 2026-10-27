// Function : visibleAreaChanged
// Namespace: juce:TextEditor:TextEditorViewport
// Entry    : 002636b0
// Prototype: undefined visibleAreaChanged(long param_1, undefined8 param_2, undefined8 param_3, long param_4, uint * param_5, ulong param_6)
// Body     : 002636b0 - 00263745


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::TextEditor::TextEditorViewport::visibleAreaChanged(juce::Rectangle<int> const&) */

void __cdecl
juce::TextEditor::TextEditorViewport::visibleAreaChanged
          (long param_1,undefined8 param_2,undefined8 param_3,long param_4,uint *param_5,
          ulong param_6)

{
  undefined1 uVar1;
  TextEditor *this;
  int iVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x244) == '\0') {
    this = *(TextEditor **)(param_1 + 0x238);
    if (this[0x1cb] == (TextEditor)0x0) {
      iVar4 = 0x7fffffff;
      updateBaseShapedTextOptions(this);
      uVar3 = extraout_RDX_00;
      if (*(int *)(param_1 + 0x240) != 0x7fffffff) goto LAB_00263718;
    }
    else {
      iVar2 = *(int *)(*(long *)(this + 0x188) + 0x150) - *(int *)(this + 0x278);
      iVar4 = 3;
      if (3 < iVar2) {
        iVar4 = iVar2;
      }
      iVar4 = iVar4 + -2;
      updateBaseShapedTextOptions(this);
      uVar3 = extraout_RDX;
      if (iVar4 != *(int *)(param_1 + 0x240)) {
LAB_00263718:
        *(int *)(param_1 + 0x240) = iVar4;
        uVar1 = *(undefined1 *)(param_1 + 0x244);
        *(undefined1 *)(param_1 + 0x244) = 1;
                    /* try { // try from 00263733 to 00263737 has its CatchHandler @ 00263746 */
        checkLayout(*(TextEditor **)(param_1 + 0x238),param_2,uVar3,param_4,param_5,param_6);
        *(undefined1 *)(param_1 + 0x244) = uVar1;
        return;
      }
    }
  }
  return;
}


