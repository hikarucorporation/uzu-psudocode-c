// Function : clear
// Namespace: Steinberg:Vst:StringListParameter
// Entry    : 00195d00
// Prototype: undefined clear(StringListParameter * this)
// Body     : 00195d00 - 00195d58


/* Steinberg::Vst::StringListParameter::clear() */

void __thiscall Steinberg::Vst::StringListParameter::clear(StringListParameter *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 0x338);
  puVar1 = *(undefined8 **)(this + 0x340);
  if (puVar2 != puVar1) {
    do {
      free((void *)*puVar2);
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar1);
    if (*(long *)(this + 0x340) != *(long *)(this + 0x338)) {
      *(long *)(this + 0x340) = *(long *)(this + 0x338);
    }
  }
  *(undefined4 *)(this + 0x314) = 0xffffffff;
  return;
}


