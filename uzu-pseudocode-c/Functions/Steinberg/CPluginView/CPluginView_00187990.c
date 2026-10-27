// Function : CPluginView
// Namespace: Steinberg:CPluginView
// Entry    : 00187990
// Prototype: undefined CPluginView(CPluginView * this, undefined8 * param_1)
// Body     : 00187990 - 001879c6


/* Steinberg::CPluginView::CPluginView(Steinberg::ViewRect const*) */

void __thiscall Steinberg::CPluginView::CPluginView(CPluginView *this,undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(this + 8) = 1;
  *(undefined ***)this = &PTR_queryInterface_00702e30;
  *(undefined ***)(this + 0x10) = &PTR_queryInterface_00702f28;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = param_1[1];
    *(undefined8 *)(this + 0x18) = *param_1;
    *(undefined8 *)(this + 0x20) = uVar1;
  }
  return;
}


