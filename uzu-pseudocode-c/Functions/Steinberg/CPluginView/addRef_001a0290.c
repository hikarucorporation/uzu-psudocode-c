// Function : addRef
// Namespace: Steinberg:CPluginView
// Entry    : 001a0290
// Prototype: undefined4 addRef(CPluginView * this)
// Body     : 001a0290 - 001a0298


/* non-virtual thunk to Steinberg::CPluginView::addRef() */

undefined4 __thiscall Steinberg::CPluginView::addRef(CPluginView *this)

{
  LOCK();
  *(int *)(this + -8) = *(int *)(this + -8) + 1;
  UNLOCK();
  return *(undefined4 *)(this + -8);
}


