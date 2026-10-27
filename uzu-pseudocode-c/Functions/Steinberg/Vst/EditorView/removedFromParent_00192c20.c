// Function : removedFromParent
// Namespace: Steinberg:Vst:EditorView
// Entry    : 00192c20
// Prototype: undefined removedFromParent(EditorView * this)
// Body     : 00192c20 - 00192c38


/* Steinberg::Vst::EditorView::removedFromParent() */

void __thiscall Steinberg::Vst::EditorView::removedFromParent(EditorView *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x38);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00192c36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x160))(plVar1,this);
  return;
}


