// Function : ~BoundsChangeListener
// Namespace: juce:detail:BoundsChangeListener
// Entry    : 002873d0
// Prototype: undefined ~BoundsChangeListener(BoundsChangeListener * this)
// Body     : 002873d0 - 002873fc


/* juce::detail::BoundsChangeListener::~BoundsChangeListener() */

void __thiscall
juce::detail::BoundsChangeListener::~BoundsChangeListener(BoundsChangeListener *this)

{
  ErasedScopeGuard::~ErasedScopeGuard((ErasedScopeGuard *)(this + 0x28));
  if (*(code **)(this + 0x18) != (code *)0x0) {
                    /* try { // try from 002873ea to 002873f3 has its CatchHandler @ 002873fd */
    (**(code **)(this + 0x18))(this + 8,this + 8,3);
  }
  operator_delete(this);
  return;
}


