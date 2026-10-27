// Function : ~HbPtr
// Namespace: juce:HbPtr_hb_face_t__hb_face_reference__hb_face_destroy_
// Entry    : 002ff170
// Prototype: undefined8 ~HbPtr(HbPtr<hb_face_t,&hb_face_reference,&hb_face_destroy> * this)
// Body     : 002ff170 - 002ff17c


/* juce::HbPtr<hb_face_t, &hb_face_reference, &hb_face_destroy>::~HbPtr() */

undefined8 __thiscall
juce::HbPtr<hb_face_t,&hb_face_reference,&hb_face_destroy>::~HbPtr
          (HbPtr<hb_face_t,&hb_face_reference,&hb_face_destroy> *this)

{
  undefined8 in_RAX;
  
  if (this != (HbPtr<hb_face_t,&hb_face_reference,&hb_face_destroy> *)0x0) {
                    /* try { // try from 002ff176 to 002ff17a has its CatchHandler @ 002ff17d */
    hb_face_destroy((int *)this);
  }
  return in_RAX;
}


