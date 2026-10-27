// Function : ~GetXProperty
// Namespace: juce:XWindowSystemUtilities:GetXProperty
// Entry    : 001deea0
// Prototype: undefined ~GetXProperty(GetXProperty * this)
// Body     : 001deea0 - 001deebb


/* juce::XWindowSystemUtilities::GetXProperty::~GetXProperty() */

void __thiscall juce::XWindowSystemUtilities::GetXProperty::~GetXProperty(GetXProperty *this)

{
  long lVar1;
  
  if (*(long *)(this + 8) != 0) {
                    /* try { // try from 001deeab to 001deeb9 has its CatchHandler @ 001deebc */
    lVar1 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar1 + 0x128))(*(undefined8 *)(this + 8));
  }
  return;
}


