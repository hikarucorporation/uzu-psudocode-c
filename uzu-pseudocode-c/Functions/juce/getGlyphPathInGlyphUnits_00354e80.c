// Function : getGlyphPathInGlyphUnits
// Namespace: juce
// Entry    : 00354e80
// Prototype: undefined getGlyphPathInGlyphUnits(juce * this, undefined4 param_1, long param_2)
// Body     : 00354e80 - 00354f25


/* juce::getGlyphPathInGlyphUnits(unsigned int, hb_font_t*) */

void __thiscall juce::getGlyphPathInGlyphUnits(juce *this,undefined4 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (getGlyphPathInGlyphUnits(unsigned_int,hb_font_t*)::funcs == '\0') {
    iVar2 = __cxa_guard_acquire(&getGlyphPathInGlyphUnits(unsigned_int,hb_font_t*)::funcs);
    if (iVar2 != 0) {
                    /* try { // try from 00354ef6 to 00354efa has its CatchHandler @ 00354f26 */
      getPathDrawFuncs();
      __cxa_atexit(HbPtr<hb_draw_funcs_t,&hb_draw_funcs_reference,&hb_draw_funcs_destroy>::~HbPtr,
                   &getGlyphPathInGlyphUnits(unsigned_int,hb_font_t*)::funcs,&__dso_handle);
      __cxa_guard_release(&getGlyphPathInGlyphUnits(unsigned_int,hb_font_t*)::funcs);
    }
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  this[0x20] = (juce)0x1;
  lVar1 = *(long *)(*(long *)(param_2 + 0x90) + 0x10);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 0x88);
  }
                    /* try { // try from 00354ed6 to 00354ee0 has its CatchHandler @ 00354f3d */
  (**(code **)(*(long *)(param_2 + 0x90) + 0xa8))
            (param_2,*(undefined8 *)(param_2 + 0x98),param_1,
             getGlyphPathInGlyphUnits(unsigned_int,hb_font_t*)::funcs,this,uVar3);
  return;
}


