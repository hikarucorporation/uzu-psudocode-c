// Function : ~Viewport
// Namespace: juce:Viewport
// Entry    : 002630d0
// Prototype: undefined ~Viewport(Viewport * this)
// Body     : 002630d0 - 00263196


/* juce::Viewport::~Viewport() */

void __thiscall juce::Viewport::~Viewport(Viewport *this)

{
  long *plVar1;
  DragToScrollListener *this_00;
  long *plVar2;
  
  *(undefined ***)this = &PTR__Viewport_00708dc8;
  *(undefined ***)(this + 0xf0) = &PTR__Viewport_00708f98;
  *(undefined ***)(this + 0xf8) = &PTR__Viewport_00708ff8;
                    /* try { // try from 002630fd to 00263101 has its CatchHandler @ 00263197 */
  deleteOrRemoveContentComp(this);
  this_00 = *(DragToScrollListener **)(this + 0x230);
  if (this_00 != (DragToScrollListener *)0x0) {
    DragToScrollListener::~DragToScrollListener(this_00);
    operator_delete(this_00);
  }
  *(undefined8 *)(this + 0x230) = 0;
  plVar2 = *(long **)(this + 0x200);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  Component::~Component((Component *)(this + 0x110));
  if (*(long **)(this + 0x108) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x108) + 8))();
  }
  *(undefined8 *)(this + 0x108) = 0;
  if (*(long **)(this + 0x100) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x100) + 8))();
  }
  *(undefined8 *)(this + 0x100) = 0;
  Component::~Component((Component *)this);
  return;
}


