// Function : ~HbPtr
// Namespace: juce:HbPtr_hb_draw_funcs_t__hb_draw_funcs_reference__hb_draw_funcs_destroy_
// Entry    : 00355250
// Prototype: undefined8 ~HbPtr(HbPtr<hb_draw_funcs_t,&hb_draw_funcs_reference,&hb_draw_funcs_destroy> * this)
// Body     : 00355250 - 0035525f


/* juce::HbPtr<hb_draw_funcs_t, &hb_draw_funcs_reference, &hb_draw_funcs_destroy>::~HbPtr() */

undefined8 __thiscall
juce::HbPtr<hb_draw_funcs_t,&hb_draw_funcs_reference,&hb_draw_funcs_destroy>::~HbPtr
          (HbPtr<hb_draw_funcs_t,&hb_draw_funcs_reference,&hb_draw_funcs_destroy> *this)

{
  undefined8 in_RAX;
  
  if (*(int **)this != (int *)0x0) {
                    /* try { // try from 00355259 to 0035525d has its CatchHandler @ 00355260 */
    hb_draw_funcs_destroy(*(int **)this);
  }
  return in_RAX;
}


