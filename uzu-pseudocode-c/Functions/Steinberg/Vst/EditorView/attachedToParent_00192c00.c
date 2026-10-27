// Function : attachedToParent
// Namespace: Steinberg:Vst:EditorView
// Entry    : 00192c00
// Prototype: undefined attachedToParent(EditorView * this)
// Body     : 00192c00 - 00192c18


/* Steinberg::Vst::EditorView::attachedToParent() */

void __thiscall Steinberg::Vst::EditorView::attachedToParent(EditorView *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x38);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00192c16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x158))(plVar1,this);
  return;
}


