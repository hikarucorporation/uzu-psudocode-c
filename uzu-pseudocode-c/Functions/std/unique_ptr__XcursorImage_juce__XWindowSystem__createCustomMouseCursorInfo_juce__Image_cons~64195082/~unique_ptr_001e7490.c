// Function : ~unique_ptr
// Namespace: std:unique_ptr__XcursorImage_juce__XWindowSystem__createCustomMouseCursorInfo_juce__Image_cons~64195082
// Entry    : 001e7490
// Prototype: undefined ~unique_ptr(unique_ptr<_XcursorImage,juce::XWindowSystem::createCustomMouseCursorInfo(juce::Image_const&,juce::Point<int>)const::$_1> * this)
// Body     : 001e7490 - 001e74bb


/* std::unique_ptr<_XcursorImage, juce::XWindowSystem::createCustomMouseCursorInfo(juce::Image
   const&, juce::Point<int>) const::$_1>::~unique_ptr() */

void __thiscall
std::
unique_ptr<_XcursorImage,juce::XWindowSystem::createCustomMouseCursorInfo(juce::Image_const&,juce::Point<int>)const::$_1>
::~unique_ptr(unique_ptr<_XcursorImage,juce::XWindowSystem::createCustomMouseCursorInfo(juce::Image_const&,juce::Point<int>)const::__1>
              *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)this;
  if (lVar1 != 0) {
                    /* try { // try from 001e749f to 001e74ac has its CatchHandler @ 001e74bc */
    lVar2 = juce::SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar2 + 0x388))(lVar1);
  }
  *(undefined8 *)this = 0;
  return;
}


