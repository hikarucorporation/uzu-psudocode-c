// Function : ~BoundsChangeListener
// Namespace: juce:detail:BoundsChangeListener
// Entry    : 00287340
// Prototype: undefined ~BoundsChangeListener(BoundsChangeListener * this)
// Body     : 00287340 - 00287368


/* juce::detail::BoundsChangeListener::~BoundsChangeListener() */

void __thiscall
juce::detail::BoundsChangeListener::~BoundsChangeListener(BoundsChangeListener *this)

{
  ErasedScopeGuard::~ErasedScopeGuard((ErasedScopeGuard *)(this + 0x28));
  if (*(code **)(this + 0x18) != (code *)0x0) {
                    /* try { // try from 0028735a to 00287366 has its CatchHandler @ 00287369 */
    (**(code **)(this + 0x18))(this + 8,this + 8,3);
  }
  return;
}


