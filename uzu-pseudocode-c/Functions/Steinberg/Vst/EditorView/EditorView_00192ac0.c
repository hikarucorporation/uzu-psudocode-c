// Function : EditorView
// Namespace: Steinberg:Vst:EditorView
// Entry    : 00192ac0
// Prototype: undefined EditorView(EditorView * this, long * param_1, undefined4 * param_2)
// Body     : 00192ac0 - 00192b2b


/* Steinberg::Vst::EditorView::EditorView(Steinberg::Vst::EditController*, Steinberg::ViewRect*) */

void __thiscall
Steinberg::Vst::EditorView::EditorView(EditorView *this,long *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(this + 8) = 1;
  *(undefined ***)this = &PTR_queryInterface_00702e30;
  *(undefined ***)(this + 0x10) = &PTR_queryInterface_00702f28;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  if (param_2 != (undefined4 *)0x0) {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *(undefined4 *)(this + 0x18) = *param_2;
    *(undefined4 *)(this + 0x1c) = uVar1;
    *(undefined4 *)(this + 0x20) = uVar2;
    *(undefined4 *)(this + 0x24) = uVar3;
  }
  *(undefined ***)this = &PTR_queryInterface_00703888;
  *(undefined ***)(this + 0x10) = &PTR_queryInterface_00703980;
  *(long **)(this + 0x38) = param_1;
  if (param_1 != (long *)0x0) {
                    /* try { // try from 00192b1e to 00192b23 has its CatchHandler @ 00192b2c */
    (**(code **)(*param_1 + 8))(param_1);
  }
  return;
}


