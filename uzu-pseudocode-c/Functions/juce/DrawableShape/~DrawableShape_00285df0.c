// Function : ~DrawableShape
// Namespace: juce:DrawableShape
// Entry    : 00285df0
// Prototype: undefined ~DrawableShape(DrawableShape * this)
// Body     : 00285df0 - 00285f33


/* juce::DrawableShape::~DrawableShape() */

void __thiscall juce::DrawableShape::~DrawableShape(DrawableShape *this)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__DrawableShape_00708260;
  plVar2 = *(long **)(this + 0x210);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  pvVar3 = *(void **)(this + 0x208);
  if (pvVar3 != (void *)0x0) {
    *(undefined4 *)((long)pvVar3 + 0x24) = 0;
    free(*(void **)((long)pvVar3 + 0x18));
    operator_delete(pvVar3);
  }
  *(undefined8 *)(this + 0x208) = 0;
  plVar2 = *(long **)(this + 0x1e0);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  pvVar3 = *(void **)(this + 0x1d8);
  if (pvVar3 != (void *)0x0) {
    *(undefined4 *)((long)pvVar3 + 0x24) = 0;
    free(*(void **)((long)pvVar3 + 0x18));
    operator_delete(pvVar3);
  }
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x1b4) = 0;
  free(*(void **)(this + 0x1a8));
  *(undefined4 *)(this + 0x18c) = 0;
  free(*(void **)(this + 0x180));
  *(undefined4 *)(this + 0x17c) = 0;
  free(*(void **)(this + 0x170));
  *(undefined ***)this = &PTR__Drawable_00707b28;
  ErasedScopeGuard::~ErasedScopeGuard((ErasedScopeGuard *)(this + 0x140));
  if (*(code **)(this + 0x130) != (code *)0x0) {
                    /* try { // try from 00285efe to 00285f07 has its CatchHandler @ 00285f34 */
    (**(code **)(this + 0x130))(this + 0x120,this + 0x120,3);
  }
  if (*(long **)(this + 0xf8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf8) + 8))();
  }
  *(undefined8 *)(this + 0xf8) = 0;
  Component::~Component((Component *)this);
  return;
}


