// Function : ~TypefaceNativeOptions
// Namespace: juce:TypefaceNativeOptions
// Entry    : 002ff230
// Prototype: undefined8 ~TypefaceNativeOptions(TypefaceNativeOptions * this)
// Body     : 002ff230 - 002ff23c


/* juce::TypefaceNativeOptions::~TypefaceNativeOptions() */

undefined8 __thiscall
juce::TypefaceNativeOptions::~TypefaceNativeOptions(TypefaceNativeOptions *this)

{
  undefined8 in_RAX;
  
  if (this != (TypefaceNativeOptions *)0x0) {
                    /* try { // try from 002ff236 to 002ff23a has its CatchHandler @ 002ff23d */
    hb_font_destroy((int *)this);
  }
  return in_RAX;
}


