// Function : ~GZIPDecompressorInputStream
// Namespace: juce:GZIPDecompressorInputStream
// Entry    : 004bdba0
// Prototype: undefined ~GZIPDecompressorInputStream(GZIPDecompressorInputStream * this)
// Body     : 004bdba0 - 004bdc64


/* juce::GZIPDecompressorInputStream::~GZIPDecompressorInputStream() */

void __thiscall
juce::GZIPDecompressorInputStream::~GZIPDecompressorInputStream(GZIPDecompressorInputStream *this)

{
  void *pvVar1;
  code *pcVar2;
  long *plVar3;
  
  *(undefined ***)this = &PTR__GZIPDecompressorInputStream_00713ac0;
  pvVar1 = *(void **)(this + 0x48);
  if (pvVar1 != (void *)0x0) {
    if ((((*(char *)((long)pvVar1 + 3) != '\0') && (*(long *)((long)pvVar1 + 0x48) != 0)) &&
        (pcVar2 = *(code **)((long)pvVar1 + 0x50), pcVar2 != (code *)0x0)) &&
       (((plVar3 = *(long **)((long)pvVar1 + 0x40), plVar3 != (long *)0x0 &&
         (*plVar3 == (long)pvVar1 + 8)) && ((int)plVar3[1] - 0x3f34U < 0x20)))) {
      if (plVar3[9] != 0) {
                    /* try { // try from 004bdbfd to 004bdc0f has its CatchHandler @ 004bdc65 */
        (*pcVar2)(*(undefined8 *)((long)pvVar1 + 0x58),plVar3[9]);
        plVar3 = *(long **)((long)pvVar1 + 0x40);
        pcVar2 = *(code **)((long)pvVar1 + 0x50);
      }
      (*pcVar2)(*(undefined8 *)((long)pvVar1 + 0x58),plVar3);
    }
    operator_delete(pvVar1);
  }
  *(undefined8 *)(this + 0x48) = 0;
  free(*(void **)(this + 0x40));
  if (this[0x10] != (GZIPDecompressorInputStream)0x0) {
    plVar3 = *(long **)(this + 8);
    *(undefined8 *)(this + 8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
      if (*(long **)(this + 8) != (long *)0x0) {
        (**(code **)(**(long **)(this + 8) + 8))();
      }
    }
  }
  *(undefined8 *)(this + 8) = 0;
  return;
}


