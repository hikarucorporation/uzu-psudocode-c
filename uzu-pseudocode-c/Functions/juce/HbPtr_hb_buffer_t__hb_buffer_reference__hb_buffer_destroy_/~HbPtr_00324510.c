// Function : ~HbPtr
// Namespace: juce:HbPtr_hb_buffer_t__hb_buffer_reference__hb_buffer_destroy_
// Entry    : 00324510
// Prototype: undefined8 ~HbPtr(HbPtr<hb_buffer_t,&hb_buffer_reference,&hb_buffer_destroy> * this)
// Body     : 00324510 - 0032451c


/* juce::HbPtr<hb_buffer_t, &hb_buffer_reference, &hb_buffer_destroy>::~HbPtr() */

undefined8 __thiscall
juce::HbPtr<hb_buffer_t,&hb_buffer_reference,&hb_buffer_destroy>::~HbPtr
          (HbPtr<hb_buffer_t,&hb_buffer_reference,&hb_buffer_destroy> *this)

{
  undefined8 in_RAX;
  
  if (this != (HbPtr<hb_buffer_t,&hb_buffer_reference,&hb_buffer_destroy> *)0x0) {
                    /* try { // try from 00324516 to 0032451a has its CatchHandler @ 0032451d */
    hb_buffer_destroy((int *)this);
  }
  return in_RAX;
}


