// Function : ~Pair
// Namespace: juce:LruCache_std__tuple_float_float__juce__HbPtr_hb_font_t__hb_font_reference__hb_font_destroy~696c1b34:Pair
// Entry    : 00324940
// Prototype: undefined8 ~Pair(Pair * this)
// Body     : 00324940 - 0032494c


/* juce::LruCache<std::tuple<float, float>, juce::HbPtr<hb_font_t, &hb_font_reference,
   &hb_font_destroy>, 128ul>::Pair::~Pair() */

undefined8 __thiscall
juce::
LruCache<std::tuple<float,float>,juce::HbPtr<hb_font_t,&hb_font_reference,&hb_font_destroy>,128ul>::
Pair::~Pair(Pair *this)

{
  undefined8 in_RAX;
  
  if (this != (Pair *)0x0) {
                    /* try { // try from 00324946 to 0032494a has its CatchHandler @ 0032494d */
    hb_font_destroy((int *)this);
  }
  return in_RAX;
}


