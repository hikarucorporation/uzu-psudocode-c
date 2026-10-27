// Function : ~CPluginView
// Namespace: Steinberg:CPluginView
// Entry    : 001879d0
// Prototype: undefined ~CPluginView(CPluginView * this)
// Body     : 001879d0 - 00187a01


/* Steinberg::CPluginView::~CPluginView() */

void __thiscall Steinberg::CPluginView::~CPluginView(CPluginView *this)

{
  *(undefined ***)this = &PTR_queryInterface_00702e30;
  *(undefined ***)(this + 0x10) = &PTR_queryInterface_00702f28;
  if (*(long **)(this + 0x30) != (long *)0x0) {
                    /* try { // try from 001879f5 to 001879f7 has its CatchHandler @ 00187a02 */
    (**(code **)(**(long **)(this + 0x30) + 0x10))();
    *(undefined8 *)(this + 0x30) = 0;
  }
  return;
}


