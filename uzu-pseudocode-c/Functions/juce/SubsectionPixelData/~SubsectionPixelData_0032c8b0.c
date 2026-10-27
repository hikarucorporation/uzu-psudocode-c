// Function : ~SubsectionPixelData
// Namespace: juce:SubsectionPixelData
// Entry    : 0032c8b0
// Prototype: undefined ~SubsectionPixelData(SubsectionPixelData * this)
// Body     : 0032c8b0 - 0032c8dc


/* juce::SubsectionPixelData::~SubsectionPixelData() */

void __thiscall juce::SubsectionPixelData::~SubsectionPixelData(SubsectionPixelData *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__SubsectionPixelData_00711e90;
  plVar2 = *(long **)(this + 0x50);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  ImagePixelData::~ImagePixelData((ImagePixelData *)this);
  return;
}


