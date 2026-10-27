// Function : ~CPluginView
// Namespace: Steinberg:CPluginView
// Entry    : 00187a10
// Prototype: undefined ~CPluginView(CPluginView * this)
// Body     : 00187a10 - 00187a40


/* Steinberg::CPluginView::~CPluginView() */

void __thiscall Steinberg::CPluginView::~CPluginView(CPluginView *this)

{
  *(undefined ***)this = &PTR_queryInterface_00702e30;
  *(undefined ***)(this + 0x10) = &PTR_queryInterface_00702f28;
  if (*(long **)(this + 0x30) != (long *)0x0) {
                    /* try { // try from 00187a35 to 00187a37 has its CatchHandler @ 00187a41 */
    (**(code **)(**(long **)(this + 0x30) + 0x10))();
  }
  operator_delete(this);
  return;
}


