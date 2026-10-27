// Function : ~XBitmapImage
// Namespace: juce:XBitmapImage
// Entry    : 002d22a0
// Prototype: undefined ~XBitmapImage(XBitmapImage * this)
// Body     : 002d22a0 - 002d23bf


/* juce::XBitmapImage::~XBitmapImage() */

void __thiscall juce::XBitmapImage::~XBitmapImage(XBitmapImage *this)

{
  long lVar1;
  long lVar2;
  
  if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
     (lVar2 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar2 != 0)) {
                    /* try { // try from 002d22c0 to 002d22cd has its CatchHandler @ 002d23c8 */
    lVar1 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar1 + 0x210))(lVar2);
  }
  if (*(long *)(this + 0x80) != 0) {
                    /* try { // try from 002d22d8 to 002d2325 has its CatchHandler @ 002d23d5 */
    lVar2 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar2 + 0x140))(*(undefined8 *)(this + 0x88),*(undefined8 *)(this + 0x80));
  }
  if (this[0xb0] == (XBitmapImage)0x0) {
    *(undefined8 *)(*(long *)(this + 0x50) + 0x10) = 0;
  }
  else {
    lVar2 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar2 + 1000))(*(undefined8 *)(this + 0x88));
    lVar2 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar2 + 0x120))(*(undefined8 *)(this + 0x88));
    shmdt(*(void **)(this + 0xa0));
    shmctl(*(int *)(this + 0x98),0,(shmid_ds *)0x0);
  }
  if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
     (lVar2 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar2 != 0)) {
                    /* try { // try from 002d2374 to 002d2381 has its CatchHandler @ 002d23c0 */
    lVar1 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar1 + 0x360))(lVar2);
  }
  free(*(void **)(this + 0x68));
  free(*(void **)(this + 0x60));
  lVar2 = *(long *)(this + 0x50);
  if (lVar2 != 0) {
                    /* try { // try from 002d239d to 002d23aa has its CatchHandler @ 002d23cd */
    lVar1 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar1 + 0xe0))(lVar2);
  }
  *(undefined8 *)(this + 0x50) = 0;
  ImagePixelData::~ImagePixelData((ImagePixelData *)this);
  return;
}


