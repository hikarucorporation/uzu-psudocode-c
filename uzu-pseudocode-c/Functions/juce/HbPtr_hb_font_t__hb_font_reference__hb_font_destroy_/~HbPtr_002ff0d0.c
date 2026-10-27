// Function : ~HbPtr
// Namespace: juce:HbPtr_hb_font_t__hb_font_reference__hb_font_destroy_
// Entry    : 002ff0d0
// Prototype: undefined8 ~HbPtr(HbPtr<hb_font_t,&hb_font_reference,&hb_font_destroy> * this)
// Body     : 002ff0d0 - 002ff0dc


/* juce::HbPtr<hb_font_t, &hb_font_reference, &hb_font_destroy>::~HbPtr() */

undefined8 __thiscall
juce::HbPtr<hb_font_t,&hb_font_reference,&hb_font_destroy>::~HbPtr
          (HbPtr<hb_font_t,&hb_font_reference,&hb_font_destroy> *this)

{
  undefined8 in_RAX;
  
  if (this != (HbPtr<hb_font_t,&hb_font_reference,&hb_font_destroy> *)0x0) {
                    /* try { // try from 002ff0d6 to 002ff0da has its CatchHandler @ 002ff0dd */
    hb_font_destroy((int *)this);
  }
  return in_RAX;
}


