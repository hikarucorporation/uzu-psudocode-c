// Function : ~Drawable
// Namespace: juce:Drawable
// Entry    : 00285f40
// Prototype: undefined ~Drawable(Drawable * this)
// Body     : 00285f40 - 00285f9c


/* juce::Drawable::~Drawable() */

void __thiscall juce::Drawable::~Drawable(Drawable *this)

{
  *(undefined ***)this = &PTR__Drawable_00707b28;
  ErasedScopeGuard::~ErasedScopeGuard((ErasedScopeGuard *)(this + 0x140));
  if (*(code **)(this + 0x130) != (code *)0x0) {
                    /* try { // try from 00285f6d to 00285f76 has its CatchHandler @ 00285f9d */
    (**(code **)(this + 0x130))(this + 0x120,this + 0x120,3);
  }
  if (*(long **)(this + 0xf8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf8) + 8))();
  }
  *(undefined8 *)(this + 0xf8) = 0;
  Component::~Component((Component *)this);
  return;
}


