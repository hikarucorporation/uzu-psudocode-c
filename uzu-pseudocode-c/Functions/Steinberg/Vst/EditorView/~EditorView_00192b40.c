// Function : ~EditorView
// Namespace: Steinberg:Vst:EditorView
// Entry    : 00192b40
// Prototype: undefined ~EditorView(EditorView * this)
// Body     : 00192b40 - 00192bbc


/* Steinberg::Vst::EditorView::~EditorView() */

void __thiscall Steinberg::Vst::EditorView::~EditorView(EditorView *this)

{
  long *plVar1;
  
  *(undefined ***)this = &PTR_queryInterface_00703888;
  *(undefined ***)(this + 0x10) = &PTR_queryInterface_00703980;
  plVar1 = *(long **)(this + 0x38);
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 00192b6d to 00192b83 has its CatchHandler @ 00192bc5 */
    (**(code **)(*plVar1 + 0x150))(plVar1,this);
    plVar1 = *(long **)(this + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
      *(long *)(this + 0x38) = 0;
    }
  }
  *(undefined ***)this = &PTR_queryInterface_00702e30;
  *(undefined ***)(this + 0x10) = &PTR_queryInterface_00702f28;
  if (*(long **)(this + 0x30) != (long *)0x0) {
                    /* try { // try from 00192bac to 00192bae has its CatchHandler @ 00192bbd */
    (**(code **)(**(long **)(this + 0x30) + 0x10))();
    *(undefined8 *)(this + 0x30) = 0;
  }
  return;
}


