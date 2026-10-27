// Function : setFrame
// Namespace: Steinberg:CPluginView
// Entry    : 001a0310
// Prototype: undefined8 setFrame(CPluginView * this, long * param_1)
// Body     : 001a0310 - 001a0349


/* non-virtual thunk to Steinberg::CPluginView::setFrame(Steinberg::IPlugFrame*) */

undefined8 __thiscall Steinberg::CPluginView::setFrame(CPluginView *this,long *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x20);
  if (plVar1 != param_1) {
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    *(long **)(this + 0x20) = param_1;
    if (param_1 != (long *)0x0) {
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  return 0;
}


