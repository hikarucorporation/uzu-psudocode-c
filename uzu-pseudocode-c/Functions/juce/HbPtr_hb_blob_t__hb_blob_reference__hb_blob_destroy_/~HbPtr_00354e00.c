// Function : ~HbPtr
// Namespace: juce:HbPtr_hb_blob_t__hb_blob_reference__hb_blob_destroy_
// Entry    : 00354e00
// Prototype: undefined ~HbPtr(HbPtr<hb_blob_t,&hb_blob_reference,&hb_blob_destroy> * this)
// Body     : 00354e00 - 00354e6a


/* juce::HbPtr<hb_blob_t, &hb_blob_reference, &hb_blob_destroy>::~HbPtr() */

void __thiscall
juce::HbPtr<hb_blob_t,&hb_blob_reference,&hb_blob_destroy>::~HbPtr
          (HbPtr<hb_blob_t,&hb_blob_reference,&hb_blob_destroy> *this)

{
  pthread_mutex_t *__ptr;
  
  if ((this != (HbPtr<hb_blob_t,&hb_blob_reference,&hb_blob_destroy> *)0x0) && (*(int *)this != 0))
  {
    LOCK();
    *(int *)this = *(int *)this + -1;
    UNLOCK();
    if (*(int *)this == 0) {
      *(undefined4 *)this = 0xffff2153;
      __ptr = *(pthread_mutex_t **)(this + 8);
      if (__ptr != (pthread_mutex_t *)0x0) {
                    /* try { // try from 00354e2d to 00354e34 has its CatchHandler @ 00354e73 */
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &__ptr[1].__data,__ptr);
        free(__ptr);
        *(undefined8 *)(this + 8) = 0;
      }
      if (*(code **)(this + 0x28) != (code *)0x0) {
                    /* try { // try from 00354e52 to 00354e53 has its CatchHandler @ 00354e6b */
        (**(code **)(this + 0x28))(*(undefined8 *)(this + 0x20));
      }
      free(this);
      return;
    }
  }
  return;
}


