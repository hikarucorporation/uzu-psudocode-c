// Function : ~unique_ptr
// Namespace: std:unique_ptr__XImage_juce__XBitmapImage__Deleter_
// Entry    : 002d2260
// Prototype: undefined ~unique_ptr(unique_ptr<_XImage,juce::XBitmapImage::Deleter> * this)
// Body     : 002d2260 - 002d228b


/* std::unique_ptr<_XImage, juce::XBitmapImage::Deleter>::~unique_ptr() */

void __thiscall
std::unique_ptr<_XImage,juce::XBitmapImage::Deleter>::~unique_ptr
          (unique_ptr<_XImage,juce::XBitmapImage::Deleter> *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)this;
  if (lVar1 != 0) {
                    /* try { // try from 002d226f to 002d227c has its CatchHandler @ 002d228c */
    lVar2 = juce::SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar2 + 0xe0))(lVar1);
  }
  *(undefined8 *)this = 0;
  return;
}


