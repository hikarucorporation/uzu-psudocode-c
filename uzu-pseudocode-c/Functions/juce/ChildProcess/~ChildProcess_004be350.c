// Function : ~ChildProcess
// Namespace: juce:ChildProcess
// Entry    : 004be350
// Prototype: undefined ~ChildProcess(ChildProcess * this)
// Body     : 004be350 - 004be38f


/* juce::ChildProcess::~ChildProcess() */

void __thiscall juce::ChildProcess::~ChildProcess(ChildProcess *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    if (*(FILE **)((long)pvVar1 + 0x10) != (FILE *)0x0) {
      fclose(*(FILE **)((long)pvVar1 + 0x10));
    }
    if (*(int *)((long)pvVar1 + 4) != 0) {
                    /* try { // try from 004be374 to 004be378 has its CatchHandler @ 004be390 */
      close(*(int *)((long)pvVar1 + 4));
    }
    operator_delete(pvVar1);
  }
  *(undefined8 *)this = 0;
  return;
}


